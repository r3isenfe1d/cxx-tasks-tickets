#include "structTicket.h"
#include "inputTicket.h"
#include "outputTicket.h"
#include "otherFuncltions.h"
#include "randomSeat.h"

/*	#14 дана сущность "билет на самолёт". Реализовать ввод/вывод информации о билете и 
генерацию случайных мест для каждого пассажира без повторений в диапозоне 150 мест и A-F (например 12A)*/

int main()
{
	int n = getSize();
	Ticket* tickets = allocMem(n);

	getTickets(tickets, n);
	tickets = randomSeat(tickets, n);
	showTickets(tickets, n);

	delete[] tickets;
	return 0;
}
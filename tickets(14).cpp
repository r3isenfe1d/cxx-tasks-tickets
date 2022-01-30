#include "structTicket.h"
#include "inputTicket.h"
#include "outputTicket.h"
#include "otherFuncltions.h"
#include "randomSeat.h"

/*	#14 ���� �������� "����� �� ������". ����������� ����/����� ���������� � ������ � 
��������� ��������� ���� ��� ������� ��������� ��� ���������� � ��������� 150 ���� � A-F (�������� 12A)*/

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
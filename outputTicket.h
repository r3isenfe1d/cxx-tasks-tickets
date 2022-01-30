#pragma once

#include <iostream>
#include "structTicket.h"

using namespace std;

void showInfo(Ticket obj) {
	//cout << "Passenger: " << obj.passenger.name << ' ' << obj.passenger.surname << '\n' << "Luggage: " << obj.passenger.luggage << endl;
	//cout << "From: " << obj.airport.from << '\n' << "To: " << obj.airport.to << '\n' << "Gate: " << obj.airport.gate << endl;
	//cout << "Date: " << obj.date << '\n' << "Flight #: " << obj.flightNum << '\n' << "Boarding time: " << obj.boardingTime << endl;
	cout << "Seat: " << obj.seat << endl;
}

void showTickets(Ticket* tickets, int n) {
	system("pause");
	system("cls");

	cout << "Your tickets:" << endl;
	for (int i = 0; i < n; i++) {
		cout << '\t' << '#' << (i + 1) << ' ';
		showInfo(tickets[i]);
		/*showSeat(tickets[i]);*/
	}
}
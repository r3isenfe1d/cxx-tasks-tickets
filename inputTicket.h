#pragma once

#include <iostream>
#include <string>
#include "otherFuncltions.h"
#include "structTicket.h"

using namespace std;

int getSize() {
	int n = 1;
	cout << "Input amount of tickets: ";
	cin >> n;
	while (n < 1) {
		cout << "Please, try again: ";
		cin >> n;
	}
	return n;
}

//Seat getInfoSeat() {
//	Seat seat;
//
//	cout << "Input seat: ";
//	clearCin();
//	getline(cin, seat.seat, '\n');
//
//	cout << "Input class (type of seat): ";
//	cin >> seat.type;
//
//	return seat;
//}

Airport getInfoAirport() {
	Airport airport;

	cout << "Input departure airport: ";
	clearCin();
	getline(cin, airport.from, '\n');

	cout << "Input arrival airport: ";
	clearCin();
	getline(cin, airport.to, '\n');

	cout << "Input gate: ";
	clearCin();
	getline(cin, airport.gate, '\n');

	return airport;
}

Passenger getInfoPassenger() {
	Passenger passenger;

	cout << "Passenger name: ";
	clearCin();
	getline(cin, passenger.name, '\n');

	cout << "Passenger surname: ";
	clearCin();
	getline(cin, passenger.surname, '\n');

	cout << "Does " << passenger.name << " " << passenger.surname << " have luggage? [y/n]: ";
	cin >> passenger.luggage;

	return passenger;
}

Ticket getInfo() {
	Ticket ticket;

	ticket.passenger = getInfoPassenger();
	ticket.airport = getInfoAirport();
	//ticket.seat = getInfoSeat();

	cout << "Input flight #: ";
	clearCin();
	getline(cin, ticket.flightNum, '\n');

	cout << "Input date: ";
	clearCin();
	getline(cin, ticket.date, '\n');

	cout << "Input boardingTime: ";
	clearCin();
	getline(cin, ticket.boardingTime, '\n');

	return ticket;
}

void getTickets(Ticket* tickets, int n) {
	tickets[0] = getInfo();
	for (int i = 0; i < n; i++) {
		cout << '\t' << "Ticket #" << (i + 1) << endl;
		tickets[i] = tickets[0];
	}
}
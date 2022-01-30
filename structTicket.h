#pragma once

#include <iostream>

using namespace std;

struct Passenger {
	string name;
	string surname;
	char luggage = 'N';
};

struct Airport {
	string from;
	string to;
	string gate;
};


struct Ticket {
	Passenger passenger;
	Airport airport;
	string seat;
	string flightNum;
	string date;
	string boardingTime;
};
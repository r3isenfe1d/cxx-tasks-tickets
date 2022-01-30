#pragma once

#include <string>
#include "structTicket.h"

using namespace std;

int randNum() {
	int n = rand() % 30 + 1;
	return n;
}

string randCh() {
	string src = "ABCDEF";
	int i = rand() % 6;
	char c = src[i];
	string dest = string(1, c);
	return dest;
}

string randSeat() {
	int	num = randNum();
	string numStr = to_string(num);

	string ch = randCh();
	string seat;
	seat = numStr + ch;

	return seat;
}

bool checkSeat(Ticket* tickets, string seat, int n) {
	for (int i = 0; i < n; i++) {
		if (seat == tickets[i].seat)
			return true;
	}
	return false;
}

Ticket* randomSeat(Ticket* tickets, int n) {
	string seat;

	for (int amount = 0; amount < n; amount++) {
		seat = randSeat();

		while (checkSeat(tickets, seat, amount)) {
			seat = randSeat();
		}

		tickets[amount].seat = seat;
	}

	return tickets;
}
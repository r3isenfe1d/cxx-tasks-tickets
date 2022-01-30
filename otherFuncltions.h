#pragma once

#include <iostream>
#include "structTicket.h"

Ticket* allocMem(int n) {
	Ticket* tickets = new Ticket[n];
	return tickets;
}

void clearCin() {
	if (char(cin.peek()) == '\n') {
		cin.ignore();
	}
}
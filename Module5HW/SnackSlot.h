#pragma once
#include <iostream>
#include <string>
#include "Snack.h"
using namespace std;

class SnackSlot {
	int capacity;
	Snack* slot;
	int filled;
public:
	SnackSlot();
	SnackSlot(int c);
	~SnackSlot();
	void addSnack(Snack* snack);
	void display(int n) const;
	void displaySlot() const;
	int getFilledSlots() const;
	void removeSnack();
	void removeByNumber(int n);
	int emptySlots() const;
};
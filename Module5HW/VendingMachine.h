#pragma once
#include <iostream>
#include <string>
#include "SnackSlot.h"
using namespace std;

class VendingMachine {
public:
	int capacity;
	int filled;
	SnackSlot* machine;
	VendingMachine();
	VendingMachine(int c);
	~VendingMachine();
	void addSlot(SnackSlot* slot);
	void removeSlot(); 
	void removeByNumber(int n);
	int getEmptySlotsCount() const;
	void displaySlot(int n) const; 
	void displayMachine() const; 
	void dispence(int slotNum, int snackNum); 
};
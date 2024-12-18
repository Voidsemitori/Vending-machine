#include <iostream>
#include <string>
#include "VendingMachine.h"
using namespace std;

VendingMachine::VendingMachine() {}
VendingMachine::VendingMachine(int c) {
	filled = 0;
	capacity = c;
	machine = new SnackSlot[capacity];
}
VendingMachine::~VendingMachine() {
	delete[] machine;
}
void VendingMachine::addSlot(SnackSlot* slot) {
	machine[filled] = *slot;
	filled++;
}
void VendingMachine::removeSlot() {
	filled--;
}
void VendingMachine::removeByNumber(int n) {
	if (n > (filled - 1)) {
		cout << "This slot is already empty!" << endl << "---------------------" << endl;
	}
	else {
		for (int i = 0; i < (filled - n); i++) {
			machine[n + i] = machine[n + i + 1];
		}
		filled--;
	}
}
int VendingMachine::getEmptySlotsCount() const {
	int emptySlots = 0;
	for (int i = 0; i < filled; i++) {
		emptySlots += machine[i].emptySlots();
	}
	return emptySlots;
}
void VendingMachine::displaySlot(int n) const {
	machine[n].displaySlot();
}
void VendingMachine::displayMachine() const {
	for (int i = 0; i < filled; i++) {
		cout << "Slot " << i << ":" << endl << endl;
		displaySlot(i);
		cout << "---------------------" << endl << endl;;
	}
}
void VendingMachine::dispence(int slotNum, int snackNum) {
	machine[slotNum].removeByNumber(snackNum);
}


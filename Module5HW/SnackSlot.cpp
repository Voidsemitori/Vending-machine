#include <iostream>
#include <string>
#include "SnackSlot.h"
using namespace std;

SnackSlot::SnackSlot() {}
SnackSlot::SnackSlot(int c) {
	filled = 0;
	capacity = c;
	slot = new Snack[capacity];
}
SnackSlot::~SnackSlot() {

}
void SnackSlot::addSnack(Snack* snack) {
	slot[filled] = *snack;
	filled++;
}
void SnackSlot::display(int n) const {
	if (n > (filled - 1)) {
		cout << "Empty" << endl << "---------------------" << endl;
	}
	else {
		slot[n].displaySnack();
	}
}
void SnackSlot::displaySlot() const {
	for (int i = 0; i < filled; i++) {
		slot[i].displaySnack();
	}
}
int SnackSlot::getFilledSlots() const {
	return filled;
}
void SnackSlot::removeSnack() {
	if (filled < 1) {
		cout << "Slot is empty!" << "---------------------" << endl;
	}
	else {
		filled--;
	}
}
void SnackSlot::removeByNumber(int n) {
	if (n > (filled - 1)) {
		cout << "This slot is already empty!" << endl << "---------------------" << endl;
	}
	else {
		for (int i = 0; i < (filled - n); i++) {
			slot[n + i] = slot[n + i + 1];
		}
		filled--;
	}
}
int SnackSlot::emptySlots() const{
	return capacity - filled;
}

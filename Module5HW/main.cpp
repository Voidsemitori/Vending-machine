#include <iostream>
#include <string>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
using namespace std;

int main() {

	int slotCount = 10;
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount);
	machine->addSlot(slot);
	cout << machine->getEmptySlotsCount();
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;

	/*Snack* bounty = new Snack("Bounty", 180, 90);
	Snack* snickers = new Snack("Snickers", 180, 100);
	Snack* twix = new Snack("Twix", 190, 110);
	Snack* mars = new Snack("Mars", 190, 100);
	Snack* shaurma = new Snack("Shaurma", 350, 400);
	Snack* burger = new Snack("Burger", 250, 350);
	Snack* sandwich = new Snack("Sandwich", 150, 300);
	SnackSlot* slot1 = new SnackSlot(5);
	SnackSlot* slot2 = new SnackSlot(10);
	SnackSlot* slot3 = new SnackSlot(10);
	slot1->addSnack(bounty);
	slot1->addSnack(snickers);
	slot1->addSnack(mars);
	slot1->addSnack(twix);
	slot2->addSnack(mars);
	slot2->addSnack(shaurma);
	slot2->addSnack(twix);
	slot2->addSnack(burger);
	slot3->addSnack(burger);
	slot3->addSnack(sandwich);
	slot3->addSnack(shaurma);
	VendingMachine* machine = new VendingMachine(10);
	machine->addSlot(slot1);
	machine->addSlot(slot2);
	machine->addSlot(slot3);
	machine->displayMachine();
	machine->dispence(2, 1);
	machine->displayMachine();
	cout << endl << "Empty slots: " << machine->getEmptySlotsCount() << endl;
	delete bounty;
	delete snickers;
	delete twix;
	delete mars;
	delete shaurma;
	delete burger;
	delete sandwich;
	delete slot1;
	delete slot2;
	delete slot3;
	delete machine;
	return 0;*/
}
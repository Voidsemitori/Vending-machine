#include <iostream>
#include <string>
#include "Snack.h"
using namespace std;

Snack::Snack() {}
Snack::Snack(string n) {
		name = n;
		price = 0;
		calories = 0;
	}
Snack::Snack(string n, int p) {
	name = n;
	price = p;
	calories = 0;
}
Snack::Snack(string n, int p, int c) {
	name = n;
	price = p;
	calories = c;
}
Snack::~Snack() {

}
void Snack::setName(string s) {
	name = s;
}
void Snack::setCalories(int c) {
	calories = c;
}
void Snack::setPrice(int p) {
	price = p;
}
string Snack::getName() const {
	return name;
}
int Snack::getCalories() const {
	return calories;
}
int Snack::getPrice() const {
	return price;
}
void Snack::displaySnack() const{
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Calories: " << calories << endl << "---------------------" << endl;
}
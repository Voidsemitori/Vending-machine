#pragma once
#include <iostream>
#include <string>
using namespace std;

class Snack {
	string name;
	int calories;
	int price;
public:
	Snack();
	Snack(string n);
	Snack(string n, int p);
	Snack(string n, int p, int c);
	~Snack();
	void setName(string s);
	void setCalories(int c);
	void setPrice(int p);
	string getName() const;
	int getCalories() const;
	int getPrice() const;
	void displaySnack() const;
};
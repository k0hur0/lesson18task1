#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Computer {
	char name[100] = "";
	float frequency = 0;
	int RAM = 0;
	bool DVD = false;
	float price = 0;

	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "Frequency: " << frequency << "GHz" << endl;
		cout << "RAM: " << RAM << "Gb" << endl;
		cout << "DVD: " << (DVD?"yes":"no") << endl;
		cout << "Price: " << price << "UAH" << endl;
	}
};
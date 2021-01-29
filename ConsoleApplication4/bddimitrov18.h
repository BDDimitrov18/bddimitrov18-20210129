#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct LAPTOP {
	int id;
	int year;
	string model;
	string brand;
};

void init(vector<LAPTOP> itemS);
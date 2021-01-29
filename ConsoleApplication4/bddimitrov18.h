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
void create(vector<LAPTOP> itemS, LAPTOP item);
LAPTOP enter();
void show(vector<LAPTOP> itemS);
vector<LAPTOP> findItemByBrand(vector<LAPTOP> itemS, string brand);
#include<iostream>
#include <string>
#include<vector>
#include "bddimitrov18.h"
using namespace std;

void init(vector<LAPTOP> itemS) {
    LAPTOP item;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> item.id;
        cin >> item.year;
        cin >> item.model;
        cin >> item.brand;
        itemS.push_back(item);
    }
}

void create(vector<LAPTOP> itemS, LAPTOP item)
{
    itemS.push_back(item);
}
#include<iostream>
#include <string>
#include<vector>
#include "bddimitrov18.h"
using namespace std;

void init(vector<LAPTOP>& itemS) {
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

void create(vector<LAPTOP> &itemS, LAPTOP item)
{
    itemS.push_back(item);
}

LAPTOP enter() {
    LAPTOP item;
    cin >> item.id;
    cin >> item.year;
    cin >> item.model;
    cin >> item.brand;
    return item;
}

void show(vector<LAPTOP> itemS) {
    for (size_t i = 0; i < itemS.size(); i++)
    {
        cout << itemS[i].id << " " << itemS[i].year << " " << itemS[i].model << " " << itemS[i].brand << endl;
    }
}

vector<LAPTOP> findItemByBrand(vector<LAPTOP> itemS, string brand)
{
    vector<LAPTOP> temp;
    for (size_t i = 0; i < itemS.size(); i++)
    {
        if (itemS[i].brand == brand)
        {
            temp.push_back(itemS[i]);
        }
    }

    if (temp.size() == 0)
    {
        throw "No records match your criteria!";
    }
    return temp;
}

vector<LAPTOP> findItemByModel(vector<LAPTOP> itemS, string model) {
    vector<LAPTOP> temp;
    for (size_t i = 0; i < itemS.size(); i++)
    {
        if (itemS[i].model == model)
        {
            temp.push_back(itemS[i]);
        }
    }

    if (temp.size() == 0)
    {
        throw "No records match your criteria!";
    }
    return temp;
}

vector<LAPTOP> findItemByYear(vector<LAPTOP> itemS, int year) {
    vector<LAPTOP> temp;
    for (size_t i = 0; i < itemS.size(); i++)
    {
        if (itemS[i].year == year)
        {
            temp.push_back(itemS[i]);
        }
    }

    if (temp.size() == 0)
    {
        throw "No records match your criteria!";
    }
    return temp;
}

float calcAverageYear(vector<LAPTOP> itemS)
{
    float sum =0;
    for (size_t i = 0; i < itemS.size(); i++)
    {
        sum += itemS[i].year;
    }
    return sum / itemS.size();
}
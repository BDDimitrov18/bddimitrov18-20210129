// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "bddimitrov18.h"
#include "bddimitrov18.cpp"
using namespace std;
int main()
{
    vector<LAPTOP> itemS;
    vector<LAPTOP> items;
    int av;
    LAPTOP item;
    init(itemS);
    show(itemS);
    item = enter();
    create(itemS, item);
    show(itemS);
    items = findItemByBrand(itemS, "hp");
    show(items);
    items = findItemByModel(itemS, "predator");
    show(items);
    items = findItemByYear(itemS, 2000);
    show(items);
    cout << "Calculation: " << calcAverageYear(itemS);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

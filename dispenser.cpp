#include "dispenser.h"
#include "iostream"

// Constructor setting object item stock to 50
dispenser::dispenser()
{
    itemStock = 50;
}

// Constructor setting itemstock to 50, and item cost to parameter
dispenser::dispenser(double setCost)
{
    itemStock = 50;
    itemCost = setCost;
}

// Constuctor setting item stock to parameter
dispenser::dispenser(int setStock)
{
    itemStock = setStock;
}

// Constructor setting stock and cost to parameters
dispenser::dispenser(int setStock, double setCost)
{
    itemStock = setStock;
    itemCost =setCost;
}

// Function returning stock of item
int dispenser::getStock()
{
    return itemStock;
}

// Function returning cost of item
double dispenser::getCost()
{
    return itemCost;
}

// Function to return remaining balance if user enters not enough cash
double dispenser::askMore(double currPayment, int itemNum)
{
    // remBal is the total balance - what the user has payed
    double remBal;
    remBal = (itemCost*itemNum) - currPayment;

    return remBal;
}

// Function to return extra money if user overpays
double dispenser::returnExtra(double currPayment, int itemNum)
{
    // extrBal is the current payment - the total cost of the item
    double extrBal;
    extrBal = currPayment - (itemCost*itemNum);

    return extrBal;
}

// Function to decrease stock by number of items sold after sale
void dispenser::makeSale(int numItems)
{
    itemStock -= numItems;
}

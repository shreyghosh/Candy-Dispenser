#include "cashregister.h"
#include <string>

// Constructor initializes money in cash register to 500
//0 arguments
cashregister::cashregister()
{
    registercash = 500;
}

// Consructor initialized money in cash register to specified amount
cashregister::cashregister(double startamount)
{
    registercash = startamount;
}

// Function returns current cash value in register
double cashregister::currentCash()
{
    return registercash;
}

// Function adds the money to the cash register when user enters money
void cashregister::addcash(double payment)
{
    registercash = registercash + payment;
}

// Function subtracts money from the register when giving change
void cashregister::subcash(double change)
{
    registercash = registercash - change;
}

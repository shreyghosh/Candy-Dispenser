#ifndef DISPENSER_H
#define DISPENSER_H
#include <string>


class dispenser
{

private:

    // Variables part of dispenser class for item stock and cost
    int itemStock;
    double itemCost;
    
public:

    // Constructors for setting item stock with no input, setting item stock with input,
    // setting cost and stock with cost input, and setting cost and stock with both inputs.
    dispenser();
    dispenser(int setStock);
    dispenser(double setCost);
    dispenser(int setStock, double setCost);

    // Fuction to return stock of object
    int getStock();

    // Function to return cost of object
    double getCost();

    // Function to return extra money is user overpays
    double returnExtra(double currPayment, int itemNum);

    // Function to ask more if user underpays
    double askMore(double currPayment, int itemNum);

    // Function to decrease stock once sale is made
    void makeSale(int numItems);
    
};

#endif // DISPENSER_H

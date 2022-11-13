#ifndef CASHREGISTER_H
#define CASHREGISTER_H



class cashregister
{
    //  amount of money in cashregister variable
    double registercash;

public:
    // Constructors to intitialize cash register with 500 dollars or specified amound
    cashregister();
    cashregister(double startamount);

    // Function to return current cash in register
    double currentCash();

    // Functions to add or subtract cash from the register
    // used for taking or returning money during the sale
    void addcash(double payment);
    void subcash(double change);
};

#endif // CASHREGISTER_H

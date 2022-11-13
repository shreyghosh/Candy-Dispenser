#include <iostream>
#include <cashregister.h>
#include <dispenser.h>

using namespace std;

int main()
{
    // Initializes different objects of the class dispenser
    dispenser candy(50, 6.99);
    dispenser chips(50, 5.99);
    dispenser gum(50, 4.99);
    dispenser cookies(50, 3.99);
    cashregister reg(500);

    // Variables initialized needed in program
    int selectionType;
    int numItems;
    double userPayment;
    double extraPayment;
    double totalCost;


    // Menu displayed to the user of machine
    cout << "Please make your choice: " << endl;
    cout << "1) A bar of Candy - " << "$" << candy.getCost() << " - " << candy.getStock() << " left" << endl;
    cout << "2) A bag of Chips - " << "$" << chips.getCost() << " - " << chips.getStock() << " left" << endl;
    cout << "3) A package of Gum - " << "$" << gum.getCost() << " - " << gum.getStock() << " left" << endl;
    cout << "4) A box of Cookies - " << "$" << cookies.getCost() << " - " << cookies.getStock() << " left" << endl;
    cout << "5) Exit Here." << endl;

    // User enters choice of snack
    cout << "Please enter your choice of snack here: ";
    cin >> selectionType;

    // While loop ensures program closes if 5 is entered
    while (selectionType != 5)
    {
        // Asks user to enter number of items wanted
        cout << "Please enter the amount you would like to purchase: ";
        cin >> numItems;

        // Switch statement manages the 4 different options of snack
        switch (selectionType)
        {
            // Candy option
            case 1:
                //Ensures that numItems is not less than 0 or more than stock
                while (numItems < 0 || numItems > candy.getStock())
                {
                    cout << "Please purchase a real amount of this item (0 - " << candy.getStock() << ")" << endl;
                    cout << "Please enter the amount you would like to purchase: ";
                    cin >> numItems;
                }
                // Calculates total cost based on items requested and price
                // User can enter payment
                totalCost = candy.getCost() * numItems;
                cout << "That will cost you $" << totalCost << endl;
                cout << "Please enter the cash payment: ";
                cin >> userPayment;
                reg.addcash(userPayment);
                // While statement for if user does not enter exact cash value
                while (userPayment != totalCost)
                {
                    // If statement for if user pays too less
                    if (userPayment < totalCost)
                    {
                        cout << "You owe $" << candy.askMore(userPayment, numItems) << endl;
                        cout << "Please enter amount: ";
                        cin >> extraPayment;
                        reg.addcash(extraPayment);
                        userPayment += extraPayment;
                        extraPayment = 0;
                    }

                    // Else if statement for if user pays too much
                    else if (userPayment > totalCost)
                    {
                        cout << "Your change is $" << candy.returnExtra(userPayment, numItems) << endl;
                        reg.subcash(candy.returnExtra(userPayment, numItems));
                        userPayment = totalCost;
                    }
                }

                // Decreases stock amount and thanks user for purchase
                candy.makeSale(numItems);
                cout <<endl;
                cout << "Thank you for your payment! Enjoy your snack!" << endl;
                cout << endl;
                break;
            case 2:
                //Ensures that numItems is not less than 0 or more than stock
                while (numItems < 0 || numItems > chips.getStock())
                {
                    cout << "Please purchase a real amount of this item (0 - " << chips.getStock() << ")" << endl;
                    cout << "Please enter the amount you would like to purchase: ";
                    cin >> numItems;
                }
                // Calculates total cost based on items requested and price
                // User can enter payment
                totalCost = chips.getCost() * numItems;
                cout << "That will cost you $" << chips.getCost() * numItems << endl;
                cout << "Please enter the cash payment: ";
                cin >> userPayment;
                reg.addcash(userPayment);
                // While statement for if user does not enter exact cash value
                while (userPayment != totalCost)
                {
                    // If statement for if user pays too less
                    if (userPayment < totalCost)
                    {
                        cout << "You owe $" << chips.askMore(userPayment, numItems) << endl;
                        cout << "Please enter amount: ";
                        cin >> extraPayment;
                        reg.addcash(extraPayment);
                        userPayment += extraPayment;
                        extraPayment = 0;
                    }

                    // Else if statement for if user pays too much
                    else if (userPayment > totalCost)
                    {
                        cout << "Your change is $" << chips.returnExtra(userPayment, numItems) << endl;
                        reg.subcash(candy.returnExtra(userPayment, numItems));
                        userPayment = totalCost;
                    }
                }
                // Decreases stock amount and thanks user for purchase
                chips.makeSale(numItems);
                cout <<endl;
                cout << "Thank you for your payment! Enjoy your snack!" << endl;
                cout << endl;

                break;
            case 3:
                //Ensures that numItems is not less than 0 or more than stock
                while (numItems < 0 || numItems > gum.getStock())
                {
                    cout << "Please purchase a real amount of this item (0 - " << gum.getStock() << ")" << endl;
                    cout << "Please enter the amount you would like to purchase: ";
                    cin >> numItems;
                }
                // Calculates total cost based on items requested and price
                // User can enter payment
                totalCost = gum.getCost() * numItems;
                cout << "That will cost you $" << gum.getCost() * numItems << endl;
                cout << "Please enter the cash payment: ";
                cin >> userPayment;
                reg.addcash(userPayment);
                // While statement for if user does not enter exact cash value
                while (userPayment != totalCost)
                {
                    // If statement for if user pays too less
                    if (userPayment < totalCost)
                    {
                        cout << "You owe $" << gum.askMore(userPayment, numItems) << endl;
                        cout << "Please enter amount: ";
                        cin >> extraPayment;
                        reg.addcash(extraPayment);
                        userPayment += extraPayment;
                        extraPayment = 0;
                    }

                    // Else if statement for if user pays too much
                    else if (userPayment > totalCost)
                    {
                        cout << "Your change is $" << gum.returnExtra(userPayment, numItems) << endl;
                        reg.subcash(candy.returnExtra(userPayment, numItems));
                        userPayment = totalCost;
                    }
                }
                // Decreases stock amount and thanks user for purchase
                gum.makeSale(numItems);
                cout <<endl;
                cout << "Thank you for your payment! Enjoy your snack!" << endl;
                cout << endl;

                break;
            case 4:
                //Ensures that numItems is not less than 0 or more than stock
                while (numItems < 0 || numItems > cookies.getStock())
                {
                    cout << "Please purchase a real amount of this item (0 - " << cookies.getStock() << ")" << endl;
                    cout << "Please enter the amount you would like to purchase: ";
                    cin >> numItems;
                }
                // Calculates total cost based on items requested and price
                // User can enter payment
                totalCost = cookies.getCost() * numItems;
                cout << "That will cost you $" << cookies.getCost() * numItems << endl;
                cout << "Please enter the cash payment: ";
                cin >> userPayment;
                reg.addcash(userPayment);
                // While statement for if user does not enter exact cash value
                while (userPayment != totalCost)
                {
                    // If statement for if user pays too less
                    if (userPayment < totalCost)
                    {
                        cout << "You owe $" << cookies.askMore(userPayment, numItems) << endl;
                        cout << "Please enter amount: ";
                        cin >> extraPayment;
                        reg.addcash(extraPayment);
                        userPayment += extraPayment;
                        extraPayment = 0;
                    }

                    // Else if statement for if user pays too much
                    else if (userPayment > totalCost)
                    {
                        cout << "Your change is $" << cookies.returnExtra(userPayment, numItems) << endl;
                        reg.subcash(candy.returnExtra(userPayment, numItems));
                        userPayment = totalCost;
                    }

                }
                // Decreases stock amount and thanks user for purchase
                cookies.makeSale(numItems);
                cout <<endl;
                cout << "Thank you for your payment! Enjoy your snack!" << endl;
                cout << endl;

                break;

                // Default statement for if user enters item not on the menu
            default:
                cout << "This item does not exist! Please enter an item from the menu." << endl;

        }

        // Loop to allow user to choose out more snacks to pick unless they want to exit (5)
        cout << endl;

        cout << "Please make your choice: " << endl;
        cout << "1) A bar of Candy - " << "$" << candy.getCost() << " - " << candy.getStock() << " left" << endl;
        cout << "2) A bag of Chips - " << "$" << chips.getCost() << " - " << chips.getStock() << " left" << endl;
        cout << "3) A package of Gum - " << "$" << gum.getCost() << " - " << gum.getStock() << " left" << endl;
        cout << "4) A box of Cookies - " << "$" << cookies.getCost() << " - " << cookies.getStock() << " left" << endl;
        cout << "5) Exit Here." << endl;

        cout << "Please enter your choice of snack here: ";
        cin >> selectionType;


    }
    cout << "Have a good day!" << endl;

}

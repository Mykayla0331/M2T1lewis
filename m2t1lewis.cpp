// CSC 134
// M2t1 
// Mykayla
// 2/13/2026

#include <iostream>
#include <iomanip> // for decimal places
using namespace std;



int main() {
    // declare my variables
    string item_name = "game catridge"; // item
    string name; // user's name
    int item_count = 30; // in stock
    int number;

    double item_cost = 60;  // price
    double total_cost; // total cost

    //set 2 decimal places.
    cout << setprecision(2) << fixed;

    // do the work
    cout << "Welcome to the " <<  item_name << " store." << " To get you started, what is your name? " << endl;
    cin >> name;
    cout << "Hello, " << name << ". We have " << item_count << " " << item_name << ". How many game cartidges would you want?" << endl;
    cin >> number;
   

    // calculate the total price
    total_cost = number * item_cost;
    
    // print the cost

    cout << "For " << number << " Game cartridges that would be... $" << total_cost << " as they cost $" << item_cost << " each." << endl; "Would that be cash or card?";
    cout << "Thank you so much for the purchase, " << name << "! Have a nice day!! :D" << endl;

    return 0; 
}
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

//Set constants
double containerc = 2.76;
double pricec = 4.12;
double profitc = 1.45;

int main()
{
    //Output lines for initial statements
    cout << setfill('*') << setw(70) << "*" << endl;
    cout << setfill('*') << setw(50) << " Welcome to my cheese business calulator " << setw(20) << "*" << endl;
    cout << setfill('*') << setw(70) << "*" << endl;
    cout << setfill(' ') << setw(70) << " " << endl;

    //Ask user for input and store in a variable
    int usercheese;
    cout << "Please enter the total number of kilograms of cheese produced: " << endl;
    cin >> usercheese;

    //Calculations using user input
    int totalcontainer = round(usercheese/containerc);
    double totalcost = totalcontainer*pricec;
    double totalprofit = totalcontainer*profitc;

    //Output lines for calculations
    cout << setfill(' ') << setw(60) << left << "The number of containers to hold the cheese is: " << setfill(' ') << setw(10) << right << totalcontainer << endl;
    cout << setfill(' ') << setw(60) << left << "The cost of producing " + to_string(totalcontainer) + " of cheese is: $" << setfill(' ') << setw(10) << right << fixed << setprecision(2) << totalcost << endl;
    cout << setfill(' ') << setw(60) << left << "The profit from producing " + to_string(totalcontainer) + " of cheese is: $" << setfill(' ') << setw(10) << right << totalprofit << endl;
}
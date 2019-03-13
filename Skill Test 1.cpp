#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payRate, grossIncome, netEarnings, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENTAGE_OF_INCOME = 0.10;
    const double SCHOOL_PERCENTAGE_OF_INCOME = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE_OF_INCOME = 0.25;
    const double PARENTS_ADDITIONAL_SAVINGS_BOND = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hoursWorked;
    
    cout << "What was the hourly rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netEarnings = grossIncome *= TAX_RATE;
    clothesAmount = netEarnings * CLOTHES_PERCENTAGE_OF_INCOME;
    schoolAmount = netEarnings * SCHOOL_PERCENTAGE_OF_INCOME;
    netEarnings -= (clothesAmount + schoolAmount); // Calculate what is now left
    bondsAmount = netEarnings * SAVINGS_BONDS_PERCENTAGE_OF_INCOME;
    parentsBondsAmount = bondsAmount * PARENTS_ADDITIONAL_SAVINGS_BOND;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross income: $" << grossIncome << endl;
    cout << "Net earnings: $" << netEarnings << endl;
    cout << "Clothes & other accessories: $" << clothesAmount << endl;
    cout << "School supplies: $" << schoolAmount << endl;
    cout << "Savings bonds: $" << bondsAmount << endl;
    cout << "Parents additional saving bonds: $" <<parentsBondsAmount << endl;
    
    _getch();
    return 0;
}
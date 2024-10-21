/*
* Airgead Banking Interest Calculator
* 
* 
* Author: Jaden Williams
* Date: 10/5/24
*/

#include <iostream>
#include "InvestmentCalculator.h"

using namespace std;

int main() {
    double initialInvestment, monthlyDeposit, annualInterest;
    int years;

    //calls the function to display the input prompt
    DisplayInputPrompt();

    //These next cout and cin statements get the info to calculate
    cout << "Initial Investment Amount: ";
    cin >> initialInvestment;

    cout << "Monthly Deposit: ";
    cin >> monthlyDeposit;

    cout << "Annual Interest (Compounded): ";
    cin >> annualInterest;

    cout << "Number of Years: ";
    cin >> years;

    // Validate inputs, making sure they're positive
    if (initialInvestment < 0 || monthlyDeposit < 0 || annualInterest < 0 || years < 0) {
        cout << "All values must be positive real numbers." << endl;
        return 1; // Exit with an error code if inputs are invalid
    }

    //Calls the function to calculate and display the yearly balances
    CalculateAndDisplayBalances(initialInvestment, monthlyDeposit, annualInterest, years);

    return 0;
}

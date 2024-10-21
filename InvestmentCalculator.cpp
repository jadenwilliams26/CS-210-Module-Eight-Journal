#include <iostream>
#include <iomanip>
#include "InvestmentCalculator.h"

using namespace std;

//Displays the welcome message and input prompt
void DisplayInputPrompt() {
    cout << "|-------------------------------------------------|" << endl;
    cout << "|Welcome to Airgead Banking Investment Calculator!|" << endl;
    cout << "Please enter the following information:" << endl << endl;
}

//Calculates the overall balance for investments
void CalculateAndDisplayBalances(double initialInvestment, double monthlyDeposit, double annualInterest, int years) {
    int months = years * 12; //Total months based on years
    double balanceWithoutDeposits = initialInvestment;
    double balanceWithDeposits = initialInvestment;

    cout << fixed << setprecision(2); //Formats to two decimal places

    //Displays the balances without monthly deposits
    cout << "\n---------------------------------------------" << endl;
    cout << "-Year-End Balances Without Monthly Deposits:-\n";
    cout << "-Year----Balance--------Earned Interest------\n";

    //Calculate year-end balances without aditional deposits
    for (int year = 1; year <= years; ++year) {
        double earnedInterest = 0; //Initializes earned interest

        //Loop through each month to calculate interest
        for (int month = 1; month <= 12; ++month) {
            double interest = (balanceWithoutDeposits * (annualInterest / 100.0) / 12);
            balanceWithoutDeposits += interest; //Adds interest
            earnedInterest += interest; //Totals up the earned interest
        }

        cout << year << "\t$" << balanceWithoutDeposits << "\t\t$" << earnedInterest << endl;
    }

    cout << "\n------------------------------------------" << endl;
    cout << "-Year-End Balances With Monthly Deposits:-\n";
    cout << "-Year----Balance--------Earned Interest---\n";

    //Calculate year-end balances with deposits
    for (int year = 1; year <= years; ++year) {
        double earnedInterest = 0;

        //Loops through each month
        for (int month = 1; month <= 12; ++month) {
            double total = balanceWithDeposits + monthlyDeposit;
            double interest = (total * (annualInterest / 100.0) / 12);
            balanceWithDeposits += monthlyDeposit + interest; //Adds interests and deposits
            earnedInterest += interest; //Totals up the earned interest
        }

        cout << year << "\t$" << balanceWithDeposits << "\t\t$" << earnedInterest << endl;
    }

    cout << "\nPress enter to continue...\n";
    cin.ignore();
    cin.get();
}

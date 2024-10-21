#pragma once
#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

//Function that displays the input prompt to the user
void DisplayInputPrompt();
//Function that displays balances with and without monthly investments
void CalculateAndDisplayBalances(double initialInvestment, double monthlyDeposit, double annualInterest, int years);

#endif // INVESTMENT_CALCULATOR_H


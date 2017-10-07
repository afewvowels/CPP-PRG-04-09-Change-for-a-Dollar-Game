//
//  main.cpp
//  PRG-4-9-Change-for-a-Dollar-Game
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Create a change-counting game that gets the user to enter the number of coins required
//  to make exactly one dollar. The program should ask the user to enter the number of
//  pennies, nickels, dimes, and quarters. If the total value of the coins entered is equal to
//  one dollar, the program should congratulate the user for winning the game. Otherwise,
//  the program should display a message indicating whether the amount entered was more
//  than or less than one dollar.

#include <iostream>

using namespace std;

int main()
{
    float fltCoinSum,
    fltCoinSumDifference;
    
    float const FLT_COIN_VALUE_PENNY = 0.01f,
                FLT_COIN_VALUE_NICKEL = 0.05f,
                FLT_COIN_VALUE_DIME = 0.10f,
                FLT_COIN_VALUE_QUARTER = 0.25f,
                FLT_DOLLAR_VALUE = 1.00f;
    
    int intCoinsPennies,
        intCoinsNickels,
        intCoinsDimes,
        intCoinsQuarters;
    
    cout << "Please enter a number of pennies:\n";
    cin >> intCoinsPennies;
    while(!cin || intCoinsPennies < 0 || intCoinsPennies > 100)
    {
        cout << "Please enter a number of pennies between 0 and 100:\n";
        cin.clear();
        cin.ignore();
        cin >> intCoinsPennies;
    }
    
    cout << "Please enter a number of nickels:\n";
    cin >> intCoinsNickels;
    while(!cin || intCoinsNickels < 0 || intCoinsNickels > 100)
    {
        cout << "Please enter a number of nickels between 0 and 100:\n";
        cin.clear();
        cin.ignore();
        cin >> intCoinsNickels;
    }
    
    cout << "Please enter a number of dimes:\n";
    cin >> intCoinsDimes;
    while(!cin || intCoinsDimes < 0 || intCoinsDimes > 100)
    {
        cout << "Please enter a number of dimes between 0 and 100:\n";
        cin.clear();
        cin.ignore();
        cin >> intCoinsDimes;
    }
    
    cout << "Please enter a number of quarters:\n";
    cin >> intCoinsQuarters;
    while(!cin || intCoinsQuarters < 0 || intCoinsQuarters > 100)
    {
        cout << "Please enter a number of quarters between 0 and 100:\n";
        cin.clear();
        cin.ignore();
        cin >> intCoinsQuarters;
    }
    
    fltCoinSum = intCoinsPennies * FLT_COIN_VALUE_PENNY +
                 intCoinsNickels * FLT_COIN_VALUE_NICKEL +
                 intCoinsDimes * FLT_COIN_VALUE_DIME +
                 intCoinsQuarters * FLT_COIN_VALUE_QUARTER;
    
    
    if(fltCoinSum > FLT_DOLLAR_VALUE)
    {
        fltCoinSumDifference = fltCoinSum - FLT_DOLLAR_VALUE;
        cout << "Your coins were $" << fltCoinSumDifference << " too many.";
    }
    else if(fltCoinSum < FLT_DOLLAR_VALUE)
    {
        fltCoinSumDifference = FLT_DOLLAR_VALUE - fltCoinSum;
        cout << "Your coins were $" << fltCoinSumDifference << " too few.";
    }
    else
    {
        cout << "Congratulations! Your coins total exactly $1.00.";
    }
    
    return 0;
}



/*
Filename: Energy Drink Consumption.cpp
Programmer: Arianna Washington
Date: 02FEB2025
Requirements: A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 
percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks,
approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

*/ 

#include <iostream>

using namespace std;

int main()
{
    int totalcustomers = 16500;
    float percentoneormore = .15;
    float numberofoneormore = totalcustomers * percentoneormore;
    float percentcitrusdrinks = .58;
    float numbercitrusdrinkers = totalcustomers * percentcitrusdrinks;

    cout << "Number of customers in who purchase one or more energy drinks per week:" << " " << numberofoneormore << endl;
    cout << "Number of customers who refer citrus-flavored energy drinks:" << " " << numbercitrusdrinkers;


}


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
    int totalcustomers;
   float oneormoredrinks, prefercitrus;
 
   cout << "Total number of customers surveyed:" << " ";
   cin >> totalcustomers;
   cout << "Number of customers in who purchase one or more energy drinks per week:" << " ";
   cin >> oneormoredrinks;

   float percentoneormore = oneormoredrinks / 100;
   float numberofoneormore = totalcustomers * percentoneormore;


   cout << "Percent of customers that purchase one or more energy drinks per week:" << "" << percentoneormore << endl;

   cout << "Number of customers who refer citrus-flavored energy drinks:" << " ";
   cin >> prefercitrus;

   float percentcitrusdrinks = prefercitrus / 100;
   float numbercitrusdrinkers = totalcustomers * percentcitrusdrinks;

   cout << "Percent of customers that prefer citrus-flavored energy drinks:" << " " << percentcitrusdrinks;

}


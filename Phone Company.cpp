// David Ye   Cell Phone Program  9/1/2012

//This program calculates the monthly payment of two Acmecell plans:
//Standard plan costs $20 flat charge. Includes 20 hours and $0.50 for Overages.
//Pemium plan costs $25 flat charge. Includes 30 hours and 0.50 for overages. 
//Premium plan also comes with a 10% discount on total charge.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {

// Get the number of hours the costumer used this month.
    double numHours;
    cout << "Welcome, This program will calculate this month's Charges for your AcmeCell phone bill" << endl;
    cout << "Please enter the number of hours you used your cell phone this month:" << endl;
    cin >> numHours; 

// Get the plan type the costumer is on; either standard or premium plan.
    string planType;
    cout << cout << "Enter Plan type: "
		<< "S or s (Standard Plan), "
		<< "P or p (Premium Plan): " << endl;
    cin >> planType;

//Calculate this month's charges for the standard plan
    if ((planType == "S") || (planType == "s")) {
       cout << "Your fixed monthly charges are $20.00" << endl;
//Subtract the costumer's hours from 20 hours
//Calculate if the customer used less than 20 hours 
       double additionalHoursS, OverageS;
       if (numHours < 20.00) {
          OverageS = 0;
       }
       else {
          additionalHoursS = (numHours - 20.00);
//Calculate the overage the costumer had accumulated form the additional number of hours
          OverageS = (additionalHoursS * .50);
       }

       cout << "Your additional per hour charges are " << OverageS << endl;

//Calculate the total month's charges by adding the overage charges to the plan cost
       double totalChargeS;
              totalChargeS = (20.00 + OverageS);
       cout << "Your Total for this month's charges is " << totalChargeS << endl;       

    }

//Calculate this month's charges for the premium plan
    else {
         cout << "Your fixed monthly charges are $25.00" << endl;

//Subtract customer's hours from 30 hours
//Calculate if the customer used less than 30 hours
       double additionalHoursP, OveragesP;
       if (numHours < 30.00) {
          OveragesP = 0;
       }
       else {
          additionalHoursP = (numHours - 30.00);
          OveragesP = (additionalHoursP * .50);
       }

       cout << "Your overage charges are " << OveragesP << endl;
    
//Customer has 10% off from total charges!
       cout << "A 10% discount was deducted from your monthly bill!" << endl;
       double totalChargeP;
              totalChargeP = (25.00 + OveragesP);

       double discount, discountTotalMonthlyP;
              discount = (totalChargeP * .10);
              discountTotalMonthlyP = (totalChargeP - discount);
       cout << "Your Total for this month's charges is " << discountTotalMonthlyP << endl;

       }

   return 0;

}

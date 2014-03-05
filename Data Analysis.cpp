/*David Ye Project
Title : Hwk1 Programming Project 1
Created on : 2/18/13
Description : Read the contents of a file and analyze the data
Purpose : To calculate the Total, Average, Even / Odd numbers, Variance, Perfect Squares and Sum of digits in the file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
int ReadFile(ifstream& infile);
int ReadPart2 ( ifstream& infile);

int main ()
{
    ifstream infile;// Opening file
    infile.open("randnums.txt");
    ReadFile(infile);
    infile.close();
    infile.open("randnums.txt");
    ReadPart2(infile);
    infile.close();// close file

return 0;
}
int ReadFile (ifstream& infile)
{
    // declaring variables
    int num;
    double sum, average,variance, sumsqr;
    int maxnum =0,total=0;
    int minimum= num  ;
     double counter =0;
     while (infile>> num)// stuffing integers from file into num
     {
        if (num>maxnum) // if statememnt for finding greatest number in file
            maxnum = num;
        if ( num < minimum) // if statement for finding smallest number in file
            minimum = num;
        total += num; // calculation for total digits in file
        counter++; // total number of integers in file
        sumsqr += num * num; // sum of the squares
    }
    average = total/counter;
    variance = sumsqr/counter - average * average; // mean of squares minus square of mean

        cout << "Count = " <<  counter << endl;
        cout << "Max = "<< maxnum << endl;
        cout << "Min = "<< minimum<< endl;
        cout << "Average = "<< total/counter << endl;
        cout << "Variance = " << variance << endl;
        cout << "Total = "<< total << endl;

}
int ReadPart2 ( ifstream& infile)
{
    // initialize variables
    int SqrtCount =0, counter = 0,primo = 0, sum = 0, OddCount = 0;;
    int num ;
    while (infile >> num) // stuffing integers from file into num
    {
        counter++;
        if (num%2!=0) // if the remainder of num divided by 2 does not equal 0, OddCount counter increment
            OddCount++;
        double d_sqrt = sqrt( num ); // d_sqrt equals the square root of num
    int i_sqrt = d_sqrt;
    if ( d_sqrt == i_sqrt ) // if double is equal to the integer , SqrtCount counter increments
        SqrtCount ++;
    bool prime=true; // boolean statement for prime
        for (int j=2; j*j<=num; j++) // for loop for divisors
        {
            if (num % j == 0) // if statement for number divided by the integer j
            {
                prime=false; // if prime is false , break out of loop
                break;
            }
        }
        if(prime) // if prime is true, prime counter increment
            primo++;
        while ( num > 0 ) // while loop for when the integer num from file is greater than 0
        {
    sum += num % 10;
    num /= 10;
        }
    }
    // Print statements
    cout << "Odd Numbers =" << OddCount << endl;
    cout << "Even Numbers = " << counter - OddCount << endl;
    cout << "Prime Numbers = " << primo << endl;
    cout << "Perfect Squares = " << SqrtCount << endl;
    cout << "Sum of All Digits = " << sum << endl;


}

// 6.14.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
#include <cmath>
using std::cin;


int main()
{
    int Downpayment = 1000;
    int n;
    float Month;
     float principal; 
     float annual;
     float monthlyrate;
     cout << "Price of the car: ";
         cin >> principal;
         cout << "Enter desired rate in percent decimal form: ";
         cin >> annual;
         float a, b, c, d, e, f, monthly, payment;
         a = principal - Downpayment;
         b = annual / 12;
         c = b * a;
         d = 1 + annual / 12;
         cout << "How many monthly payments?: ";
         e = (1 - d) * c;
         f = e * pow(f, Month);
         cin >> monthly;
         
         

         return 0;
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

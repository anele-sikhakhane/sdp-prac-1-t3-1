// Euler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

void Euler1(){
	//Eulers Problem #1

	int sum = 0;//init variables

	for (int i = 1; i <= 1000; i++) //loop through all integers between 1 and 1000
	{
		if (i % 3 == 0 || i % 5 == 0) { //if the number can be divided by either 3 or 5 perfectly 
			sum += i;                   //then add it to the sum
		}
	}
	cout << "The sum of the multiples of 3 and 5 for all natural numbers under 1000 is: ";
	cout << sum;
}

void Euler3()//written by Luke Wilkinson G16W4712
{
	int count;
	uint64_t num;
	uint64_t bigFac;

	//cout << "Find the Largest Prime Factor, enter a number" << endl;
	//cin >> num;

	//test that it works with the number for the question: What is the largest prime factor of the number 600851475143?
	num = 600851475143;

	for (int fac = 1; fac <= num; fac++)
	{
		if (num % fac == 0)
		{
			count = 0;

			for (int testP = 2; count == 0 && fac > testP; testP++) //Test the prime
			{
				if (fac % testP == 0)
				{
					count++;
				}
			}

			if (count == 0)
			{
				bigFac = fac;
			}
		}

	}
	cout << "The Biggest factor is: ";
		cout << bigFac;

}

void Euler2()
{

    //cout<<"Hello World";
 
  int n1=1;
  int sum = 0;
  int n2=2;
  int n3 = 1;
  long i = 1;
  long max = 4000000; //all numbers less then 4mil
  while(n2 <= max)
  {
      n3 = n2 + n1;
      if (n2 %2 ==0)
      {
          sum += n2;

      }
      n1 = n2;
      n2 = n3;
  }
  cout << sum;
  cout << " is the total sum";
  
      
  

  
  


    //return 0;

}



int main()
{
	int stop;


	//add your Euler Method
	Euler1(); //Euler 1 done by Liam
	cout << '\n';
	Euler3(); //Euler 3 done by Luke
	cout << '\n';
	Euler2(); //ane_sik

	cin >> stop;
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


// Problem 6.9.cpp : Defines the entry point for the console application.
//
//9. Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
//Member data is the fraction’s numerator and denominator.Member functions should
//accept input from the user in the form 3 / 5, and output the fraction’s value in the same
//format.Another member function should add two fraction values.Write a main() program
//that allows the user to repeatedly input two fractions and then displays their sum.After
//each operation, ask whether the user wants to continue

//8. Start with the fraction - adding program of Exercise 9 in Chapter 2, “C++ Programming
//Basics.” This program stores the numerator and denominator of two fractions before
//adding them, and may also store the answer, which is also a fraction.Modify the program 
//so that all fractions are stored in variables of type struct fraction, whose two
//members are the fraction’s numerator and denominator(both type int).All fractionrelated 
//data should be stored in structures of this type.

#include "stdafx.h"
#include <iostream>
using namespace std;

class fraction {
private :
	int numerator;
	int denominator;
	char dummy_slash='/';
public :
	void get() {
		cout << "Enter a fraction in the form 3 / 5:" << endl;
		cin >> numerator >> dummy_slash >> denominator;
		cout << "The fraction is:" << numerator << dummy_slash << denominator  << endl;

	}
	void sum(fraction f1 , fraction f2 ) {
		
		int n1;
		int n2;
		
		if (f1.denominator == f2.denominator) {
			numerator = f1.numerator + f2.numerator;
			denominator = f1.denominator;
		}
		else {
			denominator = f1.denominator * f2.denominator;
			n1 = f2.denominator * f1.numerator;
			n2 = f1.denominator * f2.numerator;
			numerator = n1 + n2;
		}
		
	}
	void display() {
		cout << "The sum is " << numerator << dummy_slash << denominator << endl;

	}

};

int main()
{
	char con;
	do {
		fraction frac1, frac2, frac3;
		frac1.get();
		frac2.get();
		frac3.sum(frac1, frac2);
		frac3.display();
		cout << "Do you wants to continue(y or n)";
		cin >> con;
	} while (con == 'y');

    return 0;
}


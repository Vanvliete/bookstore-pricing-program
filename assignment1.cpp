#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
	Author: Erik Van Vliet
	Purpose: This is a short program that will ask client for input to process and output pricing for book purchases

*/

int main()

{
	// House keeping. Declaring and initializing variables for use in the IPO stages
	
	//string variables initialized for output
	string storeTitle = "Amazing Booksellers";
	string bookTitleMessage = "Enter book title: ";
	string numberOfCopiesMessage = "Enter number of copies: ";
	string priceOfBookMessage = "Enter book price: ";
	

	//int/doubles/string/const doubles initialized and ready for input
	const double TAX_RATE = 0.13;
	string bookTitle ="";
	int numberOfCopies = 0;
	double priceOfBook = 0.0;
	double costBeforeTax = 0.0;
	double totalCost = 0.0;
	double purchaseTax = 0.0;
	
	//Input from client
	cout << fixed;
	cout << setprecision(2);

	cout << bookTitleMessage;
	getline(cin, bookTitle);

	cout << priceOfBookMessage;
	cin >> priceOfBook;

	cout << numberOfCopiesMessage;
	cin >> numberOfCopies;

	cout << endl;

	//Processing stage. Arithmetic between variables as needed

	costBeforeTax = priceOfBook * numberOfCopies;
	purchaseTax = costBeforeTax * TAX_RATE;
	totalCost = costBeforeTax + purchaseTax;


	//Output to console. Designed as per client
	cout << storeTitle << endl;
	cout << left << setw(25) << "Title" << right << setw(5) << "Qty" << setw(15) << "Unit Price" << endl << endl;
	cout << left << setw(25) << bookTitle << right << setw(5) << numberOfCopies << setw(15) << priceOfBook << endl << endl;
	
	
	cout << left << setw(30) << "Subtotal" << right << setw(15) << costBeforeTax << endl;
	cout << left << setw(30) << "Tax" << right << setw(15) << purchaseTax << endl;
	cout << left << setw(30) << "Total" << right << setw(15) << totalCost << endl;
	
	//pause to console, for client readability
	system("pause");
	


}

/*

Program I/O

Enter book title: The Shining
Enter book price: 100
Enter number of copies: 5

Amazing Booksellers
Title                      Qty     Unit Price

The Shining                  5         100.00

Subtotal                               500.00
Tax                                     65.00
Total                                  565.00
Press any key to continue . . .



*/
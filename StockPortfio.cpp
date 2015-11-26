/* Brief Description of File: This is the main file which contains the execution of all the function
   definitions defined under the header class BankAccount_Header_Balakrishnan.h*/

#include "MainAccount_Header_Balakrishnan.h" //Including the MainAccount header file.
#include "DDL_StockAccount.h" //Including the StockAccount header file. 
#include "StockAccount_Header_Balakrishnan.h" //Including the StockAccount header file.
#include <iostream> //Standard inclusion package.
#include <cmath> //Package for functions that take non-float point types of arguments.
#include <cfloat> //Package that accounts for floating type.
#include <cstdlib> //Package for general purpose functions.
#include <algorithm> //Package used on a range of elements.
#include <string> //Packages that provides string types and character traits.
#include <iomanip> //Package that provides parametric manipulators.
#include <fstream> //Package that provides for file stream classes.
#include <istream> //Package that provides for the standard input.
#include <ostream> //Package that provides for the standard output.
#include <iterator> //Package that has the ability to iterate through a range of elements.
using namespace std;//Using namespace std for this project. 

/*The Display_Main_Menu function shows the menu of different options  the user can select from. It returns a variable that is declared in the class, under the protected section.
This variable is later used for the purposes of functionality throughout the class.*/

int BankAccount::Display_Main_Menu()
{
	cout << "Please select an option: " << endl; //Command to select an option.
	cout << "1. View account balance" << endl; //Command to view the account balance.
	cout << "2. Deposit money" << endl; //Command to deposit money.
	cout << "3. Withdraw money" << endl; //Command to withdraw money.
	cout << "4. Print out history" << endl; //Command to print out the history of transactions
	cout << "5. Return to previous menu" << endl; //Command to return to the previous menu
	cout << "Option:" << endl; //Command to pick an option
	cin >> BankAccount_Main_Menu_Option; //Input the value of the Main Menu Option Selection
	return BankAccount_Main_Menu_Option; //Returns the Bank Account Main Menu Option Selection
}

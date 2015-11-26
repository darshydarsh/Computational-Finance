/* Brief Description of File: This is the central header file which contains all the function definitions.
The base class defined is the Account class. Under the base class, we have the derived classes 'StockAccount'
and 'BankAccount' which are defined under their own header files. Under 'StockAccount' we have two derived classes 'Node_StockAccount' and 'DDL_StockAccount'
for the linked list specification given in the problem statement. Further descriptions of the functions are 
provided in the class definitions below. */

#ifndef All_Header_Balakrishnan_h //Providing the if-n-def definition for the header file 
#define All_Header_Balakrishnan_h //Explicitly defining the Stock Portfolio header file 

#include <iostream> //Standard inclusion package
#include <cmath> //Package for functions that take non-float point types of arguments
#include <cfloat> //Package that accounts for floating type
#include <cstdlib> //Package for general purpose functions
#include <algorithm> //Package used on a range of elements
#include <string> //Packages that provides string types and character traits
#include <iomanip> //Package that provides parametric manipulators
#include <fstream> //Package that provides for file stream classes
#include <istream> //Package that provides for the standard input
#include <ostream> //Package that provides for the standard output
#include <iterator> //Package that has the ability to iterate through a range of elements

using namespace std;

/*The Base Class for this project will be 'MainAccount' (Renamed from the project asssignment specification because it conflicts with certain keywords in the program). */
class MainAccount  
{
public: //The items below are public and are accessible to all members of the derived classes

	virtual void Display_Main_Menu(); //Displays the Main Menu giving the user the choice to pick which account they wish to choose.
	virtual void MainAccout_Balance_Beginning(); //Displays the account balance in the beginning and puts the account setting into action. Furthermore, this also acts to transfer information to the text file.
	virtual void MainAccount_Balance_Ending(); //Displays the account balance at the end.
protected:
	float MainAccout_Balance //Variable that displays the balance of the Main Account. 
}

/*The first derived class will be StockAccount. This derived class contains all the relevant information for the Stock Portfolio Account. */
class StockAccount: public MainAccount
{
public:
	int Display_Main_Menu(); //Displays the Main Menu for the Stock Portfolio Account portion of the project. Allows the user a total of seven choices
	void Stock_Main_Menu(); //Takes the choice provided in the Main Menu and executes the corresponding action 
	float Display_Price_Stock(); 
	float Display_Current_Portfolio();
	void StockAccount_Choice();
	void StockAccount_RealTime();
	void StockAcccount_Ending();
	void StockAccount_Portfolio_Graph();



}

/*The second derived class will be BankAccount. This derived class contains all the relevant information for the Bank Account Portfolio. */
class BankAccount: public MainAccount
{
public:
	int Display Main_Menu();
	void Choice_Main_Menu();


}

/*This derived class is the Doubly Linked List Node which is derived from base class StockAccount. */ 
class Node_StockAccount: public StockAccount
{
public:
}

/*This derived class is the Doubly Linked List which is derived from the base class StockAccount. */
class DDL_StockAccount: public StockAccount
{
public:
}

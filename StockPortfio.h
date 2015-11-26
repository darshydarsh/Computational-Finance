/* Brief Description of File: This is the Bank Account header file which contains all the function 
definitions as it pertains to the the Bank Account management system. Under 'StockAccount' we have
two derived classes 'Node_StockAccount' and 'DDL_StockAccount' for the linked list specification
given in the problem statement. Both these derived classes have their own header files. Further
descriptions of the functions are provided in the class definitions below. */


/*BankAccount is a derived class of MainAccount. This derived class contains all the relevant information for the Bank Management Account. */


#include "MainAccount_Header_Balakrishnan.h" //Including the MainAccount header file.
#include "DDL_StockAccount.h" //Including the StockAccount header file. 
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


class BankAccount: public MainAccount
{
public:
	int Display Main_Menu(); //Displays the Main Menu for the Stock Portfolio Account portion of the project. Allows the user a total of seven choices
	void BankAccount_Main_Menu(); //Takes the choice provided in the Main Menu and executes the corresponding action. The Menu has a total of 5 choices.
	void BankAccount_RealTime(); //Updates the Bank Account in Real Time after each execution. 

}

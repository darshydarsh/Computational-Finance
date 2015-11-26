/* Brief Description of File: This is the Stock header file which contains all the function 
definitions as it pertains to the the stock portfolio account. Under 'StockAccount' we have
two derived classes 'Node_StockAccount' and 'DDL_StockAccount' for the linked list specification
given in the problem statement. Both these derived classes have their own header files. Further
descriptions of the functions are provided in the class definitions below. */

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

using namespace std;

#ifndef Stock_Header_Balakrishnan_h //Providing the if-n-def definition for the header file. 
#define Stock_Header_Balakrishnan_h //Explicitly defining the Stock Portfolio header file. 


/*StockAccount is a derived class of MainAccount. This derived class contains all the relevant information for the Stock Portfolio Account. */
class StockAccount: public MainAccount
{
public:
	int Display_Main_Menu(); //Displays the Main Menu for the Stock Portfolio Account portion of the project. Allows the user a total of seven choices.
	void StockAccount_Main_Menu(); //Takes the choice provided in the Main Menu and executes the corresponding action 
	float StockAccount_Price_Stock(char); //Display the Price of a stock obtained randomly from the Results.txt file
	float StockAccount_Current_Portfolio(); /*Displays the Current Portfolio i.e For each stock please display the symbol, the number of shares own 
									   the price per share (based on the value from Results.txt), and the total value of that stock*/
	void StockAccount_Choice(); //Displays the choice for the user to Buy or Sell their share. 
	void StockAccount_RealTime(); //Provides a continuous update on Stock Prices.
	void StockAcccount_Ending(); //Provides an update on Stock Prices at the beginning of the program. 
	void StockAccount_Portfolio_Graph(); //Provides a graph on MATLAB. 
protected:

	int StockAccount_Main_Menu_Option; //Variable that represents the choice in the main provided in the Stock Portfolio portion of the project.
	int StockAccount_No.of.Shares //Declares the number of the shares under the stock account portfolio as a protected variable to make it accessible even to the derived classes
	DDL_StockAccount StockAccount_DDL //Declares the variable as a member of the class DDL_StockAccount defined in the header file included


}

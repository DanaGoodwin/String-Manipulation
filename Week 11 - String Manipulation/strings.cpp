#include <algorithm> 
#include <iostream>  
#include <string>  

using namespace std;

int main()
{
	//This is for the commented if function below.
	/*char cPunc = '-' || ',' || '.' || ';' || ':' || '!' || '`' || '"' || '\'' || '?'; //This will look for the Punctuation which is listed in the Variables.
	char cSearchPosition = 0, operation = 0;*/

	string sUserInput; //This is the input string
	
	//User input  
	cout << "Please enter your string: " << endl << endl; //User prompt for input 
	getline(cin, sUserInput);
	
	if (!sUserInput.empty())
	{
		//Replacing all the punctuation which is listed below
		replace(sUserInput.begin(), sUserInput.end(), '-', ' ');
		replace(sUserInput.begin(), sUserInput.end(), ',', ' ');
		replace(sUserInput.begin(), sUserInput.end(), '.', ' ');
		replace(sUserInput.begin(), sUserInput.end(), ';', ' ');			//Used http://www.cplusplus.com/forum/beginner/33835/ as guidance on how to use the replace function. 
		replace(sUserInput.begin(), sUserInput.end(), ':', ' ');			
		replace(sUserInput.begin(), sUserInput.end(), '!', ' ');
		replace(sUserInput.begin(), sUserInput.end(), '`', ' ');
		replace(sUserInput.begin(), sUserInput.end(), '"', ' ');

		//Removing the space and replace it with a new line
		replace(sUserInput.begin(), sUserInput.end(), ' ', '\n');

	}
	else
	{
		return 0;
	}
	//Outcome of the program. 
	cout << "This is your string without spaces and Punctation: " << endl << endl;
	cout << sUserInput << endl << endl; //Prints user input after changes are made



	//This was to suppose to search the input for the listed punctuation found in the commeted declared variable above but not quite working correctly.
	/*if (!sUserInput.empty())
	{
		sUserInput: sUserInput.find(cPunc,cSearchPosition);
		if (sUserInput.find(cPunc));
		{
			sUserInput.replace(sUserInput.begin(),sUserInput.end(),"\n"); //The program is suppose to have replaced all the punctuation for new lines
			
			//Outcome of the program. 
			cout << "This is your string without Punctation: " << endl << endl;
			cout << sUserInput << endl << endl; //Prints user input after changes are made
		}
	}*/
	
	system("pause");

	return 0;

}
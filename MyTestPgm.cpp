#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include "HelloWorld.h"
#include "DemoFn.h"
#include "WriteToFile.h"
#include "ReadFromFile.h"
#include "DataTypes.h"








void IF() 
{
	string Password = "hello";

	cout << "Enter your password " << flush;

	string input;
	cin >> input;

	if (input == Password)
	{
		cout << "you have the right password, you may enter" << endl;
	}

	else
	{
		cout << "WRONG PASSWORD" << endl;
	}
}

void Arrays()
{
	cout << "this is the array function" << endl;

	int array1[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the " << i+1 << " first number: " << flush;

		cin >> array1[i];

	}

	for (int i = 0; i < 3; i++)
	{

		cout << "you enterred: " << array1[i] << endl;
	}
}







int main()
{
	int cont = 1;

	do
	{
		

		HelloWorld();
		//DemoFunction();
		DataTypes();

		//IF();

		//Arrays();

		cout << pow(2, 3) << endl;

		//writeToFile("yaf_example1.txt", "Fadil Hussain is a crazy person.\n");

		//readFromFile("yaf_example1.txt");

		cout << "DO you want to continue (0 for no, 1 for yes): " << flush;
		cin >> cont;

	} while (cont == 1);



	


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

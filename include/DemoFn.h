#pragma once

using namespace std;

void DemoFunction()
{
	cout << "this is the demo function\n";

	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush;
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;
}
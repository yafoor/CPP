#pragma once


int readFromFile(string FileName)
{
	ifstream myfile;
	string textInFile;
	myfile.open(FileName);
	while (getline(myfile, textInFile))

		myfile >> textInFile;
	cout << textInFile << endl;
	myfile.close();
	return 0;

}
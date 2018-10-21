#pragma once


int writeToFile(string FileName, string Text)
{

	ofstream myfile;
	myfile.open(FileName, ios::app);
	myfile << Text;
	myfile.close();
	return 0;

}

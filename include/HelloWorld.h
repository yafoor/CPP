#pragma once


using namespace std;

void HelloWorld()
{
	int numberOfDogs = 5;
	int numberOfCats = 7;


	cout << "Number of Dogs are: " << numberOfDogs << endl;
	cout << "Number of Cats are: " << numberOfCats << endl;


	cout << "Number of Cats & Dogs are: " << numberOfDogs + numberOfCats << std::endl;

	cout << "Hey there I bought a new dog!!!" << endl;

	//numberOfDogs = numberOfDogs++;

	cout << "Now the Dogs I have are: " << ++numberOfDogs << std::endl;

	string firstName = "Yafoor ";
	string lastName = "Hussain";

	string fullName = firstName + lastName;

	cout << firstName << endl;
	cout << lastName << endl;

	cout << fullName << endl;
}

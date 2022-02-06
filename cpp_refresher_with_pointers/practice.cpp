#include <iostream>
#include "second_file.h"

// pointer practice

void passAndEditPointer(int *);
void passArray(int *[5]);
void getSecondFileInfo();
void getObjectDataFromSource();

int main()
{
	char inputWait = '0';
	int numberOne = 50;
	int arrayNum[5];
	int *ptrArray[5];
	int *pointer;

	pointer = &numberOne;
	
	for (int i = 0; i < 5; i++) // for loop itterates each index and assigns index address to pointer
	{
		ptrArray[i] = &arrayNum[i]; // the only way to initialize an array of pointers is with each index address assigned
	}

	std::cout << "This program is for practice with pointers" << std::endl;
	std::cout << "number one: " << numberOne << std::endl;

	passAndEditPointer(pointer);
	passArray(ptrArray);
	
	std::cout << "number one: " << numberOne << std::endl;
	std::cout << "\n array via pointer numbers displayed:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arrayNum[i] << std::endl;
	}

	getSecondFileInfo(); // this calls the function that calls the second files function
	getObjectDataFromSource(); // function that gets and displays object data from second source file

	// gets input so console window doesn't immediately dissapear
	std::cout << "\nPress any key to exit program: ";
	std::cin >> inputWait;
	return 0;
}

void passAndEditPointer(int *ptr)
{
	std::cout << "Pointer edited in function." << std::endl;
	*ptr = 800;
}

void passArray(int *ptrArray[5])
{
	std::cout << "This edits the array using a pointer" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter for number #" << i + 1 << ": ";
		std::cin >> *ptrArray[i];
	}
}

// experimental

void getSecondFileInfo()
{
	displaySecondFileText();
}

void getObjectDataFromSource()
{
	double arrayData[4];
	double *ptr[4];
	// assigns the arrays memory addresses to pointer array addresses
	for (int i = 0; i < 4; i++)
	{
		ptr[i] = &arrayData[i];
	}
	getObjectDataArray(ptr);
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << "\nObject Array number " << i+1 << ": " << arrayData[i];
	}
}
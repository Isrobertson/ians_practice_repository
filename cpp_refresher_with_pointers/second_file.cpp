#include <iostream>

class ObjectData
{
private:
	int dataOne;
	int dataTwo;
	int dataThree;
	double bigNumber;

public:
	ObjectData()
	{
		this->dataOne = 0;
		this->dataTwo = 5;
		this->dataThree = 10;
		this->bigNumber = 90000;
	}

	// getters
	int getDataOne()      { return dataOne; }
	int getDataTwo()      { return dataTwo; }
	int getDataThree()	  { return dataThree; }
	double getBigNumber() { return bigNumber;  }
};

void displaySecondFileText()
{
	std::cout << "This text is form other file called second_file.cpp with header file helping it" << std::endl;
}

void getObjectDataArray(double *ptr[4])
{
	ObjectData getData;
	// gets pointer data from perameter and assigns to pointer
	*ptr[0] = (double)getData.getDataOne();
	*ptr[1] = (double)getData.getDataTwo();
	*ptr[2] = (double)getData.getDataThree();
	*ptr[3] = getData.getBigNumber();
}
// CPP_DZ_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Building
{
public:
	Building(int _age, int _MaxAge)
	{
		Age = _age;
		MaxAge = _MaxAge;

		MyId++;
	}

	~Building()
	{
		std::cout << "Building was destroy" << std::endl;
		Destroy();
	}


	void SetCost(int _age, int _MaxAge)
	{
		InitialCost = InitialCost - (InitialCost * _age / _MaxAge);
	}

	int GetCost()
	{
		return InitialCost;
	}
	
	void ToAge(int _ageToOld)
	{
		Age = Age + _ageToOld;
	}

	int GetAge()
	{
		return Age;
	};

private:
	void Destroy()
	{
		std::cout << "Building with " << MyId << " ID was destroy" << std::endl;
	}
	int MyId = 0;
	int Age = 0;
	int MaxAge = 5;
	int InitialCost = 100000; 

};


int main()
{
	Building Building1(3,5);
	std::cout << "Write Age and Max Age for ur Building when u buy it" << std::endl;
	int CurrentAge, CurrentMaxAge;
	std::cin >> CurrentAge;
	std::cin >> CurrentMaxAge;

	Building1.SetCost(CurrentAge,CurrentMaxAge);
	std::cout << "Building cost : " << Building1.GetCost() << "$" << std::endl;

	std::cout << "How many age was gone?" << std::endl;
	int AgeToOld;
	std::cin>>AgeToOld;
	Building1.ToAge(AgeToOld);
	CurrentAge += AgeToOld;

	Building1.SetCost(CurrentAge, CurrentMaxAge);
	std::cout << "Building cost : " << Building1.GetCost() << "$" << std::endl;






	

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

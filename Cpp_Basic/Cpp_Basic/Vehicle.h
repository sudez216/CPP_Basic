#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor(생성자) 명시적 선언
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);

	//Destructor(소멸자) 선언
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};
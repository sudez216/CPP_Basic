#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor(������) ����
	Vehicle(int _Year, int _Price);

	//Destructor(�Ҹ���)
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};
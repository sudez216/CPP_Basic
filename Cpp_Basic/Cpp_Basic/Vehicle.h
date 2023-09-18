#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor(持失切) 識情
	Vehicle(int _Year, int _Price);

	//Destructor(社瑚切)
	~Vehicle();

	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};
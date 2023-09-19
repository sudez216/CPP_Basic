// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cpp_Basic.h"
#include "io.h"

#include "Ch10_Class.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Auto.h"

#define PLUS (2 + 3 * 2)

int main()
{
    // class ���� ����
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);
    Ray.PrintYear();

    cout << Ray.GetYear() << endl;

    Vehicle Sonata;

    // class ���� ����(����)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    // �ڽ� Ŭ���� ����
    Atv Moto;

    // ��ӹ���  Bike class�� ���
    Moto.PrintPrice();
    cout << Moto.Price << endl;

    // Atv class�� ���
    Moto.PrintTire();
   
    //�Լ� �����ε�
    Arithmatic Expression;
    Expression.Sum(50);

    Expression.Sum(50.123f);

    Expression.Sum(60, 70);

    // �Լ� ���� ���̵�
    Moto.Print();

    // �����ڰ� ��������� ����
    // �ڽ� Ŭ���� ���� : ����� ����

    cout << "------------------------------------" << endl;
    Auto Mobile();

    Auto Avante(2024, 10000000);










}
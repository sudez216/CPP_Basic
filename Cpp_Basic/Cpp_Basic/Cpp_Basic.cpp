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
#include "Ch14_VirtualParent.h"
#include "Ch14_VirtualChild.h"
#include "Ch15_PureVirtualParent.h"
#include "Ch15_PureVirtualChild.h"

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

    cout << "------------------------------------" << endl;

    //ArrayClass();
    //StringClass();
    //VectorClass();
    BubbleSort2();

    cout << "------------------------------------" << endl;

    VirtualParent* Parent = new VirtualParent;
    VirtualChild* Child = new VirtualChild;

    Parent->PrintClass();

    Child->PrintClass(); // Overriding �۵�

    Parent = Child;

    Parent->PrintClass();


    VirtualParent2* Parent2 = new VirtualParent2;
    VirtualChild2* Child2 = new VirtualChild2;

    Parent2->PrintClass();

    Child2->PrintClass(); // Overriding �۵�

    Parent2 = Child2;

    Parent2->PrintClass();

    cout << "------------------------------------" << endl;

    // PureVirtualParent PureParent; => �߻�Ŭ������ �ܵ����� ��ü ������ �� ����
    // �߻�Ŭ������ ��� �޴� �ڽ� Ŭ������ ���� �����Լ��� ������ �ؾ���
    PureVirtualChild PureChild;
    PureChild.Print();
    PureChild.PrintClass();

    cout << "------------------------------------" << endl;

    //cout << SumNumber(3, 2) << endl;
    cout << SumNumber(3.123f, 2.4452f) << endl;

    cout << SumType(10, 20) << endl;
    cout << SumType(10.457, 20.321) << endl;

    Dice(5,2,6,1);

}
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
    // class 정적 선언
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);
    Ray.PrintYear();

    cout << Ray.GetYear() << endl;

    Vehicle Sonata;

    // class 동적 선언(생성)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    // 자식 클래스 생성
    Atv Moto;

    // 상속받은  Bike class의 멤버
    Moto.PrintPrice();
    cout << Moto.Price << endl;

    // Atv class의 멤버
    Moto.PrintTire();

    //함수 오버로딩
    Arithmatic Expression;
    Expression.Sum(50);

    Expression.Sum(50.123f);

    Expression.Sum(60, 70);

    // 함수 오버 라이딩
    Moto.Print();

    // 생성자가 명시적으로 선언
    // 자식 클래스 선언 : 명시적 선언

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

    Child->PrintClass(); // Overriding 작동

    Parent = Child;

    Parent->PrintClass();


    VirtualParent2* Parent2 = new VirtualParent2;
    VirtualChild2* Child2 = new VirtualChild2;

    Parent2->PrintClass();

    Child2->PrintClass(); // Overriding 작동

    Parent2 = Child2;

    Parent2->PrintClass();

    cout << "------------------------------------" << endl;

    // PureVirtualParent PureParent; => 추상클래스는 단독으로 객체 생성할 수 없음
    // 추상클래스를 상속 받는 자식 클래스는 순수 가상함수를 재정의 해야함
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
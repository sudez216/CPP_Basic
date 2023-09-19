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










}
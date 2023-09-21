﻿#include "io.h"
#include "main.h"
#include <cstdlib>

void Weight() {
  // Weight >= Calorie + Step, Weight <= Calorie + Step
  // Calroie > Step = Weight + 1, Calroie < Step = Weight - 1
  // Calroie = Step = Weight
  // Weight >= 80, Weight = (Calorie - Step) + 10

  int Weight = 0, Calorie, Step, Day = 0;

  while (true) {
    cout << "지난 날짜 : " << endl;
    cin >> Day;

    if (Day >= 1 && Day <= 10000) {
      break;
    } 
    else {
      cout << "다시 입력해주세요" << endl;
    }
  }
   while (true) {

    cout << "섭취한 칼로리 : " << endl;
    cin >> Calorie;

    if (Calorie >= 1 && Weight <= 10000) {
       break;
    } 
    else {
      cout << "다시 입력해주세요" << endl;
    }
  }
  while (true) {
    cout << "걸음 수 : " << endl;
    cin >> Step;

    if (Step >= 1 && Step <= 10000) {
      break;
    } else {
      cout << "다시 입력해주세요" << endl;
    }
    }
  while (true) {
    if (Weight >= 10 && Weight <= 80) {
      break;
    }
    else if (Calorie > Step == Weight + 1 && Calorie < Step == Weight - 1) {

    }
    // for(int i= 0; i<=Weight; i++)
    //   {

    //   }

    cout << Weight << " kg " << endl;
  }
  
}


void CountUp() {
  int CountUp = 0, StartNum = 0, EndNum = 0;

  while (true) {
    cout << "처음 숫자를 입력해주세요 : ";
    cin >> StartNum;

    if (StartNum >= 0 && StartNum <= 50) {
      break;
    } else {
      cout << "다시 입력해주세요" << endl;
    }
  }

  while (true) {
    cout << "두번째 숫자를 입력해주세요 : ";
    cin >> EndNum;

    if (EndNum >= StartNum && EndNum <= 50) {
      break;
    } else {
      cout << "다시 입력해주세요" << endl;
    }
  }
  cout << "[";
  
  for (int i = StartNum; i <= EndNum; i++) {
    cout << i;
    if (i < EndNum) {
      cout << ",";
    }

  // while (StartNum<= EndNum)
  //   {
  //     cout << StartNum << ' ';
  //     StartNum++;
  //   }
    
    //     // for (int j=0; j)
    //     // int CountUp2 = 0;
    //     // CountUp = (StartNum + i) ;
    //     // // CountUp2 = (EndNum - i) ;
    //     // cout << CountUp << ", "; //<< CountUp2;
    //     // // CountUp2 = CountUp - StartNum;

    //     // // cout << CountUp << ",";

    //   }
  }
  cout << "]";
}
void Return() {
  // 양의 정수 n이 홀수이면, n 이하 모든 홀수의 합을 Return
  // n이 짝수이면 n 이하 모든 짝수의 제곱의 합을 Return
  // n >= 1, n <=100
  int Return = 0, Number = 0;

  while (true) {
    cout << "1부터 100까지의 정수를 입력해주세요 : ";
    cin >> Number;

    if (Number >= 1 && Number <= 100) {
      break;
    } else {
      cout << "다시 입력해주세요." << endl;
    }
  }
  int Even = ((Number % 2) == 0);
  int Odd = ((Number % 2) == 1);
  int OddSum = 0;
  int EvenSum = 0;

  if (Odd) {
    for (int i = 1; i <= Number; i += 2) {
      OddSum += i;
    }
    cout << "홀수의 합 : " << OddSum << endl;
  } else {
    if (Even) {
      for (int i = 0; i <= Number; i += 2) {
        EvenSum += i * i;
      }
      cout << "짝수의 제곱의 합 : " << EvenSum << endl;
    }
  }
}
void SevenGame() {
  // 일곱 자리의 정수 K
  // K의 홀수 번째 자리의 숫자들을 모두 합한 값은 A
  // A에 K의 0이 아닌 짝수 번째 자리의 숫자를 모두 곱한다
  // A를 10으로 나눈 나머지 값이 정답
  // K >=1000000, K <= 9999999
  int Seven = 0;

  cout << "일곱 자리의 정수를 입력하세요 : ";
  cin >> Seven;

  while (true) {
    if (Seven >= 1000000 && Seven <= 9999999) {
      cout << Seven << endl;
    } else {
      cout << "다시 입력해주세요.";
    }
  }
}
void Dice()
{
  int DiceNum = 0;
  for(int i = 0; i < 4; i++){
      int Dice = rand() % 6 +1 ;    
      cout << "주사위 4개를 굴렸습니다." << endl << i + 1 << "입니다." << endl;
    }
  int Dice1 = rand() % 6 +1 ;
  int Dice2 = rand() % 6 +1 ;
  int Dice3 = rand() % 6 +1 ;
  int Dice4 = rand() % 6 +1 ;

  if(Dice1 == Dice2 && Dice2 == Dice3 && Dice3 == Dice4)
  cout << Dice1 << Dice2 << Dice3 << Dice4 << "x p" << endl;
    
}

void DiceIf(int a, int b, int c, int d)
{
    // 1
    if (a == b && b == c && c == d) {}

    // 2
    if (a == b && b == c && c != d) {}
    if (b == c && c == d && d != a) {}
    if (c == d && d == a && a != b) {}
    if (d == a && a == b && b != c) {}

    // 3 
    if (a == b && c == d) {}
    if (a == c && b == d) {}
    if (a == d && b == c) {}

    // 4 
    if (a == b && c != d && a != c && b != c && a != d && b != d) {}
    if (a != b && b != c && c != d && a != c && b != d && a != d) {}

}

void Dice(int a, int b, int c, int d)
{
    // 오름차순 정렬
    // 1 - 모두 같은 경우 {1,1,1,1} => 첫번째원소 == 마지막원소
    // 2 - 3개 같고, 1개 다른 경우
    //     {1,1,1,2} => 첫번째 원소 == 세번째 원소, 세번째 원소 != 마지막 원소
    //     {1,2,2,2} => 마지막 원소 == 두번째 원소, 두번째 원소 != 첫번째 원소
    // 3 - 2개씩 같은 값
    //     {1,1,2,2} => 첫번째 원소 == 두번쨰 원소, 세번째 원소 == 네번째 원소
    // 4 - 2개가 같고, 각각 다른 값
    //     {1,1,2,3} => 첫번째 원소 == 두번째 원소, 두번째 원소 != 세번째 원소, 두번쨰 원소 != 네번째 원소
    //     {1,2,2,3} => 두번째 원소 == 세번째 원소,
    //     {1,2,3,3} => 세번째 원소 == 네번째 원소,
    // 5 - 나머지
    

    // 오름차순 정렬
    int DiceNumber[4] = { a,b,c,d };
    int temp;

    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (DiceNumber[j] > DiceNumber[j + 1])
            {
                temp = DiceNumber[j];
                DiceNumber[j] = DiceNumber[j + 1];
                DiceNumber[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++) 
    {
        cout << DiceNumber[i] << " : " ;
    }

    // 1
    if (DiceNumber[0] == DiceNumber[3])
    {
        cout << 1111 * DiceNumber[0] << endl;
    }
    // 2
    else if (DiceNumber[0] == DiceNumber[2])
    {
        cout << (10 * DiceNumber[0] + DiceNumber[3]) * (10 * DiceNumber[0] + DiceNumber[3]) << endl;
    }
    else if (DiceNumber[1] == DiceNumber[3])
    {
        cout << (10 * DiceNumber[1] + DiceNumber[0]) * (10 * DiceNumber[1] + DiceNumber[0]) << endl;
    }
    // 3
    else if (DiceNumber[0] == DiceNumber[1] && DiceNumber[2] == DiceNumber[3])
    {
        cout << (DiceNumber[0] + DiceNumber[2]) * abs(DiceNumber[0] - DiceNumber[2])
    }
    // 4
    else if (DiceNumber[0] == DiceNumber[1])
    {
        cout << DiceNumber[2] + DiceNumber[3] << endl;
    }
    else if (DiceNumber[1] == DiceNumber[2])
    {
        cout << DiceNumber[0] + DiceNumber[3] << endl;
    }
    else if (DiceNumber[2] == DiceNumber[3])
    {
        cout << DiceNumber[0] + DiceNumber[1] << endl;
    }
    else(cout << DiceNumber[0] << endl);
    

 }
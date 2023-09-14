#include "io.h"

void DefineArray(){
  int Num = 0;

  // 선언, declare(defune)
  int A[3] = {1,2,3};
  int B[10] = {1,2};
  // int C[3] = {1,2,3,4}; => Syntax Error
  int D[3];

  // 대입
  // D[3] = {1,2,3,};
  D[0] = 1;
  D[1] = 2;
  D[2] = 3;

  // D배열의 개수는 3개 반복값5이라 오류
  for(int i=0; i<5; i++)
  {
    cout << "c" << i;
//    D[i] = i+1;
  }

  cout << endl;
  
  // 출력 => 접근, Access
  for(int i=0; i<3; i++)
  {
    cout << A[i] << " : ";
  }

  cout << endl;

  // 배열 개수 10개, 13번 반복 출력 => 10개 범위 넘어서는 부분은 쓰레기값 출력
  for(int i=0; i<13; i++)
  {
//    cout << B[i] << " : ";
  }

  cout << endl;

  for(int i=0; i<5; i++)
  {
//    cout << D[i] << " : ";
  }
}

void TwoDimension()
{
  int number[4][3] = {
  {1,2},
  {3,4},
  {5,6},
  {7,8}
  };

  cout << number[2][0];
  cout << number[3][0] << endl;

  for(int i = 0; i<4; i++){
    for(int j= 0; j<2; j++){
      cout << number[i][j] << endl;
    
    }
  }
}
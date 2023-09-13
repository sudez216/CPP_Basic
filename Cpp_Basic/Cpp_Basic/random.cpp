#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 난수 : 불규칙(Random)하게 생성되는 수
// C++에서 cstdlib 라이브러리를 포함한 후 rand() 사용
// srand() : 난수를 생성할 때 기준값을 정해주는 함수

// 시간 값 사용 : 컴퓨터 시계 값을 사용
// ctime 라이브러리 사용
// time() : time()이 실행될 때 현재 시간 표시

void Random()
{
  srand( (int)time(NULL) );
  int Random1 = rand();
  cout << Random1 << endl;
  
  int Random2 = rand();
  cout << Random2 % 10 << endl;
  
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void UpNDown()
{
  int GuessValue = 0;
  int Count = 0;

  srand( (int)time(NULL) );
  int RandomValue = ( rand() % 50) + 1;  

  //cout << RandomValue << endl;
  
  clock_t StartTime = clock();
    
  while(true)
  {
    Count++;
    
    cout << "예상 값을 입력해주세요 : ";
    cin >> GuessValue;
    
    if( RandomValue > GuessValue)
    {
      cout << "UP" << endl;
    }
    else if(RandomValue < GuessValue)
    {
      cout << "DOWN" << endl;
    }
    else
    {
      break;
    }
  }

  clock_t EndTime = clock();

  double Duration = (double)( EndTime - StartTime ) / 1000;

  //cout << Duration << endl;
    
  cout << "정답입니다." << endl;
  cout << "시도 횟수 : " << Count << endl;
  cout << "걸린 시간 : " << Duration << endl;
  
}
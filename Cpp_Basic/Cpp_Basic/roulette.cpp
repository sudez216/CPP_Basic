#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 권총의 장전 가능 총알 수는 6개, 장전된 총알 1개
// 인원 수를 입력 받아 번갈아 방아쇠를 당겨 몇번째 사람이 총알을 맞았는지 표시
// 차례가 돌아가면 탄창을 무작위로 회전, 방아쇠를 당김, 총알 맞았는지 판단
void Roulette()
{
  int PlayerNumber = 0;
  int Trigger = 0;
  int Player = 0;
  
  cout << "게임에 참가할 인원 수를 입력해주세요 : ";
  cin >> PlayerNumber;

  // 랜덤 값 발생 기준 값
  srand( (int)time(NULL) );
  
  // 참가자 시작 순서 정하기 => 랜덤 값 발생
  int Turn = ( rand() % PlayerNumber ) + 1;
  Player = Turn;
  cout << Turn << "번 째 참가자부터 시작합니다." << endl;

  while(true)
  {
    // 탄창 회전 => 랜덤 값 발생
    cout << "탄창 회전" << endl;
    int Rotate = ( rand() % 6 ) + 1;

    //cout << Rotate << endl;

    // 입력 대기 => 게임 흐름 제어
    cout << Player << "번째 참가자 순서입니다" << endl;
    cin >> Trigger;

    // 총알 맞았는지 판단 => 랜덤 값과 순서 값이 같은 지 판단
    if( Rotate == Player )
    {
      cout << "사망" << endl;
      break;
    }
    else
    {
      cout << "빗나감" << endl;
      Player++;
      
      // 참가자 수의 범위를 넘어서면 처음 값으로 되돌려 줌
      if(Player > PlayerNumber)
      {
        Player = 1;
      }
    }
  }
}
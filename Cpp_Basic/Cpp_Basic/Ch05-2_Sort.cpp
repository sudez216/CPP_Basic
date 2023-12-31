﻿#include "io.h"

void BubbleSort()
{
  int Number[10] = {7,5,4,2,8,6,9,3,10,1};
  int temp;
  
  for(int i=9; i>0; i--){
    for(int j=0; j<i; j++){
      // 비교
      if( Number[j] > Number[j+1] )
      {
      // 교환(swap)
      temp = Number[j];
      Number[j] = Number[j+1];
      Number[j+1] = temp;
      }
    }
  }

  for(int i=0; i<10; i++)
  {
    cout << Number[i] << " : ";
  }

  cout << endl;
}

void BubbleSort2()
{
    int Number[5] = { 4,7,2,3,5 };
    int temp;

    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < 1; j++) {
            if (Number[j] > Number[j + 1]) {
                temp = Number[j];
                Number[j] = Number[j + 1];
                Number[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << Number[i] << " : ";
    }
    cout << endl;
}
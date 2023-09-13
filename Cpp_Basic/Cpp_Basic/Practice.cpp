#include "io.h"
#include "main.h"
#include <cstdlib>

int Va(int Dan)
{
  int result = 0;
  for(int i=1; i<=9; i++)
  {
  result += Dan * i;
  }
  return result;
}
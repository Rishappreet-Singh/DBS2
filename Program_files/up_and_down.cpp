#include<iostream>
#include<ios>
#include<limits>
#include<stdio.h>
#include<string.h>
using namespace std;

int up_and_down(char temp[],int no,int max)
{
  if(temp[0]==27&&temp[1]==91&&temp[2]==66)
  {
    ++no;
    if(no>max)
      no=max;
  }
  if(temp[0]==27&&temp[1]==91&&temp[2]==65)
  {
    --no;
    if(no<0)
      no=0;
  }
  return no;
}

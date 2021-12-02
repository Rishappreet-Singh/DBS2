#include<iostream>
#include<ios>
#include<limits>
#include<stdio.h>
#include<string.h>
using namespace std;

void getoxy(int x, int y)
{
  while(x--)
    cout<<endl;
  while(y--)
    cout<<"\t";
}

void billing_border(int n,char symbol)
{
  while(n--)
    cout<<symbol;
}

void white_border(int x)
{
  while(x--)
    cout<<"\033[0;107;30m \033[0m";
}

void home_template()
{
  cout<<" ___ ";
  getoxy(1,0);
  cout<<"/.\\_\\";
  getoxy(1,0);
  cout<<"|_|_|";
  getoxy(1,0);
  cout<<"<HOME";
}
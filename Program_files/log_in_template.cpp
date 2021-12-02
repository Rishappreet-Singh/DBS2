#include<iostream>
#include<ios>
#include<limits>
#include<stdio.h>
#include<string.h>
#include"template.h"
using namespace std;

void log_in_template()
{
  getoxy(1,6);
  cout<<"     _   __         ";
  getoxy(1,6);
  cout<<"|   | | | __ | |\\ |  :: ..";
  getoxy(1,6);  
  cout<<"|__ |_| |/ | | | \\|  :: ''";
}

void log_in_and_home_template()
{
  home_template();
  log_in_template();
  getoxy(1,6);  
  billing_border(20,'=');
  getoxy(3,2);
}
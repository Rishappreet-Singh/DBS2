#include<iostream>
#include<ios>
#include<limits>
#include<stdio.h>
#include<string.h>
#include"template.h"
#include"log_in.h"
#include"log_in_template.h"
#include"sign_up.h"
#include"up_and_down.h"
#include"sign_up_template.h"

using namespace std;

/*# if WIN32
  #include<conio.h>
#else 
  #include <ncurses.h>
#endif 
*/
string email_id = "\0";
string password = "\0";
string Username = "\0";
void show_items()
{
  // @amit mysql implementation to show list;
}

int main()
{
  char temp[3];
  int k =0,flag=0,x=0;
  a:
  system("clear");
  if(flag==2)
  {
    x=1;
    getoxy(x,0);
    cout<<"user: "<<email_id;//~for now for actuall we will use table username
  }

  getoxy(7-x,5);
  billing_border(30,'*');
  getoxy(2,6);

  cout<<"Billing System";
  getoxy(2,5);
  billing_border(30,'*');
  getoxy(3,2);
  if(k==0)
  {
    cout<<"-> ";
    cout<<"\033[0;107;30mShow Items\033[0m";
    white_border(15);
    getoxy(1,2);
    cout<<"   Login";
    getoxy(1,2);
    cout<<"   Exit";
  }
  if(k==1)
  {
    cout<<"   Show Items";
    getoxy(1,2);
    cout<<"-> ";
    cout<<"\033[0;107;30mLogin\033[0m";
    white_border(20);
    getoxy(1,2);
    cout<<"   Exit";
  }
  if(k==2)
  {
    cout<<"   Show Items";
    getoxy(1,2);
    cout<<"   Login";
    getoxy(1,2);
    cout<<"-> ";
    cout<<"\033[0;107;30mExit\033[0m";
    white_border(21);
  }
  getoxy(15,0);
  /*for(int i=0;i<1;i++)
    cin>>temp[++j];*/
  // if(k>0)
  system("stty raw");
  // b:
  temp[0]=getchar();
  system("stty cooked");
  if(temp[0]==27)
  {
    temp[1]=getchar();
    temp[2]=getchar();
  }

  // if(temp[0]!=27 ||temp[0]!=16)
    // goto b;
  // cin.ignore(numeric_limits<streamsize>::max(),'\n');
  // int a = temp[0];
  // if(temp[0]==27&&temp[1]==91&&temp[2]==66)
  // {
  //   // cout<<a<<" yoo yoo";
  //   // cout<<k<<" ";
  //   ++k;
  //   if(k>2)
  //     k=2;
  //   system("clear");
  //   goto a;
  // }
  // if(temp[0]==27&&temp[1]==91&&temp[2]==65)
  // {
  //   // cout<<a<<" yoo yoo";
  //   // cout<<k<<" ";
  //   --k;
  //   if(k<0)
  //     k=0;
  //   system("clear");
  //   goto a;
  // }
  if(temp[0]==27)
  {
    k=up_and_down(temp,k,2);
    goto a;
  }
  else if(temp[0]==13)
  {
    system("clear");
    switch(k)
    {
      case 0:
        // cout<<"IN Show Items";
        show_items();
        break;
      case 1:
        // cout<<"In Login Page";
        flag = log_in();
        if(flag == 1)
        {
          goto a;
        }
        if(flag == 2)
        {
          goto a;
        }
        break;
      case 2:
        system("exit");
        break;
    }
  }
  // else if(temp[0]!=27 || temp[0]!=13)
  else
  {
    goto a;
  }
  //   cout<<"   Show Items";
  //   cout<<"-> ";
  //   getoxy(1,2);
  //   cout<<"\033[0;107;30mLogin\033[0m";
  //   white_border(15);
  //   getoxy(1,2);
  //   cout<<"   Exit"<<endl;
  //   getoxy(15,0);
  // }
  return 0;
}

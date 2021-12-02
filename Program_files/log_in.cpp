#include<iostream>
#include<ios>
#include<limits>
#include<stdio.h>
#include<string.h>
#include"template.h"
#include"log_in_template.h"
#include"up_and_down.h"
#include"sign_up.h"
#include"dbs2.h"
using namespace std;

int log_in()
{
  //@amit entered detail has to entered in mysql table;
  // getoxy(3,6);

  int k=1;
  char r[3];
  string x,u;
  string y;
  a:
  system("clear");
  if(k!=0)
  {
   /* home_template();
    log_in_template();
    getoxy(1,6);  
    billing_border(20,'=');
    getoxy(3,2);*/
    log_in_and_home_template();
  }
  if(k==0)
  {
    cout<<"\033[0;107;30m  ___ \033[0m";
    getoxy(1,0);
    cout<<"\033[0;107;30m /.\\_\\\033[0m";
    getoxy(1,0);
    cout<<"\033[0;107;30m |_|_|\033[0m";
    getoxy(1,0);
    cout<<"\033[0;107;30m<-HOME\033[0m";
    log_in_template();
    getoxy(1,6);  
    billing_border(20,'=');
    getoxy(3,2);
    cout<<"   Email ID: ";
    // x="\033[0;107;30m"<<x<<"\033";
    // cout<<x;
    // white_border(15);
    // getoxy(1,2);
    getoxy(2,2);
    cout<<"   Password:";
    getoxy(5,3);
    cout<<"    ______ ";
    getoxy(0,3);
    cout<<"    _________ ";
    getoxy(0,3);
    cout<<"    ______ ";
    getoxy(1,3);
    cout<<"   (_BACK_)";
    getoxy(0,3);
    cout<<"   (_SIGN_UP_)";
    getoxy(0,3);
    cout<<"   (_NEXT_)";
    getoxy(2,0);
  }
  if(k==1)
  {  
    cout<<"-> ";
    // cout<<r;
    cout<<"\033[0;107;30mEmail ID: \033[0m";
    // x="\033[0;107;30m"<<x<<"\033";
    // cout<<x;
    // white_border(15);
    // getoxy(1,2);
    getoxy(2,2);
    cout<<"   Password:";
    getoxy(5,3);
    cout<<"    ______ ";
    getoxy(0,3);
    cout<<"    _________ ";
    getoxy(0,3);
    cout<<"    ______ ";
    getoxy(1,3);
    cout<<"   (_BACK_)";
    getoxy(0,3);
    cout<<"   (_SIGN_UP_)";
    getoxy(0,3);
    cout<<"   (_NEXT_)";
    getoxy(2,0);
  }
  if(k==2)
  {
    cout<<"   Email ID: ";
    // x="\033[0;107;30m"<<x<<"\033";
    // cout<<x;
    // white_border(15);
    getoxy(2,2);
    // getoxy(1,2);
    cout<<"-> ";
    cout<<"\033[0;107;30mPassword:\033[0m";
    getoxy(5,3);
    cout<<"    ______ ";
    getoxy(0,3);
    cout<<"    _________ ";
    getoxy(0,3);
    cout<<"    ______ ";
    getoxy(1,3);
    cout<<"   (_BACK_)";
    getoxy(0,3);
    cout<<"   (_SIGN_UP_)";
    getoxy(0,3);
    cout<<"   (_NEXT_)";
    getoxy(2,0);

  }
  if(k==3)
  {

    cout<<"   Email ID: ";
    // x="\033[0;107;30m"<<x<<"\033";
    // cout<<x;
    // white_border(15);
    // getoxy(1,2);
    getoxy(2,2);
    cout<<"   Password:";
    getoxy(5,3);
    cout<<"    ______ ";
    getoxy(0,3);
    cout<<"    _________ ";
    getoxy(0,3);
    cout<<"    ______ ";
    getoxy(1,3);
    cout<<"-> ";
    cout<<"\033[0;107;30m(_BACK_)\033[0m";
    getoxy(0,3);
    cout<<"   (_SIGN_UP_)";
    getoxy(0,3);
    cout<<"   (_NEXT_)";
    getoxy(2,0);
  }
  if(k==4)
  {
    
    cout<<"   Email ID: ";
    // x="\033[0;107;30m"<<x<<"\033";
    // cout<<x;
    // white_border(15);
    // getoxy(1,2);
    getoxy(2,2);
    cout<<"   Password:";
    getoxy(5,3);
    cout<<"    ______ ";
    getoxy(0,3);
    cout<<"    _________ ";
    getoxy(0,3);
    cout<<"    ______ ";
    getoxy(1,3);
    cout<<"   (_BACK_)";
    getoxy(0,3);
    cout<<"-> ";
    cout<<"\033[0;107;30m(_SIGN_UP_)\033[0m";
    getoxy(0,3);
    cout<<"   (_NEXT_)";
    getoxy(2,0);
  }
  if(k==5)
  {
    
    cout<<"   Email ID: ";
    // x="\033[0;107;30m"<<x<<"\033";
    // cout<<x;
    // white_border(15);
    // getoxy(1,2);
    getoxy(2,2);
    cout<<"   Password:";
    getoxy(5,3);
    cout<<"    ______ ";
    getoxy(0,3);
    cout<<"    _________ ";
    getoxy(0,3);
    cout<<"    ______ ";
    getoxy(1,3);
    cout<<"   (_BACK_)";
    getoxy(0,3);
    cout<<"   (_SIGN_UP_)";
    getoxy(0,3);
    cout<<"-> ";
    cout<<"\033[0;107;30m(_NEXT_)\033[0m";
    getoxy(2,0);
  }

  system("stty raw");
  r[0]=getchar();
  if(r[0]==27)
  {
    r[1]=getchar();
    r[2]=getchar();
  }

  system("stty cooked");
  // cout<<r[3]<<endl;

  if(r[0]==27)
  {
    k=up_and_down(r,k,5);
    goto a;
  }
  else if(r[0]==13)
  {
    system("clear");
    switch(k)
    {
      case 0:
        return 1;
        break;
      case 1:
        b:
        system("clear");
        log_in_and_home_template();
        cout<<"-> ";
        // cout<<r;
        cout<<"\033[0;107;30mEmail ID: \033[0m";
        // white_border(15);
        // getoxy(1,2);
        getoxy(2,2);
        cout<<"   Password:";
        getoxy(5,3);
        cout<<"    ______ ";
        getoxy(0,3);
        cout<<"    _________ ";
        getoxy(0,3);
        cout<<"    ______ ";
        getoxy(1,3);
        cout<<"   (_BACK_)";
        getoxy(0,3);
        cout<<"   (_SIGN_UP_)";
        getoxy(0,3);
        cout<<"   (_NEXT_)";
        getoxy(2,0);
        cout<<"email id: ";
        getoxy(0,10);
        cout<<"to go for a other options write Back there\n";
        cin>>email_id;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        // cout<<email_id;
        if(email_id=="Back")//make back lower letter for no error
        {
          email_id="\0";
          goto a;
        }
        else if(email_id.find(".com")==-1||email_id.find("@")==-1)
        {
          cout<<"Your email id is false\n";
          c:
          cout<<"You want to enter the emial id once again(YES) OR Go Back (No) \n";
          cout<<"Enter (Y/N)";
          cin>>x;
          if(x=="Y"||x=="y"||x=="n"||x=="N")
          {
            if(x=="Y"||x=="y")
            {
              goto b;
            }
            else
            {
              email_id="\0";              
              goto a;
            }
          }
          else
          {
            goto c;
          }
        }
        /*
          @amit
          if(email_id not present in database)
          cout<<YOUR Email id is wrong please check 
          goto b:
        */
      case 2:
        b2:
        if(email_id == "\0")
          goto b;
        else
        {
          system("clear");
          log_in_and_home_template();
          // cout<<r;
          cout<<"   Email ID: "<<email_id; 
          // white_border(15);
          // getoxy(1,2);
          getoxy(2,2);
          cout<<"-> ";
          cout<<"\033[0;107;30mPassword:\033[0m";
          getoxy(5,3);
          cout<<"    ______ ";
          getoxy(0,3);
          cout<<"    _________ ";
          getoxy(0,3);
          cout<<"    ______ ";
          getoxy(1,3);
          cout<<"   (_BACK_)";
          getoxy(0,3);
          cout<<"   (_SIGN_UP_)";
          getoxy(0,3);
          cout<<"   (_NEXT_)";
          getoxy(2,0);
          cout<<"password: ";
          getoxy(0,10);
          d:
          cout<<"to go for a other options write Back\n";
          cin>>password;
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          if(password == "Back")
          {
            email_id = "\0";
            goto a;
          }
          else if(password.length()<=8)
          {
            //~this was for sign up 
            //~cout<<"password lenght is too small have atleast 8 letters and special symbols\n";
            cout<<"Your password is incorrect\nTry again!!\n";
            goto d;
          }
          /*
            @amit
            if(password not equal in database)
            cout<<YOUR password is wrong please check 
            goto b:
          */
        }
      case 5:
        // cout<<email_id<<" "<<password;
        if(email_id=="\0"||password=="\0")
          goto b2;
        else
        {
          system("clear");
          log_in_and_home_template();
          cout<<"   Email ID: "<<email_id;
          // white_border(15);
          // getoxy(1,2);
          getoxy(2,2);
          cout<<"   Password: ";
          billing_border(password.length(),'*');
          getoxy(5,3);
          cout<<"    ______ ";
          getoxy(0,3);
          cout<<"    _________ ";
          getoxy(0,3);
          cout<<"    ______ ";
          getoxy(1,3);
          cout<<"   (_BACK_)";
          getoxy(0,3);
          cout<<"   (_SIGN_UP_)";
          getoxy(0,3);
          cout<<"-> ";
          cout<<"\033[0;107;30m(_NEXT_)\033[0m";
          getoxy(2,0);
          e1:
          char temp = getchar();
          int a = temp;
          cout<<a;

          if(temp == 10)
            return 2;
          else
            goto e1;

        }
        // else
        // {
        //   char temp;
        //   e:
        //   getoxy(5,4);
        //   cout<<"First enter the email id and password";
        //   getoxy(1,4);
        //   cout<<"To proceed press ENTER KEY";
        //   temp = getchar();
        //   int a = temp;
        //   cout<<a;

        //   if(temp == 10)
        //     goto b;
        //   else
        //     goto e;
        // }
        break;
      case 3:
        return 1;
        break;
      case 4:
      {
        int value = sign_up();
        if(value == 1)
          return 1;
        if(value == 2)
          goto a;
        if(value == 3)
          return 2;

      }
        break;
    }
  }
  // else if(r[0]!=27 || r[0]!=13)
  else
  {
    goto a;
  }
  return 0; 
}

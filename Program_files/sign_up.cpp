#include<iostream>
#include<ios>
#include<limits>
#include<stdio.h>
#include<string.h>
#include"template.h"
#include"sign_up_template.h"
#include"up_and_down.h"
#include"dbs2.h"
using namespace std;

int sign_up()
{
  int k=1;
  string confirm_password="\0";
  char r[3];
  a:
  system("clear");
  switch (1)
  {
    case 1:
    {
      if(k==0)
      {
        cout<<"\033[0;107;30m  ___ \033[0m";
        getoxy(1,0);
        cout<<"\033[0;107;30m /.\\_\\\033[0m";
        getoxy(1,0);
        cout<<"\033[0;107;30m |_|_|\033[0m";
        getoxy(1,0);
        cout<<"\033[0;107;30m<-HOME\033[0m";
      }
      else
      {
        home_template();
      }
    }
    case 2:
    {
      sign_up_template();
      getoxy(1,6);
      billing_border(27,'=');
      getoxy(3,2);
      if(k==1)
      {
        cout<<"-> ";
        cout<<"\033[0;107;30mEnter Your Username:\033[0m";        
      }
      else
      {
        cout<<"   Enter Your Username:";
      }
      getoxy(2,2);
    }
    case 3:
    {
      if(k==2)
      {
        cout<<"-> ";
        cout<<"\033[0;107;30mEnter Your Email ID:\033[0m";  
      }
      else
      {
        cout<<"   Enter Your Email ID:";
      }
      getoxy(2,2);
    }
    case 4:
    {
      if(k==3)
      {
        cout<<"-> ";
        cout<<"\033[0;107;30mEnter Password:\033[0m";
      }
      else
      {
        cout<<"   Enter Password:";        
      }
      getoxy(2,2);
    }
    case 5:
    {
      if(k==4)
      {
        cout<<"-> ";
        cout<<"\033[0;107;30mConfirm Password:\033[0m";
      }
      else
      {
        cout<<"   Confirm Password:";    
      }
      getoxy(5,3);
    }
    case 6:
    {
      cout<<"    ______ ";
      getoxy(0,3);
      cout<<"              ";
      getoxy(0,3);
      cout<<"    ______ ";
      getoxy(1,3);
      if(k==5)
      {
        cout<<"-> ";
        cout<<"\033[0;107;30m(_BACK_)\033[0m";
      }
      else
      {
        cout<<"   (_BACK_)";
      }
      getoxy(0,3);
      cout<<"              ";
      getoxy(0,3);
    }
    case 7:
    {
      if(k==6)
      {
        cout<<"-> ";
        cout<<"\033[0;107;30m(_NEXT_)\033[0m";
      }
      else
      {
        cout<<"   (_NEXT_)";
      }
      getoxy(2,0);
    }
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
    k=up_and_down(r,k,6);
    goto a;
  }
  else if(r[0]==13)
  {
    switch(k)
    {
      case 0:
        return 1;
      case 1:
        b1:
        system("clear");
        home_template();
        sign_up_template();
        getoxy(1,6);
        billing_border(27,'=');
        getoxy(3,2);
        cout<<"-> ";
        cout<<"\033[0;107;30mEnter Your Username:\033[0m";
        getoxy(2,2);
        cout<<"   Enter Your Email ID:";
        getoxy(2,2);
        cout<<"   Enter Password:";        
        getoxy(2,2);
        cout<<"   Confirm Password:";    
        getoxy(5,3);
        cout<<"    ______ ";
        getoxy(0,3);
        cout<<"              ";
        getoxy(0,3);
        cout<<"    ______ ";
        getoxy(1,3);
        cout<<"   (_BACK_)";
        getoxy(0,3);
        cout<<"              ";
        getoxy(0,3);
        cout<<"   (_NEXT_)";
        getoxy(2,0);
        cout<<"Write Your Username: ";
        getoxy(0,8);
        cout<<"to go for a other options write Back there\n";
        cin>>Username;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        // cout<<email_id;
        if(Username=="Back")//make back lower letter for no error
        {
          Username="\0";
          goto a;
        }
        else
        {
          string x;
          cout<<"Are you sure about your username it will not change in future\n";
          c1:
          cout<<"If you are sure then (YES) OR if not then (No) \n";
          cout<<"Enter (Y/N)";
          cin>>x;
          if(x=="Y"||x=="y"||x=="n"||x=="N")
          {
            if(x=="N"||x=="n")
            {
              Username="\0";
              goto b1;
            }
          }
          else
          {
            goto c1;
          }
        }
      case 2:
        if(Username == "\0")
        {
          goto b1;
        }
        else
        {
          b2:
          system("clear");
          home_template();
          sign_up_template();
          getoxy(1,6);
          billing_border(27,'=');
          getoxy(3,2);
          cout<<"   Enter Your Username: "<<Username;
          getoxy(2,2);
          cout<<"-> ";
          cout<<"\033[0;107;30mEnter Your Email ID:\033[0m";
          getoxy(2,2);
          cout<<"   Enter Password:";        
          getoxy(2,2);
          cout<<"   Confirm Password:";    
          getoxy(5,3);
          cout<<"    ______ ";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"    ______ ";
          getoxy(1,3);
          cout<<"   (_BACK_)";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"   (_NEXT_)";
          getoxy(2,0);
          cout<<"Write your email id: ";
          getoxy(0,8);
          cout<<"to go for a other options write Back there\n";
          cin>>email_id;
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          if(email_id=="Back")//make back lower letter for no error
          {
            Username="\0";
            email_id="\0";
            goto a;
          }
          else if(email_id.find(".com")==-1||email_id.find("@")==-1)
          {
            string x;
            cout<<"Your email id is not right.\n Please do give @ and .com\n";
            c2:
            cout<<"You want to enter the email id once again(YES) OR Go Back (No) \n";
            cout<<"Enter (Y/N)";
            cin>>x;
            if(x=="Y"||x=="y"||x=="n"||x=="N")
            {
              if(x=="Y"||x=="y")
              {
                goto b2;
              }
              else
              {
                Username="\0";
                email_id="\0";              
                goto a;
              }
            }
            else
            {
              goto c2;
            }
          }
        }
      case 3:
        if(email_id == "\0")
          goto b1;
        else
        {
          system("clear");
          home_template();
          sign_up_template();
          getoxy(1,6);
          billing_border(27,'=');
          getoxy(3,2);
          cout<<"   Enter Your Username: "<<Username;
          getoxy(2,2);
          cout<<"   Enter Your Email ID: "<<email_id;
          getoxy(2,2);
          cout<<"-> ";
          cout<<"\033[0;107;30mEnter Password:\033[0m";
          getoxy(2,2);
          cout<<"   Confirm Password:";    
          getoxy(5,3);
          cout<<"    ______ ";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"    ______ ";
          getoxy(1,3);
          cout<<"   (_BACK_)";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"   (_NEXT_)";
          getoxy(2,0);
          d:
          cout<<"Enter Password to set: ";
          getoxy(0,8);
          cout<<"to go for a other options write Back\n";
          cin>>password;
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          if(password == "Back")
          {
            Username = "\0";
            email_id = "\0";
            password = "\0";
            goto a;
          }
          else if(password.length()<=8)
          {
            //~this was for sign up 
            cout<<"Your password lenght is too small have atleast 8 letters and special symbols\n";
            //~ this is for login
            //~ cout<<"Your password is incorrect\nTry again!!\n";
            goto d;
          }
        }
      case 4:
        if(password == "\0")
          goto b1;
        else
        {
          system("clear");
          home_template();
          sign_up_template();
          getoxy(1,6);
          billing_border(27,'=');
          getoxy(3,2);
          cout<<"   Enter Your Username: "<<Username;
          getoxy(2,2);
          cout<<"   Enter Your Email ID: "<<email_id;
          getoxy(2,2);
          cout<<"   Enter Password: ";
          billing_border(password.length(),'*');        
          getoxy(2,2);
          cout<<"-> ";
          cout<<"\033[0;107;30mConfirm Password:\033[0m";
          getoxy(5,3);
          cout<<"    ______ ";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"    ______ ";
          getoxy(1,3);
          cout<<"   (_BACK_)";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"   (_NEXT_)";
          getoxy(2,0);
          cout<<"Confirm your password: ";
          getoxy(0,8);
          cout<<"To go for a other options write Back\n";
          cin>>confirm_password;
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          if(confirm_password == "Back")
          {
            Username = "\0";
            email_id = "\0";
            password = "\0";
            confirm_password="\0";
            goto a;
          }
          else if(password!=confirm_password)
          {
            //~this was for sign up 
            //~cout<<"password lenght is too small have atleast 8 letters and special symbols\n";
            cout<<"Your password is matched\nTry again!!\n";
            goto d;
          }
        }
      case 6:        
        if(confirm_password == "\0")
          goto b1;
        else
        {
          system("clear");
          home_template();
          sign_up_template();
          getoxy(1,6);
          billing_border(27,'=');
          getoxy(3,2);
          cout<<"   Enter Your Username: "<<Username;
          getoxy(2,2);
          cout<<"   Enter Your Email ID: "<<email_id;
          getoxy(2,2);
          cout<<"   Enter Password: ";
          billing_border(password.length(),'*');        
          getoxy(2,2);
          cout<<"   Confirm Password: "<<"Password Has been Accepted";
          getoxy(5,3);
          cout<<"    ______ ";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"    ______ ";
          getoxy(1,3);
          cout<<"   (_BACK_)";
          getoxy(0,3);
          cout<<"              ";
          getoxy(0,3);
          cout<<"-> ";
          cout<<"\033[0;107;30m(_NEXT_)\033[0m";
          getoxy(2,0);
          
          e:
          char temp = getchar();
          int a = temp;
          cout<<a;

          if(temp == 10)
            return 3;
          else
            goto e;

        }
        break;
      case 5:
        return 2;
    }
  }
  else
  {
    goto a;
  }
  return 0;
}

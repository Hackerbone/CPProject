#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"ttt.h"
using namespace std;

void signup();
struct suppliers
{
  string name[20];
  string sname[20];
  char pass[20];
  long int id;
};
suppliers supplier[20];

void login()
{

  int iid;
  char ipass[20];
  // suppliers ipass[1];
  cout<<"Enter your ID:";
  cin>> iid;
  cout<<endl<<"Enter your password:";
  cin>> ipass;
  cout<<endl;

for(int l =0; l<5;l++){
  // cout << strcmp(ipass,supplier[l].pass);
  if(iid == supplier[l].id && strcmp(ipass,supplier[l].pass) == 0){
    system("clear");
    client();

  }
  else if(iid == 1807 && strcmp(ipass,"F") == 0){
    system("clear");
    ttt();

  }

  else{
    cout << "Invalid Login , Please signup\n Sign  Up: \n";
  }

}
}

void signup()
{
  cout<<"Enter your name:"<<endl;

  cin>>supplier[1].name[0];
  cin>>supplier[1].sname[0];

  cout<<"\nEnter your ID:";
  cin>>supplier[1].id;

  cout<<"\nEnter your password:";
  cin>>supplier[1].pass;

  cout<<endl;
}

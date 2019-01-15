#include <iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"ttt.h"
// #include"consumer.h"
using namespace std;

void signup();
struct suppliers
{
  string name[20];
  string sname[20];
  char pass[20];
  // char add[200];
  char uname[20];
};
suppliers supplier[20];

void login()
{
  char iid[20];
  char ipass[20];
  // suppliers ipass[1];
  cout<<"Enter your Username:";
  cin>> iid;
  cout<<endl<<"Enter your password:";
  cin>> ipass;
  cout<<endl;

for(int l =0; l<5;l++){
  if( (strcmp(ipass,supplier[l].uname) == 0) && (strcmp(ipass,supplier[l].pass) == 0) ){
    system("clear");
    client();
  }
  else if((strcmp(iid,"1807") == 0)&& strcmp(ipass,"F") == 0){
    system("clear");
    ttt();
  }
  else{
  cout << "Invalid Login , Please signup (Press any key to continue)\n";
  cout << supplier[l].uname <<supplier[l].pass;

  cin.ignore();
  cin.get();
    break;
  }
}
}

void signup()
{
  // cout << "User Number (i.e 1,2,3...)\n";
  // int h;
  // cin >>h;
  cout<<"Enter your name:"<<endl;

  cin>>supplier[1].name[0];
  cin>>supplier[1].sname[0];

  cout<<"\nEnter your username:";
  cin>>supplier[1].uname;

  cout<<"\nEnter your password:";
  cin>>supplier[1].pass;

  // cout<<"\nEnter your address:";
  // cin>>supplier[h].add;

// cout << supplier[h].uname <<supplier[h].pass;
cin.get();
cin.ignore();
  cout<<endl;
}

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"consumer.h"
#include"loginsignup.h"
// #include"ttt.h"
using namespace std;
//MENU
 int main() {
		system("clear");
		char mchoice[10];
int no;
		do{
		system("clear");
		cout << "\n Welcome to E-Store" << endl
		<< " Chose the number corresponding to your role: " << endl
		<< "\n MENU" << "\n | 1] | Signup \n | 2] | Login \n | 3] | Exit \nEnter Response: ";
    supplier[4].name[20] = "Sitaraman";
    supplier[4].sname[20] = "S";
    supplier[4].pass[10] = 'F';
    strcpy(supplier[4].uname,"1807");
		cin>> mchoice;

switch (mchoice[0]) {
  case '1':
  signup();
  break;
  case '2':
  login();
  break;
  case '3':
  system("clear");
  cout << "Thanks for visiting, hope to see you again!\n";
  break;

  default:
  cout << "Invalid input try again" << '\n';
  cin.ignore();
  cin.get();
  break;
}

		}
		while(mchoice[0] != '3');

		return 0;
 }

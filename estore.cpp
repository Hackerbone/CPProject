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
    supplier[4].id = 1807;
		cin>> mchoice;

switch (mchoice[0]) {
  case '1':
  signup();
  break;
  case '2':
  login();
  break;
  case '3':
  mchoice[0] = '3';
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

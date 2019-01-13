#include <iostream>
#include<stdio.h>
#include"weight.h"
#include"ttt.h"
using namespace std;
//MENU
 int main() {
		system("clear");
		char mchoice[10];
#include <iostream>
#include<stdio.h>
#include"consumer.cpp"
// #include"ttt.h"
using namespace std;
//MENU
 int main() {
		system("clear");
		char mchoice[10];

		do{
		system("clear");
		cout << "\n Welcome to Warehouse Operations" << endl
		<< " Chose the number corresponding to your role: " << endl
		<< "\n MENU" << "\n | 1] | Supplier \n | 2] | Consumer \n | 3] | Exit \nEnter Response: ";

		cin>> mchoice;

switch (mchoice[0]) {
  case '1':
  // ttt();
  break;
  case '2':
  client();
  break;
  case '3':
  mchoice[0] = '3';
  break;

  default:
  cout << "Invalid input try again" << '\n';
  getchar();
  break;
}

		}
		while(mchoice[0] != '3');

		return 0;
 }

		do{
		system("clear");
		cout << "\n Welcome to Warehouse Operations" << endl
		<< " Chose the number corresponding to your role: " << endl
		<< "\n MENU" << "\n 1]Supplier \n 2]Consumer \n 3]Exit \nEnter Response: ";

		cin>> mchoice;

switch (mchoice[0]) {
  case '1':
  ttt();
  break;
  case '2':
  weight();
  break;
  case '3':
  mchoice[0] = '3';
  break;
  default:
  cout << "Invalid input try again" << '\n';
  break;
}

		}
		while(mchoice[0] != '3');

		return 0;
 }

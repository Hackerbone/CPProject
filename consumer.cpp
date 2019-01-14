#include <iostream>
#include<stdio.h>
#include<string.h>
#include"ttt.h"
using namespace std;
//cart structure
struct cons{
  int id;
  int qnt;
  int cst;
};
//product structure
struct product{
  int sno;
  char name[20];
  int price;
};

//line function
void hline(int len){
  for(int i=0; i < len; i++){
  cout << "-";
  }
}
cons cart[10];
void buy(){
  product prod[4];
  //1
  prod[0].sno = 1;
  strcpy(prod[0].name,"Handwash");
  prod[0].price = 200;
  //2
  prod[1].sno = 2;
  strcpy(prod[1].name,"Lipstick");
  prod[1].price = 100;
  //3
  prod[2].sno = 3;
  strcpy(prod[2].name,"Cream   ");
  prod[2].price = 150;
  //4
  prod[3].sno = 4;
  strcpy(prod[3].name,"Lipbalm ");
  prod[3].price = 75;
    

  int quant;
  system("clear");
  char ichoice[10];
  do{
  cout << "\n Welcome to Client Area" << endl
  << " Chose the number of the corresponding product you want to choose: " << endl
  << "\n MENU \n" ;
  hline(22);
  for(int b=0;b<4;b++){
  cout << "\n|" << prod[b].sno <<" |" << prod[b].name<<  " | Rs" << prod[b].price << " | \n";
  }
  hline(22);
  cout << "\nWhat would you like to purchase: ";
  cin >> ichoice;

  switch(ichoice) {
    case '1':
    cout << "Enter quantity: ";
    cin >> quant;
    cart[ichoice[0]].id = 1;
    cart[ichoice[0]].qnt = quant;
    cart[ichoice[0]].cst = 200;

    cout << "Total Amt. : " << cart[ichoice[0]].id<< " Handwashes\n";
    cout << "Want to purchase anything else?";
    system("clear");
    break;

    case '2':
    cout << "Enter quantity: ";
    cin >> quant;
    cart[ichoice[0]].id = 2;
    cart[ichoice[0]].qnt = quant;
    cart[ichoice[0]].cst = 50;
    cout << "Want to purchase anything else?";
    system("clear");
    break;


    case '3':
    cout << "Enter quantity: ";
    cin >> quant;
    cart[ichoice[0]].id = 3;
    cart[ichoice[0]].qnt = quant;
    cart[ichoice[0]].cst = 150;
    cout << "Want to purchase anything else?";
    system("clear");
    break;

    case '4':
    cout << "Enter quantity: ";
    cin >> quant;
    cart[ichoice[0]].id = 4;
    cart[ichoice[0]].qnt = quant;
    cart[ichoice[0]].cst = 75;
    cout << "Want to purchase anything else?";
    system("clear");
    break;

    default:
    cout << "Invalid input try again" << '\n';
    getchar();
    system("clear");
    break;
  }

  		}
  		while(ichoice[0] != '5');


}

void chk(){

  for(int j=0; j<4;j++){
    cout << "+ ";
    hline(25);
    cout << " +\n| Items  | Cost | Total Cost|\n";
    cout << "|   "<< cart[j].id << "    |  " << cart[j].cst  << "   |     " <<  (cart[j].cst * cart[j].qnt)  << "     | \n" ;

  }
  cout << "+ ";
  hline(25);
  cout << " + ";
  cin.ignore();
  cin.get();



}
//MENU
 int client() {



		system("clear");
		char cchoice[10];

		do{
		system("clear");
		cout << "\n Welcome to Client Area" << endl
		<< " Chose the number corresponding to your purpose: " << endl
		<< "\n MENU" << "\n 1]Buy \n 2]Orders \n 3]Cart \n 4]Back \nEnter Response: ";

		cin>> cchoice;
    cons cart[20];
switch (cchoice[0]) {
  case '1':

  buy();
  break;

  case '2':
  // orders();
  break;

  case '3':
  chk();
  break;
  case '4':
  // ttt();
  break;
  default:
  cout << "Invalid input try again" << '\n';
  getchar();
  break;
}

		}
		while(cchoice[0] != '4');

		return 0;
 }

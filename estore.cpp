#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"ttt.h"
using namespace std;

struct suppliers
{
  string name[20];
  string sname[20];
  char pass[20];
  char id[20];
  char add[1000];
};
suppliers supplier[20];
void signup()
{
  cout<<"Enter your name and surname:"<<endl;
  cin>>supplier[1].name[0];
  cin>>supplier[1].sname[0];

  cout<<"\nEnter your ID:";
  cin>>supplier[1].id;

  cout<<"\nEnter your password:";
  cin>>supplier[1].pass;

  cout<<"Enter your shipping address:"<<endl;
  cin>>supplier[1].add;
  cout<<endl;
}

struct cart{
  int id;
  char nme[20];
  char color[20];
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
int b;
  cart cons[20];
void buy(){

  product prod[4];
  //1
  prod[0].sno = 1;
  strcpy(prod[0].name,"iPhone Xs Maxx ");
  prod[0].price = 999;
  //2
  prod[1].sno = 2;
  strcpy(prod[1].name,"iPhone Xs      ");
  prod[1].price = 799;
  //3
  prod[2].sno = 3;
  strcpy(prod[2].name,"One Plus 6t    ");
  prod[2].price = 539;
  //4
  prod[3].sno = 4;
  strcpy(prod[3].name,"Samsung S9 Plus");
  prod[3].price = 479;

  int quant;
  system("clear");
  char ichoice[1];
  do{
  cout << "\n Welcome to Marketplace" << endl
  << " Chose the number of the corresponding product you want to choose: " << endl
  << "\n MENU \n" ;
  cout << "+"; hline(27); cout << "+";
  for(int b=0;b<prod[b].sno;b++){
  cout << "\n|" << prod[b].sno <<" | " << prod[b].name<<  " | $" << prod[b].price << " | ";
  }
  cout << "\n|5 | Back            |\n";
  cout << "+"; hline(27); cout << "+";
  cout << "\nWhat would you like to purchase: ";
  cin >> ichoice;

  switch(ichoice[0]) {
    case '1':
    if(cons[0].qnt == 0){ //Checks if item pre-exists
    b=1;
    cout << "Enter color(JetBlack[JB]/Gold[RG]/Silver[S]): ";
    cin >> cons[0].color;
    if(strcmp(cons[0].color,"JB")!=0 || strcmp(cons[0].color,"RG")!=0 || strcmp(cons[0].color,"W")!=0
     ||strcmp(cons[0].color,"w")!=0 ||strcmp(cons[0].color,"jb")!=0||strcmp(cons[0].color,"rg")!=0){
      cout << "Enter Valid color ";
      cin >> cons[0].color;
    }

    cons[0].id = prod[0].sno;
    cons[0].cst = prod[0].price;
    strcpy(cons[0].nme,prod[0].name);
    }

    system("clear");
    cout << "Want to purchase anything else?";
    break;

    case '2':
    if(cons[1].qnt == 0){ //Checks if item pre-exists
    b=2;
    cout << "Enter color(MatteBlack[MB]/RoseGold[RG]/Silver[S]): ";
    cin >> cons[1].color;
    if(strcmp(cons[1].color,"MB")!=0 || strcmp(cons[1].color,"RG")!=0 || strcmp(cons[1].color,"W")!=0
     ||strcmp(cons[1].color,"w")!=0 ||strcmp(cons[1].color,"mb")!=0||strcmp(cons[1].color,"rg")!=0){
      cout << "Enter Valid color ";
      cin >> cons[1].color;
    }
    cons[1].id = prod[1].sno;
    cons[1].cst = prod[1].price;
    strcpy(cons[1].nme,prod[1].name);
    }

    system("clear");
    cout << "Want to purchase anything else?";
    break;

    case '3':
    b=3;
    if(cons[2].qnt == 0){ //Checks if item pre-exists
    cout << "Enter color(Black[B]/Purple[P]/White[W]): ";
    cin >> cons[2].color;
    if(strcmp(cons[2].color,"B")!=0 || strcmp(cons[2].color,"P")!=0 || strcmp(cons[2].color,"W")!=0
     ||strcmp(cons[2].color,"w")!=0 ||strcmp(cons[2].color,"b")!=0||strcmp(cons[2].color,"p")!=0){
      cout << "Enter Valid color ";
      cin >> cons[2].color;
    }
    cons[2].id = prod[2].sno;
    cons[2].cst = prod[2].price;
    strcpy(cons[2].nme,prod[2].name);
    }

    system("clear");
    cout << "Want to purchase anything else?";
    break;

    case '4':
    if(cons[3].qnt == 0){ //Checks if item pre-exists
    b=4;
    cout << "Enter color(Black[B]/Gold[G]/White[W]): ";
    cin >> cons[3].color;
    if(strcmp(cons[3].color,"B")!=0 || strcmp(cons[3].color,"G")!=0 || strcmp(cons[3].color,"W")!=0
     ||strcmp(cons[3].color,"w")!=0 ||strcmp(cons[3].color,"b")!=0||strcmp(cons[3].color,"g")!=0){
      cout << "Enter Valid color ";
      cin >> cons[3].color;
    }
    cons[3].id = prod[3].sno;
    cons[3].cst = prod[3].price;
    strcpy(cons[3].nme,prod[3].name);
    }
    system("clear");
    cout << "Want to purchase anything else?";
    break;
    case '5':
    break;
    default:
    cout << "Invalid input try again" << '\n';
    cin.ignore();
    cin.get();
    system("clear");
    break;
  }
  		}
  		while(ichoice[0] != '5');
}

void chk(){
cout << endl;
int e = 0;
for(int v=0;v<10;v++){
  e += cons[v].cst;
}
  for(int j=0; j< b ;j++){
    if(j == 0 && cons[j].cst != 0){
    cout << "+ ";
    hline(35);
    cout << " +\n|      Name      |  Colour  | Cost($) |\n";
    cout << "  "<<  cons[j].nme << "     "<< cons[j].color << "        " << cons[j].cst  << "        " << "\n" ;
    }
    else if(cons[j].cst != 0){
      cout << "+ ";
      hline(35);
      cout << " +\n|     Name      |  Colour  | Cost($) |\n";
      cout << "   "<<  cons[j].nme << "     "<< cons[j].color << "      " << cons[j].cst  << "        "  << "\n" ;
    }
    else if(e==0){
      cout << "No items selected, Press any key to go to the previous menu";
    }
  }
  cout << "+ "; hline(35);  cout << " + \n Outstanding amount : $" << e;
  cin.ignore();
  cin.get();
}
void checkout(){
  int e = 0;
  for(int v=0;v<10;v++){
    e += cons[v].cst;
  }
  char pchoice[20];
  do{
  system("clear");
  cout << "\nCheckout \n" << endl << "Items in cart \n";
  chk();
  cout << " Chose your payment method: " << endl
  << "\n MENU" << "\n 1]Credit/Debit card \n 2]Paytm \n 3]Paypal \n 4]Back \nEnter Response: ";

  cin>> pchoice;

switch (pchoice[0]) {
    case '1':
    int one,two,three,four,cvv;
    char pur[1];
    cout  << "Outstanding Amt. to be payed = $" << e << "\n Enter Card Number: \n";
    cin >> one >> two >> three >> four;
    cout << "Enter CVV\n";
    cin >> cvv;
    cout << "Are you sure to purchase(Y/N): ";
    for(int l=0; l < 4; l++){
      if(cons[l].cst != 0){
        cout <<  cons[l].nme << " \n";
      }
    }
    cin >> pur;
    if(strcmp(pur,"Y")==0){
      cout << "You purchased ";
      for(int n=0; n < 4; n++){
        if(cons[n].cst != 0){
          cout <<  cons[n].nme << " \n";
        }
        cout << " These items will be delivered to the address : \n" << supplier[1].add << " \n Be Sure to come back! (Press ENTER to go back) \n";
        cin.ignore();
        cin.get();
      }

    }

    break;

    case '2':
    int phone,otp;
    char pone[1];
    cout  << "Outstanding Amt. to be payed = $" << e << "\n Enter Phone Number: \n";
    cin >> phone;
    cout << "Enter OTP (Use anything as default)\n";
    cin >> otp;
    cout << "Are you sure to purchase(Y/N): ";
    for(int l=0; l < 4; l++){
      if(cons[l].cst != 0){
        cout << "\n" <<  cons[l].nme << " \n";
      }
    }
    cin >> pone;
    if(strcmp(pone,"Y")==0){
      cout << "You purchased ";
      for(int n=0; n < 4; n++){
        if(cons[n].cst != 0){
          cout <<  " \n" << cons[n].nme << " \n";
        }
        cout << " These items will be delivered to the address : \n" << supplier[1].add << " \n Be Sure to come back! (Press ENTER to go back) \n";
        cin.ignore();
        cin.get();
      }

    }
    break;

    case '3':
    int acc;
    char ppp[20];
    cout  << "Outstanding Amt. to be payed = $" << e << "\n Enter Account Id: \n";
    cin >> acc;
    if(acc > 10){
      cout << "Enter valid 10 Digit Account number";
      cin >> acc;
    }
    cout << "Enter password\n";
    cin >> ppp;
    cout << "Are you sure to purchase(Y/N): ";
    for(int l=0; l < 4; l++){
      if(cons[l].cst != 0){
        cout << "\n" <<  cons[l].nme << " \n";
      }
    }
    cin >> ppp;

    if(strcmp(ppp,"Y")==0){
      cout << "You purchased ";

      for(int n=0; n < 4; n++){

        if(cons[n].cst != 0){
          cout <<  " \n" << cons[n].nme << " \n";
        }
        cout << " These items will be delivered to the address : \n" << supplier[1].add << " \n Be Sure to come back! (Press ENTER to go back) \n";
        cin.ignore();
        cin.get();
      }

    }

    break;

    case '4':
    break;

    default:
    cout << "Invalid input try again" << '\n';
    cin.ignore();
    cin.get();
    break;
    }

  }
  while(pchoice[0] != '4');

}

//MENU
 int client(){
		int no;
		char cchoice[10];
		do{
		system("clear");
		cout << "\n Welcome to Client Area" << endl
		<< " Chose the number corresponding to your purpose: " << endl
		<< "\n MENU" << "\n 1]Buy \n 2]Cart \n 3]Checkout \n 4]Back \nEnter Response: ";

		cin>> cchoice;

  switch (cchoice[0]) {
  case '1':
  buy();
  break;

  case '2':
  chk();
  break;

  case '3':
  checkout();
  break;

  case '4':
  break;

  default:
  cout << "Invalid input try again" << '\n';
  cin.ignore();
  cin.get();
  break;
}
}
		while(cchoice[0] != '4');
		return 0;
 }

void login()
{

  char iid[20];
  char ipass[20];
  // suppliers ipass[1];
  cout<<"Enter your ID:";
  cin>> iid;
  cout<<endl<<"Enter your password:";
  cin>> ipass;
  cout<<endl;


  if( strcmp(iid,supplier[1].id) == 0 && strcmp(ipass,supplier[1].pass) == 0){
    system("clear");
    client();
  }
//   else if(strcmp(iid,"1807") == 0 && strcmp(ipass,"F") == 0){
//     system("clear");
//     ttt();
//   }

  else{
    cout << "Invalid Login , Please signup (press enter to continue)\n";
    cin.ignore();
  	cin.get();
  }

}
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

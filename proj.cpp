#include <iostream>
#include<string.h>
#include"ttt.h"
#include"weight.h"
using namespace std;
//MENU
 int main() {
		system("clear");
		int mchoice;
		int i = 0;

		do{
		system("clear");
		cout << "\n Welcome to utility Menu, you can chose which utility you want to chose." << endl
		<< "To chose, enter the number corresponding to the utility: " << endl
		<< "\nMENU" << "\n 1] Periodic Table \n 2] Tic Tac Toe \n 3] Relative Weight \n 4] Exit \n";

		cin >> mchoice;
			if(i != 0){
					i++;
				}

			if(mchoice == 1){
					i = 0;
				}

			else if(mchoice  == 2){
					ttt();
				}

      else if(mchoice  == 3){
  				weight();
  				}

			else if(mchoice  == 4){
					i=-1;
				}

			else{
			cout<< "Enter Valid character";
			i = 0;
			}


		}
		while(i == 0);

		return 0;
 }

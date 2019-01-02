using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


void board()
{
	system("clear");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}


void ttt()
{
	int player = 1, i ,choice;

	char mark;
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", Enter number tile:  ";
		cin >> choice;

		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	}
	while(i==-1);
	board();
	if(i==1){
		cout<<"\aPLAYER "<<--player<<" WINS";
    
    for (int i = 1; i < 10; i++) {

      if(square[i] == 'O' || square[i] == 'X'){

        switch(i){
          case 1:
            square[i] = '1';
            break;
          case 2:
            square[i] = '2';
            break;
          case 3:
            square[i] = '3';
            break;
          case 4:
            square[i] = '4';
            break;
          case 5:
            square[i] = '5';
            break;
          case 6:
            square[i] = '6';
            break;
          case 7:
            square[i] = '7';
            break;
          case 8:
            square[i] = '8';
            break;
          case 9:
            square[i] = '9';
            break;
          default:
            break;
        }//switch
      }//if
    }//for
  }
	else{
     cout<<"\aGame draw";
     for (int i = 1; i < 10; i++) {

       if(square[i] == 'O' || square[i] == 'X'){

         switch(i){
           case 1:
             square[i] = '1';
             break;
           case 2:
             square[i] = '2';
             break;
           case 3:
             square[i] = '3';
             break;
           case 4:
             square[i] = '4';
             break;
           case 5:
             square[i] = '5';
             break;
           case 6:
             square[i] = '6';
             break;
           case 7:
             square[i] = '7';
             break;
           case 8:
             square[i] = '8';
             break;
           case 9:
             square[i] = '9';
             break;
           default:
             break;
         }//switch
       }//if
     }//for
  }


	cin.ignore();
	cin.get();

}


using namespace std;
void weight(){
  system("clear");
  float w;
  int x;
  cout << "Enter your earth weight\n";
  cin >> w;
  cout <<  "\nEnter planet no.\n";
  cin >> x;

  switch(x){
    case 1:
      cout << "\nYour Venus weight is = " << (w*0.78) << endl;
      break;
    case 2:
      cout << "\nYour Mars weight is = " << (w*0.39)<< endl;
      break;
    case 3:
      cout << "\nYour Jupiter weight is = " << (w*2.65)<< endl;
      break;
    case 4:
      cout << "\nYour Saturn weight is = " << (w*1.17)<< endl;
      break;
    case 5:
      cout << "\nYour Uranus weight is = " << (w*1.05)<< endl;
      break;
    case 6:
      cout << "\nYour Neptune weight is = " << (w*1.23)<< endl;
      break;
    default:
      cout << "\n Your Earth weight is " << w<< endl;
      break;
  }
}

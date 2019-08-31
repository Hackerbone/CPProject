#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

void hr(int x){
    cout << "+";
    for(int i=0;i<x;i++){
        cout << "-";
    }
    cout << "+\n";
}
void clear(){
    system("clear");
}

class supplier{
    //About Supplier
    string supplier_name;
    string supplier_password;
    string supplier_sname;
    string supplier_username;
    //Product
    string product_name;
    long int product_cost;
    string product_color;
    string product_symbol;
    public:
        void supplier_product_input()
        {   
            cout << "|| Welcome To Product Selling || \nEnter Prouct name\n";
            cin >> product_name;
            cout  << "Enter Product Cost\n";
            cin >> product_cost;
            cout << "Enter Product Color\n";
            cin >> product_color;
            cout << "Enter Product Color Symbol in [color] form\n";
            cin >> product_symbol;
        }
        void product_file_input()
        {   
            fstream product_file;
            supplier s;
            s.supplier_product_input();
            product_file.open("products.txt", ios::out | ios::app | ios::binary);
            product_file.write((char*)&s, sizeof(s));
            product_file.close();
        }
        void view(){
            ifstream product_file;
            supplier s;
            product_file.open("products.txt");
            int i = 1;
            cout << "| Sno |   Product    |   Cost   |   Color   |" << endl;
            do
            {   
                product_file.read((char*)&s, sizeof(s));
                cout <<"   " << i <<"     "<< s.product_name << "       "<< s.product_cost << "$        " << s.product_color << "\n";
                hr(43);
                i++;
            } 
            while(product_file.read((char*)&s, sizeof(s)));
            product_file.close();
            cin.ignore();
            cin.get();
        }
        void supplier_signup()
        {
            clear();
            cout << "Enter your Details\n";
            cout << "Enter your first name: ";
            cin >> supplier_name;
            cout << endl;
            cout << "\nEnter your last name: ";
            cin >> supplier_sname;
            cout << endl;
            cout << "\nEnter your Username: ";
            cin >> supplier_username;
            cout << endl;
            cout << "\nEnter your password: ";
            cin >> supplier_password;
            cout << endl;
        }
        void supplier_login()
        {
            int present;
            supplier x;
            cout << "Enter your Username: ";
            cin >> x.supplier_username;

            cout << "\nEnter your password: ";
            cin >> x.supplier_password;
            cout << endl;
            supplier_login_check(x, present);
            if(present == 1){
                product_file_input();
            }
            else{
                cout << "Record Not Found! Try signing up";
            }
        }
       void supplier_login_check(supplier x, int &present){
           //Checking if record is present in file;
           present = 0;
           ifstream supply_file;
           supplier s;
           supply_file.open("supplier.txt", ios::in | ios::binary);
           //Looping and reading all file contents
           while (!supply_file.eof())
           {
               supply_file.read((char *)&s, sizeof(s));
               if (s.supplier_username == x.supplier_username && s.supplier_password == x.supplier_password)
               {
                   present = 1;
               }
           }
           supply_file.close();
       }        
     
    void supplier_file_input()
    {
        fstream supply_file;
        supplier s;
        s.supplier_signup();
        supply_file.open("supplier.txt", ios::app);
        supply_file.write((char*)&s, sizeof(s));
        supply_file.close();
    }

    void supplier_menu()
    {
        char x;
        do
        {   system("clear");
            cout << "|| Welcome To Supplier Area ||\n"
                 << "[1]Login\n[2]Signup \n([0] to exit)\n > ";
            cin >> x;
            if (x == '1')
            {
                clear();
                supplier_login();
            }
            else if (x == '2')
            {
                clear();
                supplier_file_input();
            }
            else if (x == 'x')
            {
                clear();
                view();
            }

            else if (x == '0')
            {
                break;
            }

            else
            {
                cout << "Enter valid input";
            }

        } while (x != '0');
    }
};


void menu(){
    char a;
    //Do menu starts
    do{
        system("clear");
        cout << "|| Welcome to Estore where you can buy or supply Electronic Products! ||\n"
             << "[1] Supplier \n[2] Customer \n\n([0] to Exit)\n> ";
        cin >> a;
        if (a == '1')
        {
            clear();
            supplier supply_session;
            supply_session.supplier_menu();

    }
    else if (a == '2')
    {
        clear();
        supplier x;
        x.view();
    }
    else if (a == '0')
    {
        break;
    }

    else{
        cout << "Tri dont cri";
    }

    }while(a!='0');
//Menu 1 ends


}

    int main(){
        system("clear");
        menu();
        return 0;
    }

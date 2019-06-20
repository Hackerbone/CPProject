#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;

void clear(){
    system("clear");
}

class supplier{
    //about supplier
    char supplier_name[20];
    char supplier_password[50];
    char supplier_sname[20];
    char supplier_username[20];
    //Product
    char product_name[50];
    double product_cost;
    char product_color[12];
    char product_symbol;
    public:
        void supplier_signup()
        {
            clear();
            cout << "Enter your Details\n";
            cout << "Enter your first name:";
            gets(supplier_name);

            cout << "\nEnter your last name: ";
            gets(supplier_sname);

            cout << "\nEnter your Username: ";
            gets(supplier_username);

            cout << "\nEnter your password: ";
            gets(supplier_password);
            cout << endl;
        }
        void supplier_login()
        {
            cout << "Enter your Username: ";
            gets(supplier_username);

            cout << "\nEnter your password: ";
            gets(supplier_password);
            cout << endl;
        }
        void supplier_menu()
        {
            char x;
            do{
                cout << "Welcome To Supplier Area. \nDo you have an Existing account?\n" <<
            "[1]Yes [2]No (Press 0 to exit)";
                cin >> x;
                if (x == '1')
                {
                    clear();
                    supplier_login();
                }
                else if (x == '2')
                {
                    clear();
                    supplier_signup();
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
        
     void supplier_product_input()
        {
            cout << "Welcome To Supply Area. \nEnter Prouct name\n";
            gets(product_name);
            cout << "Enter Product Cost";
            cin >> product_cost;
            cout << "Enter Product Color\n";
            gets(product_color);
            cout << "Enter Product Color Symbol in [color] form\n";
            gets(product_color);
    }
    void supplier_file_input(){
        fstream supply_file;
        supply_file.open("supplier.txt",ios::app|ios::binary);

    }

};

void menu(){
    char a;
    //Do menu starts
    do{

        cout << "Welcome to Estore where you can buy or supply Electronic Products!\n"
             << "Are you a [1] Supplier or [2] Customer ? (Enter the character corresponding to the action. Press [0] to Exit)\n";
        cin >> a;
        if (a == '1')
        {
            clear();
            cout << "GTFO broke";
    }
    else if (a == '2')
    {
        clear();
        cout << "hi broke" ;
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

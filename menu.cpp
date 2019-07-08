#include <fstream>

class student{
    char name[50];
    int rno;
    int marks;
    int clss;
    public:
    void create(){
        fstream f;
        student s;
        cin >> s.name >> s.rno >> s.marks >> s.clss;
        f.open("file.txt",ios::binary|ios::out);
        f.write((char*)&s,sizeof(s));
        f.close();
    }
    void append()
    {
        fstream f;
        student s;
        cin >> s.name >> s.rno >> s.marks >> s.clss;
        f.open("file.txt", ios::binary | ios::app);
        f.write((char *)&s, sizeof(s));
        f.close();
    }

    void display()
    {
        fstream f;
        student s;
        f.open("file.txt", ios::binary | ios::in);
        f.read((char *)&s, sizeof(s));
        cout << name << rno << marks << clss;
        f.close();
    }
    int getsno(){
        return rno;
    }
    void dispSpec(int rno){
        fstream f;
        student s;
        int found =0;
        f.open("file.txt", ios::binary | ios::in);
        while (!found == 0 && f.read((char *)&s, sizeof(s)))
        {
            if(s.getsno == rno)
            cout << name << rno << marks << clss;
            else
            cout<< "No record";
            }

        f.close();
    }
    void dispRange()
    {
        cout << name << rno << marks << clss;
    }
    void Delete(int n){
        student s;
        fstream f,g;
        f.open("files.txt",ios::in);
        f.open("file.txt", ios::out);
        while(f.read((char*)&s, sizeof(s))){
            if(s.getsno == n){
                continue();
            }
            else
                g.write((char *)&s, sizeof(s));
        }
    }
    void menu(){
        do{
            int a;
            cout << "Do you want to 1)Create 2)Update 3)Display All 4) Display specific 5) Display range 6)Delete Records 7)Exit\n";
            cin >> a;
            student s;
        switch (a)
        {
        case 1:
            s.input(); break;
        case 2:
            s.append(); break;
        case 3:
            s.display(); break;
        case 4:
        cout << "enter rno to display"; int x; cin >> x;
            s.displaySpec(x); break;
        case 5:
            s.displayRange(); break;
        case 6:
            cout << "enter rno to delete";int x; cin >> x;
            s.Delete(x); break;

        default: break;
        }
        }while(a!=7);
    }
};

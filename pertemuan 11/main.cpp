#include <iostream>

using namespace std;

int main()
{
    int var1=3;
    int var2=24;
    int *p1=&var1;
    int *p2=&var2;
    *p1=7;
    *p2=*p1;
    string var3="hello";
    string *ps=&var3;
    float var4=0.6;
    float *pf=&var4;
    char var5=2;
    char *pc=&var5;

    cout << "Address of Var1 " << &var1 << endl;
    cout << "Adreess saved on p1 " << p1 << endl;//adres var1
    cout << "Adreess saved on p2 " << p2 << endl;
    cout << "adress of p1= "<<&p1 <<endl;//adres p1
    cout << "adress of p2= " <<&p2 <<endl;
    cout << "value of p1= " <<*p1 << endl;//nilai
    cout << "value of p2= " <<*p2 <<endl;
    cout << "---------------------"<<endl;
    cout << "Adreess saved on ps " << ps << endl;
    cout << "---------------------"<<endl;
    cout << "Adreess saved on pf " << pf << endl;
    cout << "---------------------"<<endl;
    cout << "Adreess saved on pc " << pc << endl;
    cout << "---------------------"<<endl;
    char c=0;
    char *p=&c;
    printf("size=%d",sizeof(p));
    return 0;
}

#include <iostream>

using namespace std;
//interger = 4 byte
int main()
{
    int a[6]= {10,20,30,40,50,60};
    int *p=a;//= &a
    int **p2=&p;
    cout << a << endl;//30
    cout << &p << endl;//28
    cout << &p2 << endl;//20
    cout << *p << endl;
    cout << p2 <<endl;
    cout << *p2 <<endl;
    cout << *(*p2) <<endl;
    //cout <<  <<endl;
    //cout <<  <<endl;
    //cout <<  <<endl;
    //cout <<  <<endl;

    //hackerrank
    //input n=687
    //out n=21
    string n,a,b;
    n=687;
    a=n%10;
    b=n%100;
    cout << a <<endl;
    return 0;
}

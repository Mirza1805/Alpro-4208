/*
#include <iostream>

using namespace std;
int maxN(int a, int b);//deklarasi

int main()
{
    cout << maxN(4,5) << endl;
    return 0;
}
int maxN(int a, int b){
    int temp;//definisi
    if(a>b){
        temp=a;
    }else{
        temp=b;
    }
    return temp;
}
*/
#include<iostream>
using namespace std;
int maxArray(int a[]);

int main(){
int a[]={3,9,7,3,12};
cout << maxArray(a);
return 0;
}
int maxArray(int a[]){
    int temp=0;
    for(int i=0;i<5;i++){
        if (a[i]>temp)
            temp=a[i];
    }
    return temp;
}

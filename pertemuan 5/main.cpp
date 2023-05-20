#include <iostream>

using namespace std;

void swapN(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int* sortA(int a[],int n){
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if (a[i]>a[j]){
                swapN(a[i],a[j]);
        }
    }
}
return a;
}
int main()
{
    int a[]={3,4,1,2},n=sizeof(a)/sizeof(int);
    int* b =sortA(a,n);
    for (int i=0;i<n;i++){
        cout << b[i];
    }
    return 0;
}

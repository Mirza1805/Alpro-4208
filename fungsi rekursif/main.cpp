#include <iostream>

using namespace std;

int penjumlahan (int a,int b){
    if (b==0){
        return a+b;
    }
    else{
        return a+(penjumlahan(1,(b-1)));
    }
}
int pengurangan (int a,int b){
    if (b==0){
        return a-b;
    }
    else{
        return a-(penjumlahan(1,(b-1)));
    }
}
int perkalian(int a, int b){
    if (b==0){
        return a*b;
    }
    else
        return a+(perkalian(a,(b-1)));
}
int pembagian(int a,int b){
   if(a<b)
        return 0;
    else
        return 1+pembagian(a-b, b);
}
int pangkat (int a,int b){
    if (b==0)
        return 1;
    else
        return a*(pangkat(a,(b-1)));
}
int main()
{
    cout << penjumlahan(2,3)<<endl;
    cout << pengurangan(9,5)<<endl;
    cout << perkalian(2,10)<<endl;
    cout << pembagian(20,10)<<endl;
    cout << pangkat(9,2)<<endl;
    return 0;
}

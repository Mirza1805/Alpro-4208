#include <iostream>
/*
Muhammad Mirza Rafi'uddin - A11.2022.14344
TUGAS 1 - Alpro
*/
using namespace std;
int tambah(int a,int b){
int hasil;
hasil = a+b;
return hasil;
}

int kurang(int x, int y){
int hasil;
hasil=x-y;
return hasil;
}

int angkabulat(int aray[4]){
int hasil;
for (int p=0;p<4;p++){
    hasil+=aray[p];
}
return hasil;
}

int angkarata(int aray[4]){
int hasil,rata;
for (int p=0;p<4;p++){
    hasil+=aray[p];
    rata=hasil/4;
}
return rata;
}

int main()
{
    int j,aray[4]={2,4,4,2};
    cout << "hasil tambah = "<< tambah(4,7) << endl;
    cout << "hasil kurang = "<< kurang(7,4) << endl;
    cout << angkabulat(aray) << endl;
    cout << angkarata(aray) << endl;

    cout << "masukan 4 bilangan aray" <<endl;
    for (j=0;j<4;j++){
        cout << "masukan bilangan ke " << j+1 <<endl;
        cin >> aray[j];
    }
    cout << angkabulat(aray) << endl;
    cout << angkarata(aray) << endl;
    return 0;
}

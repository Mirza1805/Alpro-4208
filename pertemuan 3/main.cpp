#include <iostream>

using namespace std;

int jumlah (/*formal*/int a, int b){ //deklarasi
    int x;                           //definisi
    x=a+b;
    return x;
}
int kali (int c,int d){
    return c *d;
}
/*prosedur pakai void*/
void procJumlah(int a, int b){
    cout << a + b << endl;
}

void cetakGanjil(int x);
//memisah deklarasi dengan definisi

bool isGenap(int y){
    return y%2==0;
}

void foo(){
    int f;
    f++;
    cout << f<<endl;
}

int main()
{
    foo();
    foo();
    foo();
    int bil1=5, bil2=7, bil3, bil4;
    cout << "Masukan bilangan pertama = ";
    cin >> bil3;
    cout << endl;
    cout << "Masukan bilangan kedua = ";
    cin >> bil4;
    cout << endl;
    cout << jumlah(/*aktual*/bil3,bil4) << endl ;
    cout << kali(bil3,bil4) << endl ;
    cout << jumlah(bil1,bil2) << endl;

    procJumlah(5,7);
    /*
    kalau prosedur ga perlu cout lagi
    */
    cetakGanjil(23829);
    cout << "apakah 5 genap? " << isGenap(5)<<endl;
    return 0;
}

void cetakGanjil(int x){
    if (x%2==1){
        cout << "Ganjil" << endl;
    }
    else {
        cout << "Genap" << endl;
    }
}

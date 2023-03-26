#include <iostream>
/*
Muhammad Mirza Rafi'uddin - A11.2022.14344
A11.4208
*/
using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int f);
int sumEven(int a[]);
int sumOdd(int a[]);
int maxN(int a, int b);
int minN(int a, int b);
int MaxArray(int a[], int b);
int MinArray(int a[], int b);
bool isFound(int x, int a[], int b);
void swapN(int a, int b);

int main()
{
    int k, a[200], total, ang1, ang2,ang3,ang4;
    cout << "Masukan bilangan yang ingin di cek = ";
    cin >> ang1;
    cout << "Masukan bilagan sebagai faktor dari bilangan sebelumnya = ";
    cin >> k;
    cout << "Angka " << ang1 <<" tersebut genap? " << isEven(ang1) <<endl;
    cout << "Angka " << ang1 <<" tersebut ganjil? " << isOdd(ang1) <<endl;
    cout << "Angka " << ang1 <<" tersebut faktor dari "<< k <<"? " << isFactor(ang1, k) <<endl;

    cout << "\nMasukan angka untuk dibandingkan dengan angka " << ang1 <<" = ";
    cin>>ang2;
    cout<<"Angka terbesar adalah "<< maxN(ang1, ang2)<<endl;
    cout<<"Angka terkecil adalah "<< minN(ang1, ang2)<<endl;

    cout << "\nmasukan 5 bilangan array : "<<endl;
    for(int i = 0; i < 5; i++){
        cout << "Masukkan angka " << i+1 << " pada array = ";
        cin >> a[i];
    }

    cout << "\nApakah jumlah dari array tersebut genap? " << sumEven(a)<< endl;
    cout << "Apakah jumlah dari array tersebut ganjil? " << sumOdd(a)<< endl;
    cout << "Bilangan terbesar pada array tersebut adalah " << MaxArray(a, 5)<< endl;
    cout << "Bilangan terkecil pada array tersebut adalah " << MinArray(a, 5)<< endl;
    cout << "Apakah bilangan " << ang1 <<" ada pada deret? "<<isFound(ang1, a, 5)<<endl;

    cout << "\nmasukan bilangan 1 yang ingin ditukar= ";
    cin >> ang3;
     cout << "masukan bilangan 2 yang ingin ditukar= ";
    cin >> ang4;
    cout << "sebelum ditukar bilangan 1 = " << ang3 << " dan bilangan 2 = " << ang4 <<endl;
    swapN(ang3,ang4);

    return 0;
}

bool isEven(int x){
    return x%2==0;;

}

bool isOdd(int x){
    return x%2==1;
}

bool isFactor(int x, int f){
    return x%f == 0;
}

int sumEven(int a[]){
    int tambah = 0;
    for(int i = 0; i < 5; i++){
        tambah += a[i];
    }
    return tambah%2 == 0;
}

int sumOdd(int a[]){
    int tambah = 0;
    for(int i = 0; i < 5; i++){
            tambah += a[i];
        }
        return tambah%2 == 1;
    }

int maxN(int a, int b){
    int temp;
    if(a>b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}

int minN(int a, int b){
    int temp;
    if(a<b){
        temp = a;
    }else{
        temp = b;
    }
    return temp;
}

int MaxArray(int a[], int b){
    int temp = 0;
    for(int i = 0; i < b; i++){
        if(a[i]>temp){
            temp = a[i];
            }
        }
        return temp;
}

int MinArray(int a[], int b){
    int temp = 100000000000000000;
    for(int i = 0; i < b; i++){
        if(a[i]<temp){
            temp = a[i];
            }
        }
        return temp;
}
bool isFound(int x, int a[], int b){
    int found;
    for(int i = 0; i < b; i++){
        if(a[i] == x){
            found = 1;
        }
    }
    return found == 1;
}
void swapN(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\nsetelah ditukar bilangan 1 = " << a << endl;
    cout << "bilangan 2 = " << b << endl;
}

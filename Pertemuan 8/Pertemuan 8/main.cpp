#include <iostream>
/*
nama    : Muhammad Mirza Rafi'uddin
kelas   : 4208
NIM     : A11.2022.14344
*/
using namespace std;
//no 1
bool isGanjil(int bil){
    if (bil%2==1){
        return 1;
    }
    return 0;
}
void cekGenap(int arr[],int size){
    int genap=1000;
    int index=0;
    for (int step=0;step<size;step++){
        if(!isGanjil(arr[step])){
            if(arr[step]<genap){
                genap=arr[step];
                index=step;
            }
        }
    }
    cout << "Angka genap terkecil dalam array tersebut adalah angka = " << genap << " dengan index ke = "<< index;
}

//no 2
void selectionSort(int arr[],int size){
for (int step=0;step<size-1;step++){
    int min_ind=step;
    for (int i=step+1;i<size;i++){
        if (arr[min_ind]<arr[i]){
            min_ind=i;
        }
    }
    swap(arr[min_ind],arr[step]);
}
}
void bubleSort(int arr[],int size){
    for (int step=0;step<size-1;step++){
        for (int i=0;i<size-step-1;i++){
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}


void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main()
{
    cout << "soal no 1" << endl;
    int urutan[100];
    int sise;
    int ganjil;
    cout << "masukan jumlah array = ";
    cin >> sise;
    for (int j=0;j<sise;j++){
        cout << "masukan bilangan ke " << j+1 << "=";
        cin >> urutan[j];
    }
    cekGenap(urutan,sise);
    cout<<endl;
    cout<<endl;


    cout << "soal no 2" << endl;
    //no 2
    int data[]={2,6,4,10};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    cout << "Sorting menggunakan selection : ";
    printArray(data,size);
    bubleSort(data,size);
    cout << "Sorting menggunakan buble : ";
    printArray(data,size);
    return 0;
}

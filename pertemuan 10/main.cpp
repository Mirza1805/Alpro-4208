#include <iostream>
/*
banyak sorting rec
pointer dan memory
tipe data baru
perhitungan efisensi
*/
using namespace std;
int minValRec(int A[],int n){
    if (n==1)
        return A[0];
    return min (A[n-1],minValRec(A,n-1));
}
int maxValRec(int A[], int n)
{
    if (n==1)
        return A[0];
    return max(A[n-1],maxValRec(A,n-1));
}
int minAB(int a, int b)
{
    return a<b?a:b;
}
int maxAB(int a,int b)
{
    return a>b?a:b;
}
void bublesort(int arr[],int n){
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap (arr[j],arr[j+1]);
        }
}
void bublesortrec(int arr[],int n){
    if (n==1)
        return;
    int count =0;
    for (int i=0;i<n-1;i++)
    if(arr[i]>arr[i+1]){
        swap (arr[i],arr[i+1]);
        count++;
    }
    if(count==0)
        return;
    bublesortrec(arr,n-1);
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout << arr[i]<<"";
    }
    cout <<endl;
}
{
    //int n=sizeof(arr)/sizeof(arr[o]);
    int a[300],n;
    cout << "Masukan panjang array = ";
    cin >> n;
    for (int i=0;i<n;i++){
        cout << "Masukan array ke - " << i+1 << " = ";
        cin >> a[i];
    }
    bublesortrec(a,n);
    printArray(a.n);
    cout << minValRec(a,n) << endl;
    cout << maxValRec(a,n) << endl;
    return 0;
}

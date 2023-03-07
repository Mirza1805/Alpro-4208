#include <iostream>

using namespace std;

int main()
{
    /*string nim;
    cout << "Masukan 5 digit terakhir NIM = ";
    cin >> nim;
    cout << "NIM : " << nim <<endl;
    */

    //kelipatan 2
    int bil;
    for (int i=50;i>=1;i--){
        if (i%2==0){
            cout << i << "  ";
            }
    }
    cout <<endl;
    cout <<endl;
    //kelipatan 4

    for (int i=50;i>=1;i--){
        if (i%4==0){
            cout << i << "  ";
            }
    }
    cout <<endl;
    cout <<endl;
    return 0;
}

#include <iostream>
using namespace std;

enum warna{merah = 10,kuning = 100,hijau = 1000,biru = 10000};
warna y;

int main()
{
    y = warna::merah;
    y = hijau;
    cout << y << endl;
    return 0;
}

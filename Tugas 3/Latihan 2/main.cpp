#include <iostream>
/*
Latihan 2
*/
using namespace std;

struct sepeda{
    int tahun;
    string merk,type,harga;
};
struct sepeda sp;

int main()
{
    sp. tahun=2013;
    sp. harga="2.000.000";
    sp. merk="polygon";
    sp. type="sepeda gunung";

    cout << "Merk: " << sp.merk << endl;
    cout << "Type: " << sp.type << endl;
    cout << "Tahun: " << sp.tahun << endl;
    cout << "Harga: " << sp.harga << endl;
    return 0;
}

#include <iostream>
/*
Latihan 1
*/
using namespace std;

struct hitung{
    int panjang,lebar,r,t;
    float phi;
    int hitungLuaspp(){
        return panjang * lebar;
    }
    int hitungLuasll(){
        return 22.0 / 7.0 * r * r;
    }
    int hitungVolvk(){
        return 1.0/3.0 * phi * r * r * t;
    }
    int hitungVolvb(){
        return 4.0/3.0 * phi * r * r * r;
    }
};
struct hitung ht;

int main()
{
    ht. panjang=12.0;
    ht. lebar=9.0;
    ht. phi=22.0/7.0;
    ht. r=14.0;
    ht. t=14.0;

    int luaspersegipanjang=ht.hitungLuaspp();
    cout << "Luas Persegi Panjang = " << luaspersegipanjang<< endl;

    int luaslingkaran=ht.hitungLuasll();
    cout << "Luas Persegi Panjang = " << luaslingkaran<< endl;

    int VolumeKerucut=ht.hitungVolvk();
    cout << "Luas Persegi Panjang = " << VolumeKerucut << endl;

    int VolumeBola=ht.hitungVolvb();
    cout << "Luas Persegi Panjang = " << VolumeBola << endl;

    return 0;
}

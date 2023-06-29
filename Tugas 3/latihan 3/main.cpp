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
typedef struct hitung ht;
ht luas;
ht volume;

int main()
{
    luas. panjang=12.0;
    luas. lebar=9.0;
    volume. phi=22.0/7.0;
    volume. r=14.0;
    volume. t=14.0;

    int luaspersegipanjang=luas.hitungLuaspp();
    cout << "Luas Persegi Panjang = " << luaspersegipanjang<< endl;

    int luaslingkaran=volume.hitungLuasll();
    cout << "Luas Persegi Panjang = " << luaslingkaran<< endl;

    int VolumeKerucut=volume.hitungVolvk();
    cout << "Luas Persegi Panjang = " << VolumeKerucut << endl;

    int VolumeBola=volume.hitungVolvb();
    cout << "Luas Persegi Panjang = " << VolumeBola << endl;

    return 0;
}
/*
struct hitung{
	int x,y;
};
typedef struct hitung operasi;
operasi Jumlah;
operasi Kali;*/

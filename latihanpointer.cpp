#include <iostream>
using namespace std;

struct tgl{
    string hari;
    int tanggal;
    string bulan;
    int tahun;
};

struct tglpointer{
    string* hari_ptr;
    int* tanggal_ptr;
    string* bulan_ptr;
    int* tahun_ptr;
};

int main(){
    tgl tgl1, tgl2, tgl3;
    tgl1.hari = "Senin";
    tgl1.tanggal = 1;
    tgl1.bulan = "Januari";
    tgl1.tahun = 2020;

    tgl2 = {"Selasa", 2, "Februari", 2021};
    tgl3 = {"Rabu", 3, "Maret", 2022};

    tgl kelas[4];
    kelas[0] = tgl1;
    kelas[1] = tgl2;
    kelas[2] = tgl3;

    tglpointer ptrtgl;
    ptrtgl.hari_ptr = &kelas[0].hari;
    ptrtgl.tanggal_ptr = &kelas[1].tanggal;
    ptrtgl.bulan_ptr = &kelas[0].bulan;
    ptrtgl.tahun_ptr = &kelas[2].tahun;

    // menampilkan data
    for (int i = 0; i < 3; i++){
        cout << "Hari: " << kelas[i].hari;
        cout << " Tanggal: " << kelas[i].tanggal;
        cout << " Bulan: " << kelas[i].bulan;
        cout << " Tahun: " << kelas[i].tahun << endl;
    }
    
    // cari data melalu pointer
    cout << "Hari: " << *ptrtgl.hari_ptr << endl;
    cout << "Tanggal: " << *ptrtgl.tanggal_ptr << endl;
    cout << "Bulan: " << *ptrtgl.bulan_ptr << endl;
    cout << "Tahun: " << *ptrtgl.tahun_ptr << endl;

    // tgl tanggal[2];
    // tanggal[0].hari = "Senin";
    // tanggal[1].bulan = "Agustus";
    // tanggal[2].tahun = 1945;


    // cout << tanggal[0].hari << endl;
    // cout << tanggal[1].bulan << endl;
    // cout << tanggal[2].tahun << endl;
}
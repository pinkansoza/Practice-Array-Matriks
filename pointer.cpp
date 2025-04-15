#include <iostream>
#include <string>
using namespace std;

// 1. Membuat tipe data struktur yang terdiri dari 4 tipe data
struct Mahasiswa {
    int id;
    string nama;
    float nilai;
    char grade;
};

// 5. Membuat tipe data struktur dengan menggunakan pointer
struct MahasiswaPointer {
    int* id_ptr;
    string* nama_ptr;
    float* nilai_ptr;
    char* grade_ptr;
};

int main() {
    // 2. Mengisi beberapa data menggunakan nama variabel yang berbeda
    Mahasiswa mhs1;
    mhs1.id = 101;
    mhs1.nama = "Andi";
    mhs1.nilai = 85.5f;
    mhs1.grade = 'A';
    
    Mahasiswa mhs2 = {102, "Budi", 76.0f, 'B'};
    
    // 3. Membuat array dengan tipe data struktur tersebut
    Mahasiswa kelas[5];
    
    // 4. Mengisi beberapa data pada array tersebut
    kelas[0] = mhs1;
    kelas[1] = mhs2;
    kelas[2] = {103, "Citra", 92.5f, 'A'};
    
    // Mengisi data ke array index 3 dan 4
    kelas[3].id = 104;
    kelas[3].nama = "Dewi";
    kelas[3].nilai = 68.0f;
    kelas[3].grade = 'C';
    
    kelas[4] = {105, "Eka", 55.5f, 'D'};
    
    // 5. Menggunakan tipe data struktur dengan pointer
    MahasiswaPointer ptrMhs;
    ptrMhs.id_ptr = &kelas[0].id;
    ptrMhs.nama_ptr = &kelas[0].nama;
    ptrMhs.nilai_ptr = &kelas[0].nilai;
    ptrMhs.grade_ptr = &kelas[0].grade;
    
    // Menampilkan data
    cout << "Data Mahasiswa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "ID: " << kelas[i].id 
             << ", Nama: " << kelas[i].nama 
             << ", Nilai: " << kelas[i].nilai 
             << ", Grade: " << kelas[i].grade << endl;
    }
    
    cout << "\nData melalui pointer:\n";
    cout << "ID: " << *ptrMhs.id_ptr 
         << ", Nama: " << *ptrMhs.nama_ptr 
         << ", Nilai: " << *ptrMhs.nilai_ptr 
         << ", Grade: " << *ptrMhs.grade_ptr << endl;
    
    return 0;
}
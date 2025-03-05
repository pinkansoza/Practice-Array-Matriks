#include <iostream>
using namespace std;

void tambahElemen(int*& array, int& panjang, int elemenBaru) {
    // Membuat array baru dengan panjang lebih besar
    int* arrayBaru = new int[panjang + 1];

    // Menyalin elemen dari array lama ke array baru
    for (int i = 0; i < panjang; ++i) {
        arrayBaru[i] = array[i];
    }

    // Menambahkan elemen baru ke array baru
    arrayBaru[panjang] = elemenBaru;

    // Menghapus array lama
    delete[] array;

    // Mengupdate pointer array dan panjang
    array = arrayBaru;
    ++panjang;
}

void hapusElemen(int*& array, int& panjang, int indexUntukDihapus) {
    // Memeriksa apakah indeks valid
    if (indexUntukDihapus < 0 || indexUntukDihapus >= panjang) {
        std::cout << "Indeks tidak valid!" << std::endl;
        return; // disini ngecek dulu indexnya apakah ada di dalem array itu
    }

    // Menggeser elemen-elemen ke kiri
    for (int i = indexUntukDihapus; i < panjang - 1; ++i) {
        array[i] = array[i + 1]; 
    }

    // Mengurangi ukuran array
    --panjang; 
}

void tambahElementMatriks(int**& matriks, int& baris, int& kolom, int barisIdx, int kolomIdx, int value) {
    //memeriksa apakah matriks dalam bentuk nullptr
    if (matriks == nullptr) {
        //memberikan nilai default berupa 0 apabila matriks dalam bentuk nullptr
        matriks = new int*[baris];
        for (int i = 0; i < baris; ++i) {
            matriks[i] = new int[kolom]();
        }
    }

    //mengecek apakah posisi yang dituju ada pada besar ukuran matriks
    if (barisIdx >= baris || kolomIdx >= kolom || barisIdx < 0 || kolomIdx < 0) {
        std::cout << "Indes tidak valid!" << std::endl;
        return;
    }

    //menambahkan nilai pada index yang dituju
    matriks[barisIdx][kolomIdx] = value;
}

void tambahElemenTensor(int***& tensor, int& x, int& y, int& z, int xIdx, int yIdx, int zIdx, int elemenBaru) {
    if (tensor == nullptr) {
        //menyiapkan array
        tensor = new int**[x];
        for (int i = 0; i < x; ++i) {
            tensor[i] = new int*[y];
            for (int j = 0; j < y; ++j) {
                tensor[i][j] = new int[z];
            }
        }
        //memberikan nilai default berupa 0
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                for (int k = 0; k < z; ++k) {
                    tensor[i][j][k] = 0;
                }
            }
        }
    }
    //mengecek apakah posisi yang dituju ada pada besar ukuran matriks
    if (xIdx < 0 || xIdx >= x || yIdx < 0 || yIdx >= y || zIdx < 0 || zIdx >= z) {
        cout << "Index tidak valid!" << endl;
        return;
    }

    //menambahkan nilai pada index yang dituju
    tensor[xIdx][yIdx][zIdx] = elemenBaru;
}


int main(){
// //array 1 dimensi

    //1. Membuat array 1 dimensi
    int panjang = 4;
    int* array = new int[panjang]{1, 2, 3, 4};
    // int sampai panjang bikin array baru karena tugasnya diminta untuk nambahin data makanya disini ada data, 
    //yg bintang ini fungsinya digunakan untuk tambah elemen dan hapus elemen

    //2. Mengosongkan array
    delete[] array; // digunakan untuk menghapus memori, tpi pake kotak ini yg berbentuk array
    
    //3. Mengisi array dengan beberapa data
    array = nullptr;//karena sebelumnya sudah kosong, baris ini memberikan set baru untuk alamt memori nantinya
    // alamat array yg disiapkan tdi dihapus, jadi array tdi udah ngga punya alamat khusus
    int ukuran = 0;//baris ini digunakan untuk set ukuran array sekaligus index untuk manipulasi elemen di dalam array, 
                    //ini nantinya digunakan untuk membuat array baru di fungsi tambahElemen

    int tmparray[panjang] = {5, 6, 7, 8}; //penampung data sementara
        //Mengganti setiap elemen pada array dengan elemen pada array penampung
    for (int i = 0; i < panjang; i++) {
        tambahElemen(array, ukuran, tmparray[i]); // ini pake loop biar ngga manggil fungsi ini sebanyak 4 kali
    }
    
    //4. Menampilkan semua data pada array
    cout << "Array 1D: ";
    for (int i = 0; i < ukuran; i++) {
        cout << array[i] << " "; // mengakses semua index lalu menghasilkan keluaran
    }
    cout << endl;

    //5. Memanggil salah data pada array
    cout << "Data pada index ke 2: " << array[2];
    cout << endl;

    //6. Menghapus salah satu data pada array (mengganti salah satu elemen dengan angka 0)
    hapusElemen(array, ukuran, 2); // menggeser 1 elemen kedepan sehingga menghilangkan elemen yg ingin dihilangkan
        //Menampilkan array setelah salah satu data dihapus
    cout << "Array 1D setelah salah satu data dihapus: ";
    for (int i = 0; i < ukuran; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

//array 2 dimensi, matriks
    //1. Membuat array 2 dimensi
    int baris = 2;
    int kolom = 2;

    int** matriks = new int*[baris];
    for(int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom];
    }

        //mengisi elemen pada array
    matriks[0][0] = 1;
    matriks[0][1] = 2;

    matriks[1][0] = 3;
    matriks[1][1] = 4;


    //2. Mengosongkan array (mengganti setiap elemen dengan angka 0)
    for (int i = 0; i < baris; i++) {
        delete[] matriks[i];  //menghapus setiap baris
    }
    delete[] matriks; //menghapus array utama

    //3. Mengisi array dengan beberapa data
    matriks = nullptr;
    tambahElementMatriks(matriks, baris, kolom, 0, 1, 99);

    //4. Menampilkan semua data pada array
    cout << "Array 2D: " << endl;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << matriks[i][j] << " ";
        }
    cout << endl;
    }

    //5. Memanggil salah data pada array
    cout << "Data pada index ke [0][1]: " << matriks[0][1];
    cout << endl;

    //6. Menghapus salah satu data pada array (mengganti salah satu elemen dengan angka 0 yang menjadi nilai default)
    matriks[0][1] = 0;
        //Menampilkan array setelah salah satu data dihapus
    cout << "Array 2D setelah salah satu data dihapus: " << endl;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << matriks[i][j] << " ";
        }
    cout << endl;
    }
    cout << endl;
    cout << endl;

//array 3 dimensi, tensor
    //1. Membuat array 3 dimensi
    int x = 2;
    int y = 2;
    int z = 2;

    int*** tensor = new int**[x];
    for (int i = 0; i < x; ++i) {
        tensor[i] = new int*[y];
        for (int j = 0; j < y; ++j) {
            tensor[i][j] = new int[z];
        }
    }
        //mengisi elemen pada array
    tensor[0][0][0] = 1;
    tensor[0][0][1] = 2;

    tensor[0][1][0] = 3;
    tensor[0][1][1] = 4;

    tensor[1][0][0] = 5;
    tensor[1][0][1] = 6;

    tensor[1][1][0] = 7;
    tensor[1][1][1] = 8;


    //2. Mengosongkan array (mengganti setiap elemen dengan angka 0)
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            delete[] tensor[i][j];
        }
        delete[] tensor[i];
    }
    delete[] tensor;
    
    //3. Mengisi array dengan beberapa data
    tensor = nullptr;
    tambahElemenTensor(tensor , x, y, z, 0, 1, 0, 99);

    //4. Menampilkan semua data pada array
    cout << "Array 3D: " << endl;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                cout << tensor[i][j][k] << " ";
            }
            cout << "|";
        }
        cout << endl;
    }

    //5. Memanggil salah data pada array
    cout << "Data pada index ke [0][1][0]: " << tensor[0][1][0];
    cout << endl;

    //6. Menghapus salah satu data pada array (mengganti salah satu elemen dengan angka 0 yang menjadi nilai default)
    tensor[0][1][0] = 0;
        //Menampilkan array setelah salah satu data dihapus
        cout << "Array 3D setelah salah satu data dihapus: " << endl;
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                for (int k = 0; k < z; k++){
                    cout << tensor[i][j][k] << " ";
                }
                cout << "|";
            }
            cout << endl;
        }

    return 0;
}
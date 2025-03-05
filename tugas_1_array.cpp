#include <iostream>
using namespace std;

int main(){
//array 1 dimensi

    //1. Membuat array 1 dimensi
    const int m = 4;
    int array[m] = {1, 2, 3, 4};

    //2. Mengosongkan array (mengganti setiap elemen dengan angka 0)
    for (int i = 0; i < m; i++) {
        array[i] = 0;
    }   
    
    //3. Mengisi array dengan beberapa data
    int tmparray[m] = {5, 6, 7, 8};
        //Mengganti setiap elemen pada array dengan elemen pada array penampung
    for (int i = 0; i < m; i++) {
        array[i] = tmparray[i];
    }
    
    //4. Menampilkan semua data pada array
    cout << "Array 1D: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    //5. Memanggil salah satu data pada array
    cout << "Data pada index ke 2: " << array[2];
    cout << endl;

    //6. Menghapus satu data pada array (mengganti salah satu elemen dengan angka 0)
    array[2] = 0;
        //Menampilkan array setelah salah satu data dihapus
        cout << "Array 1D setelah salah satu data dihapus: ";
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << endl;

//array 2 dimensi, matrix
    //1. Membuat array 2 dimensi
    const int baris = 2;
    const int kolom = 2;

    int matriks[baris][kolom] = {
        {1, 2},
        {3, 4},
    };

    //2. Mengosongkan array (mengganti setiap elemen dengan angka 0)
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            matriks[i][j] = 0;
        }
    }
    
    //3. Mengisi array dengan beberapa data
    int tmpmatriks[baris][kolom] = {
        {5, 6},
        {7, 8},
    };//penampung data sementara
        //Mengganti setiap elemen pada array dengan elemen pada array penampung
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            matriks[i][j] = tmpmatriks[i][j];
        }
    }

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

    //6. Menghapus salah satu data pada array (mengganti salah satu elemen dengan angka 0)
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

//array 3 dimensi, tensor
    //1. Membuat array 3 dimensi
    const int x = 2;
    const int y = 2;
    const int z = 2;

    int tensor[x][y][z] = {
        {
            {10, 11},
            {12, 13}
        },
        {
            {14, 15},
            {16, 17}
        }
    };

    //2. Mengosongkan array (mengganti setiap elemen dengan angka 0)
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                tensor[i][j][k] = 0;
            }
        }
    }

    //3. Mengisi array dengan beberapa data
    int tmptensor[x][y][z] = {
        {
            {2, 3},
            {4, 5}
        },
        {
            {6, 7},
            {8, 9}
        }
    };//penampung data sementara

    //Mengganti setiap elemen pada array dengan elemen pada array penampung
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                tensor[i][j][k] = tmptensor[i][j][k];
            }
        }
    }

    //4. Menampilkan semua data pada array
    cout << "Array 3D: " << endl;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k = 0; k < z; k++){
                cout << tensor[i][j][k] << " ";
            }
            cout << " | ";
        }
        cout << endl;
    }

    //5. Memanggil salah data pada array
    cout << "Data pada index ke [0][1][0]: " << tensor[0][1][0];
    cout << endl;

    //6. Menghapus salah satu data pada array (mengganti salah satu elemen dengan angka 0)
    tensor[0][1][0] = 0;
        //Menampilkan array setelah salah satu data dihapus
        cout << "Array 3D setelah salah satu data dihapus: " << endl;
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                for (int k = 0; k < z; k++){
                    cout << tensor[i][j][k] << " ";
                }
                cout << " | ";
            }
            cout << endl;
        }

    return 0;
}
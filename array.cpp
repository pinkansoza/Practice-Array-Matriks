#include <iostream>
using namespace std;

int main() {
    // 1D Array
    int arr1D[5] = {1, 2, 3, 4, 5};  // Membuat array 1 dimensi
    for (int i = 0; i < 5; i++) arr1D[i] = 0; // Mengosongkan array
    int arr1D_new[5] = {10, 20, 30, 40, 50};  // Mengisi kembali array
    cout << "1D Array: ";
    for (int i = 0; i < 5; i++) cout << arr1D_new[i] << " ";
    cout << endl;
    cout << "Data pada indeks 2: " << arr1D_new[2] << endl;  // Memanggil data pada indeks tertentu
    arr1D_new[1] = 0;  // Menghapus data dengan mengganti nilainya
    cout << "1D Array setelah penghapusan: ";
    for (int i = 0; i < 5; i++) cout << arr1D_new[i] << " ";
    cout << endl;

    // 2D Array
    int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  // Membuat array 2 dimensi
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr2D[i][j] = 0; // Mengosongkan array
    int arr2D_new[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};  // Mengisi kembali array
    cout << "\n2D Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr2D_new[i][j] << " ";
        cout << endl;
    }
    cout << "Data pada indeks [1][2]: " << arr2D_new[1][2] << endl;  // Memanggil data tertentu
    arr2D_new[1][1] = 0;  // Menghapus elemen dengan mengganti nilainya
    cout << "2D Array setelah penghapusan:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr2D_new[i][j] << " ";
        cout << endl;
    }

    // 3D Array
    int arr3D[2][2][2] = {{{1, 2}, {3, 4}}, 
                          {{5, 6}, {7, 8}}};  // Membuat array 3 dimensi
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                arr3D[i][j][k] = 0; // Mengosongkan array
    int arr3D_new[2][2][2] = {{{10, 20}, {30, 40}}, {{50, 60}, {70, 80}}};  // Mengisi kembali array
    cout << "\n3D Array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++)
                cout << arr3D_new[i][j][k] << " ";
            cout << " | ";
        }
        cout << endl;
    }
    cout << "Data pada indeks [1][0][1]: " << arr3D_new[1][0][1] << endl;  // Memanggil data tertentu
    arr3D_new[0][1][0] = 0;  // Menghapus elemen dengan mengganti nilainya
    cout << "3D Array setelah penghapusan:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++)
                cout << arr3D_new[i][j][k] << " ";
            cout << " | ";
        }
        cout << endl;
    }

    return 0;
}
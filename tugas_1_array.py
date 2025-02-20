# 1D Array
arr1D = [1, 2, 3, 4, 5]  # Membuat array 1 dimensi
arr1D.clear()  # Mengosongkan array
arr1D.extend([10, 20, 30, 40, 50])  # Mengisi kembali array
print("1D Array:", arr1D)  # Menampilkan semua data
print("Data pada indeks 2:", arr1D[2])  # Memanggil data pada indeks tertentu
del arr1D[1]  # Menghapus data pada indeks tertentu
print("1D Array setelah penghapusan:", arr1D)

# 2D Array
arr2D = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]  # Membuat array 2 dimensi
arr2D.clear()  # Mengosongkan array
arr2D.extend([[10, 20, 30], [40, 50, 60], [70, 80, 90]])  # Mengisi kembali array
print("\n2D Array:", arr2D)
print("Data pada indeks [1][2]:", arr2D[1][2])  # Memanggil data tertentu
del arr2D[1][1]  # Menghapus elemen tertentu
print("2D Array setelah penghapusan:", arr2D)

# 3D Array
arr3D = [[[1, 2], [3, 4]], [[5, 6], [7, 8]]]  # Membuat array 3 dimensi
arr3D.clear()  # Mengosongkan array
arr3D.extend([[[10, 20], [30, 40]], [[50, 60], [70, 80]]])  # Mengisi kembali array
print("\n3D Array:", arr3D)
print("Data pada indeks [1][0][1]:", arr3D[1][0][1])  # Memanggil data tertentu
del arr3D[0][1][0]  # Menghapus elemen tertentu
print("3D Array setelah penghapusan:", arr3D)
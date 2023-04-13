#include <iostream>

using namespace std;

// Deklarasi function dengan parameter
int tambah(int a, int b){
  return a + b;
}

// Prosedur dinamakan "tampilkan_nama"
void tampilkan_nama(string nama) {
	cout << "Nama saya adalah << nama << endl;
// prosedur hanya menampilkan pesan, tanpa mengembalikan nilai apa pun
}

int main() {

  int x = 5, y = 7, hasil;
  
  // Memanggil function tambah dan menyimpan hasilnya ke dalam variabel hasil 
  hasil = tambah(x, y);
  
  // Menampilkan hasil
  cout << "Hasil penjumlahan << x << " dan " << y << " adalah " << hasil << endl;
 
		
	// Memanggil Fungsi tampilkan_nama
	
	string nama;
	
	getline(cin, nama);
	
	cout << tampilkan_nama(nama);
	
  return 0;
}

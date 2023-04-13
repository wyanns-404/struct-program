// Contoh STRUCT

#include <iostream>

using namespace std;

struct Mahasiswa{
	string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
}

// Contoh CLASS dengan akses public

#include <iostream>

using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
	
		// dgn menggunakan method
		void perkenalan(){
			cout << "Nama : " << nama << endl;
			cout << "NPM : " << npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
	
	Mhs.perkenalan();
}
	
	
// Constructor
	
// Constructor tanpa parameter
#include <iostream>
	
using namespace std;
	
class Mahasiswa{
	public:
		Mahasiswa(){ // CONSTRUCTOR 
			cout<<"Hello World";
		}
};
	
int main(){
	Mahasiswa Mhs;
}
	
// Constructor dengan parameter
#include<iostream>
	
using namespace std;
	
class Mahasiswa{
	public:
		string nama, npm;
	
		Mahasiswa (string nama, string b){
			this->nama = nama;
			npm = b;
		}
};
	
int main(){
	Mahasiswa Mhs("Reza","2117");
	
	cout << "Nama : "  << Mhs.nama << endl;
	cout << "NPM : " << Mhs.npm;
}
	
	
	
// Setter dan Getter
	
// Setter contoh
#include<iostream>
	
using namespace std;
	
class Mahasiswa{
	private:
		string nama;
	public:
		void setNama(string nama){
			this->nama = nama;
		}
};

int main(){
	Mahasiswa Mhs;
	
	Mhs.setNama ("Reza")
}
	
// Getter Contoh
#include<iostream>

using namespace std;

class Mahasiswa{
	private:
		string nama;
	public:
		void setNama (string nama){
			this->nama = nama;
		}
		string getNama(){
			return nama;
		}
};
	
int main(){
	Mahasiswa Mhs;
	
	Mhs.setNama("Reza");
	cout<< Mhs.getNama();
}
	
	
// Contoh program luas dari persegi panjang
	
// dengan Setter dan Getter
#include<iostream>
using namespace std;
	
class PersegiPanjang{
	private:
		int panjang;
		int lebar;
	// Setter dan Getter
	public:
		void setPanjang(int panjang){
			this->panjang = panjang;
		}
		void setLebar(int lebar){
			this->lebar = lebar;
		}
		int getPanjang(){
			return panjang;
		}
		int getLebar(){
			return lebar;
		}
		int Luas(){
			return panjang * lebar;
		}
};
	
int main(){
	PersegiPanjang psg;
	
	psg.setLebar(10);
	psg.setPanjang(10);
	cout << "Panjang: " << psg.getPanjang() << endl;
	cout << "Lebar: " << psg.getLebar() << endl;
	cout << "Luas: " << psg.Luas();
}
	
// dengan Constructor
#include<iostream>
using namespace std;
	
class PersegiPanjang{
	private:
		int panjang;
		int lebar;
	// Setter dan Getter
	public:
		PersegiPanjang(int panjang, int lebar){
			this->panjang = panjang;
			this->lebar = lebar;
		}
		void setPanjang(int panjang){
			this->panjang = panjang
		}
		void setLebar(int lebar){
			this->lebar = lebar;
		}
		int getPanjang(){
			return panjang;
		}
		int getLebar(){
			return lebar;
		}
		int Luas(){
			return panjang * lebar;
		}
};
	
int main(){
	PersegiPanjang psg(10,10);
	cout << "Panjang: " << psg.getPanjang() << endl;
	cout << "Lebar: " << psg.getLebar() << endl;
	cout << "Luas: " << psg.Luas();
}
	
	

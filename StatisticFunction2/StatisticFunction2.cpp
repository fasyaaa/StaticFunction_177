#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private :
	static int nim;
public :
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNIM(int pNIM) { nim = pNIM; /*Definition function*/ }
	static int getNIM() { return nim; /*Definition Function*/ }

	mahasiswa(string pnama) : nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setNIM(9);								//Mengakses nim melalui static member function "setNIM"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahono");
}
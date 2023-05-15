#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public : 
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;										// penggunaan nim = 1 + nim, memakai 1 dulu baru ditambahkan dengan nilai nim
}

void mahasiswa::printAll() {
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Lia Kurnia");

	/*mhs1.nim = 20;*/				//bisa di atur jumlah nim di int main, di bawahnya akan menjadi 21 dikarenakan ++nim

	mahasiswa mhs2("Asroni");

	/*mhs2.nim = 30;*/				//di bawahnya akan menjadi 31 dikarenakan ++nim

	mahasiswa mhs3("Andi Kurniawan");

	/*mhs3.nim = 40;*/				//di bawahnya akan menjadi 41 dikarenakan ++nim

	mahasiswa mhs4("Joko Purbo");

	/*mhs4.nim = 50;*/				//di bawahnya akan menjadi 51 dikarenakan ++nim



	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	return 0;
}


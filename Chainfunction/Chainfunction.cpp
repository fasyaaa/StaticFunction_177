#include <iostream>
using namespace std;

class buku {
	string judul;
public :
	buku setJudul(string judul) {
		this->judul = judul;
		return *this;							//chain function
	}
	string getJudul() {
		return this->judul;
	}
} bukunya;



int main() {
	//bukunya.setJudul("Matematika");						//Chain function calls, pemanggilan dengan cara 1
	//cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul();		//Chain function calls, pemanggilan dengan cara 2
	return 0;
}
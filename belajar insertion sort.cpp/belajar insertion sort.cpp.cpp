#include <iostream>
using namespace std;

int arr[20];                              // Membuat Array dengan panjang data 20
int n;                                    // Membuat Variable inputan n

void input() {            // Procedure Input
	while (true)
	{
		cout << "Masukkan jumlah Data pada Array : "; // Membuat Inputan jumlahh element Array
		cin >> n;									  // Memanggil variable inputan n

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;                               // Membuat jarak per baris program
	cout << "=======================" << endl;  // Membuat tampilan susunan data element
}
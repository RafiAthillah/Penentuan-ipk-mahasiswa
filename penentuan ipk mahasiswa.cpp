#include <iostream>

using namespace std;

int main () {
	string nim;
	double ipk;
	cout <<"Penentuan Predikat Ipk Sesuai Predikat"<<endl<<endl;
	cout <<"masukkan nim kamu :";
	cin>>nim;
		cout <<endl;
	cout <<"Masukkan ipk kamu :";
	cin>>ipk;
	cout <<endl<<endl;
	if (ipk >= 3.5) {
        cout << "Selamat nim "<<nim<<" Anda mendapatkan predikat Cum Laude." << endl;
    } else if (ipk >= 3.0) {
        cout << "Bagus nim "<<nim<<"  Anda termasuk predikat  sangat Baik." << endl;
    } else if (ipk >= 2.0) {
        cout << "terimakasih nim "<<nim<<" anda termasuk predikat baik" << endl;
    } else {
        cout << "Maaf untuk nim "<<nim<<", IPK Anda di bawah kategori yang diharapkan " << endl;
    }
}
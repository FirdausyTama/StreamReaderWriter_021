#include <iostream>
#include <exception>
//untuk obyek exception yang akan di gunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;
int main()
{
	cout << "Awal program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemn ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exeption
		cout << e.what() << endl;
		/*akan di eksekusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "Baris program yang terakhir" << endl;
	/* penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesa;ahan*/
	return 0;
}
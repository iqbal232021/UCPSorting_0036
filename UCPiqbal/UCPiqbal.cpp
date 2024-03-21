#include <iostream>
using namespace std;

int iqbalMuhamadFurqon[36];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 36 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan  Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> iqbalMuhamadFurqon[i];
	}
}

void InsertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {

		temp = iqbalMuhamadFurqon[i];

		j = i - 1;

		while (j >= 0 && iqbalMuhamadFurqon[j] > temp)
		{
			iqbalMuhamadFurqon[j + 1] = iqbalMuhamadFurqon[j];
			j--;
		}
		iqbalMuhamadFurqon[j + 1] = temp;
	}
}

void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "====================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << iqbalMuhamadFurqon[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	InsertionSort();
	display();

	system("pause");
	return 0;
}


//1.Algoritma insertion sort ini menggap bahwa array telah terurut
// kemudian algoritma mengecak elemen yang tersisa satu persatu dan membandingkanya dengan yg terurut

//2.Algortma Selection Sort mencari bagian minumum dan maksimum dari yang belum terurut 
//setelah menemukan elemen kecil atau besar algoritma akan menukar elemen tersebut dengan elemen pertama 
// dari bagian elemen yang belum terurut

//3. Dalam algoritma cara menghitung langkah dapat di hitung dengan menghitung literasi atau menghitung perulangan menggunkan looping 
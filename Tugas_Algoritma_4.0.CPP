#include <stdio>
#include <conio>
#include <iostream>

int penjumlahan(int n, int b) {

	return (n+b);

}

int pengurangan(int n, int b) {

	return (n-b);

}

int perkalian(int n, int b) {

	return (n*b);

}

double pembagian(double n, double b) {

	if (b == 0) {

   	return 0;

   } else {

		return (n/b);

   }

}

void hitung() {

	int a, b, c;
   char pil;

	clrscr();

	cout << "Masukan Bilangan 1 = ";
   cin >> a;

   cout << "Masukan Bilangan 2 = ";
   cin >> b;

   cout << "Pilih Operator" << endl;
   cout << "1  Penjumlahan" << endl;
   cout << "2  Pegurangan" << endl;
	cout << "3  Perkalian" << endl;
   cout << "4  Pembagian" << endl;

   cout << "Pilih Operator = ";
   cin >> c;

   cout << "Haislnya = ";

   if (c == 1) {

   	cout << penjumlahan(a, b) << endl;

   } else if (c == 2) {

      cout << pengurangan(a, b) << endl;

   } else if (c == 3) {

      cout << perkalian(a, b) << endl;

   } else {

      cout << pembagian(a, b) << endl;

   }

   cout << "Apakah anda ingin menghitung lagi ? [y/n] ";
   cin >> pil;

   if (pil == 'y' || pil == 'Y'){

   	hitung();

   }

}

void main() {

	hitung();

   getch();

}
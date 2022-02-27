#include <stdio.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>

void main(){

	int nobeli, jmlbuku, hargaawal, hargatotal, diskpel, diskbeli, totalbayar;
   char nama[25], judul[50];

   diskpel = 0;
   diskbeli = 0;

   cout << "=========================" << endl;
   cout << "SELAMAT DATANG PENGUNJUNG" << endl;
   cout << "     TOKO BUKU ONYET" << endl;
   cout << "=========================" << endl;

   cout << "NO. PEMBELIAN     :";
   cin >> nobeli;

   cout << "NAMA PELANGGAN    :";
   cin >> nama;

   cout << "JUDUL BUKU        :";
   cin >> judul;

   cout << "JUMLAH BUKU       :";
   cin >> jmlbuku;

   cout << "HARGA BUKU       :";
   cin >> hargaawal;

   clrscr();

   hargatotal = hargaawal * jmlbuku;

   cout << "=========================" << endl;
   cout << "   TRANSAKSI PENJUALAN" << endl;
   cout << "     TOKO BUKU ONYET" << endl;
   cout << "=========================" << endl;

   cout << "NO. PEMBELIAN     : " << nobeli << endl;

   cout << "NAMA PELANGGAN    : " << nama << endl;

   cout << "JUDUL BUKU        : " << judul << endl;

   cout << "JUMLAH BUKU       : " << jmlbuku << endl;

   cout << "HARGA SBLM DISKON : " << hargatotal << endl;

   if (nobeli <= 50){

   	diskpel = hargatotal * 0.05;

      cout << "DISKON PLGN    5% : " << diskpel << endl;

   }

   if (hargatotal >= 100000){

   	diskbeli = hargatotal * 0.1;

      cout << "DISKON TRANS  10% : " << diskbeli << endl;

   }

	totalbayar = (hargatotal - diskpel) - diskbeli;

	cout << "TOTAL BAYAR       : " << totalbayar << endl;

   getch();

}

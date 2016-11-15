#include<iostream>
#include<string>
#include<conio>

int main() {

	string nomor, jenis, provider, nominal, bonus;
   char lagi = 'x';
   int jumlah, harga, total;

main_m:
   cout << " _______________________________________________ " << endl;
  	cout << "|             INPUT DATA PENJUALAN              |" << endl;
	cout << "|-----------------------------------------------|" << endl;
   cout << " Nomor HP \t\t\t: ";
   cin >> nomor;
   cout << " Jenis Pulsa [Voucher/Elektrik] : ";
   cin >> jenis;
   cout << " Provider [M3/XL/Simpati] \t: ";
   cin >> provider;
   cout << " Nominal [5Rb/10Rb/20Rb] \t: ";
   cin >> nominal;
   cout << " Jumlah Beli \t\t\t: ";
   cin >> jumlah;
   cout << "|-----------------------------------------------|" << endl;

   if(provider == "m3" || provider == "M3") {
	   if(nominal == "5rb" || nominal == "5Rb" || nominal == "5RB" || nominal == "5") {
			harga = 5500;
      }else if(nominal == "10rb" || nominal == "10Rb" || nominal == "10RB" || nominal == "10") {
      	harga = 10500;
      }else if(nominal == "20rb" || nominal == "20Rb" || nominal == "20RB" || nominal == "20") {
      	harga = 20500;
      }else{
      	harga = 0;
      }
   }else if(provider == "xl" || provider == "XL") {
	   if(nominal == "5rb" || nominal == "5Rb" || nominal == "5RB" || nominal == "5") {
			harga = 6000;
      }else if(nominal == "10rb" || nominal == "10Rb" || nominal == "10RB" || nominal == "10") {
      	harga = 11000;
      }else if(nominal == "20rb" || nominal == "20Rb" || nominal == "20RB" || nominal == "20") {
      	harga = 21000;
      }else{
      	harga = 0;
      }
   }else if(provider == "simpati" || provider == "Simpati") {
	   if(nominal == "5rb" || nominal == "5Rb" || nominal == "5RB" || nominal == "5") {
			harga = 7000;
      }else if(nominal == "10rb" || nominal == "10Rb" || nominal == "10RB" || nominal == "10") {
      	harga = 12000;
      }else if(nominal == "20rb" || nominal == "20Rb" || nominal == "20RB" || nominal == "20") {
      	harga = 22000;
      }else{
      	harga = 0;
      }
   }else{
     	harga = 0;
   }

   system("cls");
   cout << " _______________________________________________ " << endl;
   cout << "|                 HASIL PEMBELIAN               |" << endl;
   cout << "|-----------------------------------------------|" << endl;
   cout << " Nomor HP \t\t\t: " << nomor << endl;
   cout << " Jenis Pulsa \t\t\t: " << jenis << endl;
   cout << " Provider \t\t\t: " << provider << endl;
   cout << " Nominal \t\t\t: " << nominal << endl;
   cout << " Harga \t\t\t\t: " << harga << endl;
   cout << "|-----------------------------------------------|" << endl;
   total = harga * jumlah;
   cout << " Jumlah Beli \t\t\t: " << jumlah << endl;
   cout << " Total Bayar \t\t\t: " << total << endl;

   if(jumlah > 5 && jumlah < 10)
   	bonus = "Kartu Perdana";
   else if(jumlah > 10)
   	bonus = "Gantungan Kunci";
   else
   	bonus = "-";

   cout << " Bonus \t\t\t\t: " << bonus << endl;
   cout << "|-----------------------------------------------|" << endl;

   cout << " Input Data Lagi? [Y/T] \t: ";
   lagi = _getch();

   if (lagi == 'y' || lagi == 'Y') {
      system("cls");
   	goto main_m;
   }  else {
      cout << endl
           << "|-----------------------------------------------|" << endl;
      cout << "|                 Kana Febriyanti               |" << endl;
      cout << "|                  Terimakasih                  |" << endl;
      cout << "|-----------------------------------------------|" << endl;

      _getch();
    }

    return 0;
}

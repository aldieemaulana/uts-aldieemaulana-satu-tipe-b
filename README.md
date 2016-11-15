Halo!!

Berikut ini kode programnya tipe A,

```
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
```

Berikut ini kode programnya tipe B,

```
/* Copyright (c) 2016 Aldieemaulana All Rights Reserved.
 * Algoritma & Pemrograman I
 * Soal B
 * Aldi Maulana | 12163785
 */
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

#ifndef GETCH_1_23_2014_HPP
#define GETCH_1_23_2014_HPP
#if defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
int getch(void) {
  struct termios oldt, newt;
  int ch;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  ch = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

  return ch;
}
#elif defined(_WIN32)
#include <conio.h>
#else
#error getch is not available on the target system
#endif
#endif

int validInput(std::string tipe);

int main(int argc, char const *argv[]) {
  std::string lokasi, pendidikan, nama, status, lagi;

  int n_testulis = 0, n_tesinterview = 0, ruang = 0, err = 0;
  float n_akhir = 0;

in_m:
  system("clear");

  std::cout << " _______________________________________________ " << std::endl;
  std::cout << "|            INPUT DATA PESERTA CPNS            |" << std::endl;
  std::cout << "|-----------------------------------------------|" << std::endl;
  std::cout << " Nama Peserta \t\t\t: ";
  std::getline(std::cin, nama);
  std::cout << " Lokasi [Kota/Kabupaten] \t: ";
  std::getline(std::cin, lokasi);
  std::cout << " Pendidikan [SLTA/D3/S1] \t: ";
  std::getline(std::cin, pendidikan);
  std::cout << " Nilai Tes Tulis \t\t: ";
  n_testulis = validInput("Tes Tulis");
  std::cout << " Nilai Tes Interview \t\t: ";
  n_tesinterview = validInput("Tes Interview");
  std::cout << "|-----------------------------------------------|" << std::endl;

  n_akhir = (n_testulis + n_tesinterview) / 2;
  status = (n_akhir > 70) ? "Lulus" : "Gagal";

  if (lokasi == "Kota" || lokasi == "kota") {
    if (pendidikan == "slta" || pendidikan == "SLTA") {
      ruang = 301;
    } else if (pendidikan == "d3" || pendidikan == "D3") {
      ruang = 302;
    } else if (pendidikan == "s1" || pendidikan == "S1") {
      ruang = 303;
    } else {
      err = 1;
      std::cout << " Mohon Maaf pendidikan anda tidak sesuai!!" << std::endl;
      std::cout << " Input Data Lagi? [Y/T] \t: ";
      std::cin >> lagi;

      if (lagi == "Y" || lagi == "y") {
        getch();
        goto in_m;
      } else {
        std::cout << "|-----------------------------------------------|"
                  << std::endl;
        std::cout << "|                  Aldi Maulana                 |"
                  << std::endl;
        std::cout << "|                  Terimakasih                  |"
                  << std::endl;
        std::cout << "|-----------------------------------------------|"
                  << std::endl;
      }
    }

  } else if (lokasi == "Kabupaten" || lokasi == "kabupaten") {
    if (pendidikan == "slta" || pendidikan == "SLTA") {
      ruang = 304;
    } else if (pendidikan == "d3" || pendidikan == "D3") {
      ruang = 305;
    } else if (pendidikan == "s1" || pendidikan == "S1") {
      ruang = 306;
    } else {
      err = 1;
      std::cout << " Mohon Maaf lokasi anda tidak sesuai!!" << std::endl;
      std::cout << " Input Data Lagi? [Y/T] \t: ";
      std::cin >> lagi;

      if (lagi == "Y" || lagi == "y") {
        getch();
        goto in_m;
      } else {
        std::cout << "|-----------------------------------------------|"
                  << std::endl;
        std::cout << "|                  Aldi Maulana                 |"
                  << std::endl;
        std::cout << "|                  Terimakasih                  |"
                  << std::endl;
        std::cout << "|-----------------------------------------------|"
                  << std::endl;
      }
    }

  } else {
    err = 1;
    std::cout << " Mohon Maaf lokasi anda tidak dikenali!!" << std::endl;
    std::cout << " Input Data Lagi? [Y/T] \t: ";
    std::cin >> lagi;

    if (lagi == "Y" || lagi == "y") {
      getch();
      goto in_m;
    } else {
      std::cout << "|-----------------------------------------------|"
                << std::endl;
      std::cout << "|                  Aldi Maulana                 |"
                << std::endl;
      std::cout << "|                  Terimakasih                  |"
                << std::endl;
      std::cout << "|-----------------------------------------------|"
                << std::endl;
    }
  }

  if (err == 0) {
    system("clear");
    std::cout << " _______________________________________________ "
              << std::endl;
    std::cout << "|                 HASIL TES CPNS                |"
              << std::endl;
    std::cout << "|-----------------------------------------------|"
              << std::endl;
    std::cout << " Nama Peserta \t\t\t: " << nama << std::endl;
    std::cout << " Pendidikan \t\t\t: " << pendidikan << std::endl;
    std::cout << " Lokasi Ujian \t\t\t: " << lokasi << std::endl;
    std::cout << " Ruang \t\t\t\t: " << ruang << std::endl;
    std::cout << "|-----------------------------------------------|"
              << std::endl;
    std::cout << " Tes Tulis \t\t\t: " << n_testulis << std::endl;
    std::cout << " Tes Interview \t\t\t: " << n_tesinterview << std::endl;
    std::cout << "|-----------------------------------------------|"
              << std::endl;
    std::cout << " Nilai Akhir \t\t\t: " << n_akhir << std::endl;
    std::cout << " Hasil \t\t\t\t: " << status << std::endl;
    std::cout << "|-----------------------------------------------|"
              << std::endl;

    std::cout << " Input Data Lagi? [Y/T] \t: ";
    std::cin >> lagi;

    if (lagi == "Y" || lagi == "y") {
      getch();
      goto in_m;
    } else {
      std::cout << "|-----------------------------------------------|"
                << std::endl;
      std::cout << "|                  Aldi Maulana                 |"
                << std::endl;
      std::cout << "|                  Terimakasih                  |"
                << std::endl;
      std::cout << "|-----------------------------------------------|"
                << std::endl;
    }
  }

  return 0;
}

int validInput(std::string tipe) {
  int x = 0;
  std::cin >> x;
  while (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << " + Salah, Nilai " << tipe << "\t: ";
    std::cin >> x;
  }
  return x;
}


```

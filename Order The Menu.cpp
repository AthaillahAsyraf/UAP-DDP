#include <iostream>
using namespace std;

int main()
{
  const string TOKO = "Waroeng Lima";

  cout << "Selamat Datang di " << TOKO;
  cout << "" << endl
       << endl;

  int pilih, totalPesanan, jumlah, hasil = 0;
  char pilihanPesanan, yesNo;
  int diskon = 10;
  int x = 0;
  int totalAkhirPesanan[x];

  cout << "Pilihan Menu Waroeng 5 :" << endl;
  cout << "1. Best Seller" << endl;
  cout << "2. Food" << endl;
  cout << "3. Drink" << endl;
  cout << "4. Snack" << endl
       << endl;

  do
  {
    cout << "Masukkan Pilihan Menu Yang Ingin Di Pilih:";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
      cout << "Best Seller" << endl;
      cout << "A. Rice Bowl With Salted Egg	: Rp.15.000" << endl;
      cout << "B. Hot Spicy Chicken	 	: Rp.30.000" << endl;
      cout << "C. Fried Rice	 		: Rp.16.000" << endl;
      cout << "D. Blueberry Cheesecake  	: Rp.14.000" << endl;
      cout << "E. Iced Coffee Matcha Jelly	: Rp.8.000" << endl;
      cout << "F. Apple Pie			: Rp.6.000" << endl;
      cout << "G. Crispy Chicken 		: Rp.12.000" << endl;
      cout << "H. Iced Soda			: Rp.10.000" << endl;
      cout << "I. Souffle Pancake 		: Rp.17.000" << endl
           << endl;

      cout << "Masukkan Pilihan Menu : ";
      cin >> pilihanPesanan;

      if (pilihanPesanan == 'A' || pilihanPesanan == 'a')
      {
        totalPesanan = 15000;
      }
      else if (pilihanPesanan == 'B' || pilihanPesanan == 'b')
      {
        totalPesanan = 30000;
      }
      else if (pilihanPesanan == 'C' || pilihanPesanan == 'c')
      {
        totalPesanan = 16000;
      }
      else if (pilihanPesanan == 'D' || pilihanPesanan == 'd')
      {
        totalPesanan = 14000;
      }
      else if (pilihanPesanan == 'E' || pilihanPesanan == 'e')
      {
        totalPesanan = 8000;
      }
      else if (pilihanPesanan == 'F' || pilihanPesanan == 'f')
      {
        totalPesanan = 6000;
      }
      else if (pilihanPesanan == 'G' || pilihanPesanan == 'g')
      {
        totalPesanan = 12000;
      }
      else if (pilihanPesanan == 'H' || pilihanPesanan == 'h')
      {
        totalPesanan = 10000;
      }
      else if (pilihanPesanan == 'I' || pilihanPesanan == 'i')
      {
        totalPesanan = 17000;
      }
      else
      {
        cout << "Pilihan Menu Tidak Tersedia" << endl
             << endl;
      }
      cout << "Berapa Banyak Yang Ingin Dibeli?";
      cin >> jumlah;

      totalAkhirPesanan[x] = totalPesanan * jumlah;

      cout << "Apakah Anda Ingin Memesan Lagi (Y/N)";
      cin >> yesNo;

      break;

    case 2:
      cout << "Food" << endl;
      cout << "A. Rice Bowl With Salted Egg		: Rp.15.000" << endl;
      cout << "B. Hot Spicy Chicken With Rice 		: Rp.30.000" << endl;
      cout << "C. Fried Rice				: Rp.16.000" << endl;
      cout << "D. Crispy Chicken with Rice		: Rp.14.000" << endl;
      cout << "E. Satai With Rice			: Rp.23.000" << endl;
      cout << "F. Mayonnaise Steak With Rice		: Rp.45.000" << endl;
      cout << "G. Grilled Shrimp With Oyster Sauce	: Rp.40.000" << endl;
      cout << "H. Grilled Chicken With Rice		: Rp.25.000" << endl;
      cout << "I. Grilled Ribs With Rice		: Rp.60.000" << endl
           << endl;

      cout << "Masukkan Pilihan Menu : ";
      cin >> pilihanPesanan;

      if (pilihanPesanan == 'A' || pilihanPesanan == 'a')
      {
        totalPesanan = 15000;
      }
      else if (pilihanPesanan == 'B' || pilihanPesanan == 'b')
      {
        totalPesanan = 30000;
      }
      else if (pilihanPesanan == 'C' || pilihanPesanan == 'c')
      {
        totalPesanan = 16000;
      }
      else if (pilihanPesanan == 'D' || pilihanPesanan == 'd')
      {
        totalPesanan = 14000;
      }
      else if (pilihanPesanan == 'E' || pilihanPesanan == 'e')
      {
        totalPesanan = 23000;
      }
      else if (pilihanPesanan == 'F' || pilihanPesanan == 'f')
      {
        totalPesanan = 45000;
      }
      else if (pilihanPesanan == 'G' || pilihanPesanan == 'g')
      {
        totalPesanan = 40000;
      }
      else if (pilihanPesanan == 'H' || pilihanPesanan == 'h')
      {
        totalPesanan = 25000;
      }
      else if (pilihanPesanan == 'I' || pilihanPesanan == 'i')
      {
        totalPesanan = 15000;
      }
      else
      {
        cout << "Pilihan Menu Tidak Tersedia" << endl
             << endl;
      }
      cout << "Berapa Banyak Pesanan?";
      cin >> jumlah;

      totalAkhirPesanan[x] = totalPesanan * jumlah;

      cout << "Apakah Anda Ingin Memesan Lagi (Y/N)?";
      cin >> yesNo;

      break;

    case 3:
      cout << "Drink" << endl;
      cout << "A. Iced Coffe Matcha Jelly : Rp.10.000" << endl;
      cout << "B. Iced Soda		   : Rp.8.000" << endl;
      cout << "C. Iced Tea		   : Rp.6.000" << endl;
      cout << "D. Avocado Juice	   : Rp.8.000" << endl;
      cout << "E. Orange Juice	   	   : Rp.8.000" << endl;
      cout << "F. Hot Coffee With Milk	   : Rp.7.000" << endl;
      cout << "G. Milk Tea		   : Rp.8.000" << endl;
      cout << "H. Original Coffee	   : Rp.6.000" << endl;
      cout << "I. Mango Juice		   : Rp.8.000" << endl
           << endl;

      cout << "Masukkan Pilihan Menu : ";
      cin >> pilihanPesanan;

      if (pilihanPesanan == 'A' || pilihanPesanan == 'a')
      {
        totalPesanan = 10000;
      }
      else if (pilihanPesanan == 'B' || pilihanPesanan == 'b')
      {
        totalPesanan = 8000;
      }
      else if (pilihanPesanan == 'C' || pilihanPesanan == 'c')
      {
        totalPesanan = 6000;
      }
      else if (pilihanPesanan == 'D' || pilihanPesanan == 'd')
      {
        totalPesanan = 8000;
      }
      else if (pilihanPesanan == 'E' || pilihanPesanan == 'e')
      {
        totalPesanan = 8000;
      }
      else if (pilihanPesanan == 'F' || pilihanPesanan == 'f')
      {
        totalPesanan = 7000;
      }
      else if (pilihanPesanan == 'G' || pilihanPesanan == 'g')
      {
        totalPesanan = 8000;
      }
      else if (pilihanPesanan == 'H' || pilihanPesanan == 'h')
      {
        totalPesanan = 6000;
      }
      else if (pilihanPesanan == 'I' || pilihanPesanan == 'i')
      {
        totalPesanan = 8000;
      }
      else
      {
        cout << "Pilihan Menu Tidak Tersedia" << endl
             << endl;
      }
      cout << "Berapa Banyak Pesanan?";
      cin >> jumlah;

      totalAkhirPesanan[x] = totalPesanan * jumlah;

      cout << "Apakah Anda Ingin Memesan Lagi (Y/N)?";
      cin >> yesNo;

      break;

    case 4:
      cout << "Snack" << endl;
      cout << "A. Fish Roll 	          : Rp.2.000" << endl;
      cout << "B. Crab Stick 	          : Rp.2.000" << endl;
      cout << "C. Fish Meatball	  : Rp.2.000" << endl;
      cout << "D. Cheese Dumpling 	  : Rp.3.000" << endl;
      cout << "E. Sausage 		  : Rp.2.000" << endl;
      cout << "F. Grilled Fish Cake 	  : Rp.2.000" << endl;
      cout << "G. Blueberry Cheesecake   : Rp.8.000" << endl;
      cout << "H. Souffle Pancake 	  : Rp.10.000" << endl;
      cout << "I. Macaroon 		  : Rp.9.000" << endl
           << endl;

      cout << "Masukkan Pilihan Menu : ";
      cin >> pilihanPesanan;

      if (pilihanPesanan == 'A' || pilihanPesanan == 'a')
      {
        totalPesanan = 2000;
      }
      else if (pilihanPesanan == 'B' || pilihanPesanan == 'b')
      {
        totalPesanan = 2000;
      }
      else if (pilihanPesanan == 'C' || pilihanPesanan == 'c')
      {
        totalPesanan = 2000;
      }
      else if (pilihanPesanan == 'D' || pilihanPesanan == 'd')
      {
        totalPesanan = 3000;
      }
      else if (pilihanPesanan == 'E' || pilihanPesanan == 'e')
      {
        totalPesanan = 2000;
      }
      else if (pilihanPesanan == 'F' || pilihanPesanan == 'f')
      {
        totalPesanan = 2000;
      }
      else if (pilihanPesanan == 'G' || pilihanPesanan == 'g')
      {
        totalPesanan = 8000;
      }
      else if (pilihanPesanan == 'H' || pilihanPesanan == 'h')
      {
        totalPesanan = 10000;
      }
      else if (pilihanPesanan == 'I' || pilihanPesanan == 'i')
      {
        totalPesanan = 9000;
      }
      else
      {
        cout << "Pilihan Menu Tidak Tersedia" << endl
             << endl;
      }
      cout << "Berapa Banyak Pesanan?";
      cin >> jumlah;

      totalAkhirPesanan[x] = totalPesanan * jumlah;

      cout << "Apakah Anda Ingin Memesan Lagi (Y/N)?";
      cin >> yesNo;

      break;
    }
    x++;
  } while (yesNo == 'Y' || yesNo == 'y');
  cout << "" << endl;
  cout << "Pembayaran :" << endl;

  for (int i = 0; i < x; i++)
  {
    hasil = hasil + totalAkhirPesanan[i];
  }
  cout << "Total Pesanan Buku :" << hasil << endl;
  cout << "Diskon Toko 10%	  :" << hasil / diskon << endl;
  cout << "Total Bayar		  :" << hasil - (hasil / diskon) << endl
       << endl;
  cout << "Terimakasih Atas Pembelian Anda" << endl;

  return 0;
}
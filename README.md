# 202531036_Laprak2_AP1_A
saya akan menjelaskan code saya di file yang readme ini
jadi untuk Quest yang saya ambil adalah bioskop, jadi saya menggunakan if else kalkulator, bisa dilihat yang "Quest Bioskop.cpp"

#include iostream = mengimpor pustaka dan fungsinya untuk operasi input dan output dalam program C++.
using namespace std; = fungsinya untuk menulis code secara singkat jadi tidak perlu menambahkan std::.
int main () { = merupakan fungsi utama dari setiap program C++ dan setiap intruksi yang ada di dalam main () akan dijalankan secara berurutan.
int umur; = umur; adalah variable bertipe data (int), fungsinya ini untuk menyimpan nilai bilangan bulat dan menyimpan informasi usia pengguna.
string KursiBioskop; = KursiBioskop; bertipe data string, fungsinya untuk menyimpan deretan karakter. Variable digunakan untuk menyimpan kategori kursi bioskop yang sesuai dengan umur penonton.
cout << "Masukkan umur kamu: "; = program menampilkan pesan tersebut ke layar windows execute atau konsol dan meminta pengguna untuk memasukkan data usia mereka.
cin >> umur; = setelah memasukkan umur (angka) dan menekan enter, nilai yang kita masukkan akan dibaca oleh program dan disimpan ke dalam variable yaitu umur.
if (umur < 13) { ... } = jika umur kurang dari 13 maka program menampilkan batas usia film yang boleh ditonton adalah SU (Semua Umur) dan menetapkan KursiBioskopnya adalah kursi anak-anak.
else if (umur >= 13 && umur <= 16) = jika umurnya rentan usia 13 sampai 16 maka program menampilkan batas usia film yang boleh ditonton adalah R13 (Remaja 13+) dan menetapkan KursiBioskopnya adalah kursi remaja.
else if (umur >= 17 && umur <= 20) = jika umurnya rentan usia 17 sampai 20 maka program menampilkan batas usia film yang boleh ditonton adalah D17 (Dewasa 17+) dan menetapkan KursiBioskopnya adalah kursi dewasa untuk umur 17+.
else { ... } = jika semua kondisi diatas tidak memenuhi, maka umur 21 atau lebih program menampilkan batas usia film yang boleh ditonton adalah D21 (Dewasa 21+) dan menetapkan KursiBioskopnya adalah kursi dewasa untuk umur 21+.

Jadi program yang saya buat untuk memastikan rentang usia penonton mendapatkan kategori film yang sesuai umurnya dan kursi bioskop yang sesuai.

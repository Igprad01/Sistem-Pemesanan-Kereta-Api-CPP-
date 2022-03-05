#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct data {
	long int nik; 
	long int umur; 
	long int jml;
	char nama[100];
	int kelas;
	int jurusan;
};

int main() {
	
	struct data data;
	
	cout << "====================================="<< endl;
	cout << "Sistem pemesanan Kereta api Sederhana" << endl;
	
	cout << "-------------------------------------" << endl;	
	cout << "masukkan Nama Lengkap Anda : "; cin>>data.nama;
	cout << "masukkan No Kependudukan anda : ";cin>>data.nik;

	cout << "--------------" << endl;
	cout << "Usia Penumpang" << endl;
	cout << "1. Dewasa	   " << endl;
	cout << "2. Anak - Anak" << endl;
	cout << "Masukkan Jenis Umur Anda : "; cin>>data.umur;
	
	cout << "---------------------------" << endl;
	cout << "pilih Jurusan Yang Tersedia" << endl;
	cout << "1. Surabaya  " << endl;
	cout << "2. Semarang  " << endl;
	cout << "3. Yogjakarta" << endl;
	cout << "4. Banyuwangi" << endl;
	cout << "5. Malang	  " << endl;
	cout << "6. Jakarta   " << endl;
	cout << "masukkan Jurusan Kereta Api Anda : "; cin>>data.jurusan;

	cout << "----------" << endl;
	cout << "Daftar kelas Kereta Api" << endl;
	cout << "1. Eksekutif" << endl;
	cout << "2. Business" << endl;
	cout << "3. Ekonomi" << endl;
	cout << "Pilih Kelas Kereta Api Anda : "; cin>>data.kelas;
	
	cout << "masukkan jumlah tiket yang anda pesan : "; cin>>data.jml;
			
	if (data.kelas ==1) {
		cout << "HARGA	   : RP. 67.0000" << endl;
	}
	else if (data.kelas==2) 
		cout << "HARGA 	   : RP. 45.000" << endl;
	else {
		cout << "HARGA 	   : RP. 35.000" << endl;
	}


	cout << "DATA PENUMPANG TIKET KERETA API" << endl;
	cout << "===============================" << endl;
	
	cout << "NAMA PENUMPANG 	: "<< data.nama << endl;
	cout << "NO INDUK PENUMPANG : "<< data.nik << endl;

	cout << "TOTAL TIKET YANG DIPESAN :  " << data.jml << endl;
	
	
	if (data.kelas == 1) {
		cout << "TOTAL HARGA TIKET :  "<< data.jml*67000 << endl;
	}
	else if (data.kelas == 2) {
		cout << "TOTAL HARGA TIKET :  " << data.jml*45000 << endl;
	} else  
		cout << "TOTAL HARGA TIKET :  " << data.jml*35000 << endl;
		
			
	switch (data.umur) {
		case 1 : cout << "TIPE PENUMPANG : DEWASA" << endl;
		break;
		case 2 : cout << "TIPE PENUMPANG : ANAK - ANAK " << endl;
		break;
	default : cout << "tidak Diketahui" << endl ; 
	}
	
	switch (data.jurusan) {
		case 1 : cout << "JURUSAN KERETA API : SURABAYA" << endl;
		break;
		case 2 : cout << "JURUSAN KERETA API : SEMARANG" << endl;
		break;
		case 3 : cout << "JURUSAN KERETA API : YOGJAKARTA" << endl;
		break;
		case 4 : cout << "JURUSAN KERETA API : BANYUWANGI" << endl;
		break;
		case 5 : cout << "JURUSAN KERETA API : MALANG" << endl;
		break;
		case 6 : cout << "JURUSAN KERETA API : JAKARTA" << endl;
		
		default : cout << "Tidak Diketahui" << endl;
	}
	
	switch (data.kelas) {
		case 1 : cout << "KELAS PENUMPANG : EKSEKUTIF "<< endl ;
		break;
		case 2 : cout << "KELAS PENUMPANG : BUSINESS" << endl;
		break;
		case 3 : cout << "KELAS PENUMPANG : EKONOMI" <<  endl ;
		break;
	
	default : cout << "Tidak Diketahui" << endl;

	}
	
}

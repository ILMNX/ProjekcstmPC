#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
using namespace std;
/*
- Input & Output
- Tipe Data & Variabel
- Percabangan
- Perulangan
- Array
- Fungsi[]
*/
    int qty[15];
	int hasil1 = 0;
	int hasil2=0;
	int hasil3 =0;
	int hasil4 = 0;
	int hasil5 = 0;   
	int casing, cpu,gpu, mb,ram, 
	hargacsing,hargacpu,hargagpu,hargamb,hargaram, 
	bayar;
	
	string ncasing,ncpu,ngpu,nmboard,nram;
	
void print(){
	cout<<"--------------------------------------"<<endl;
	cout<<"Jenis casing anda adalah: "<<ncasing<<endl;
	cout<<"QTY : "<<hasil1<<endl;
	cout<<"Total : "<<hargacsing<<endl<<endl;
	
	cout<<"Jenis CPU anda adalah: "<<ncpu<<endl;
	cout<<"QTY : "<<hasil2<<endl;
	cout<<"Total : "<<hargacpu<<endl<<endl;
	
	cout<<"Jenis GPU anda adalah: "<<ngpu<<endl;
	cout<<"QTY : "<<hasil3<<endl;
	cout<<"Total : "<<hargagpu<<endl<<endl;
	
	cout<<"Jenis MOTHERBOARD anda adalah: "<<nmboard<<endl;
	cout<<"QTY : "<<hasil4<<endl;
	cout<<"Total : "<<hargamb<<endl<<endl;
	
	cout<<"Jenis RAM anda adalah: "<<nram<<endl;
	cout<<"QTY : "<<hasil5<<endl;
	cout<<"Total : "<<hargaram<<endl<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"Total Barang Anda Adalah: "<<hasil1+hasil2+hasil3+hasil4+hasil5<<endl;
	cout<<"Total harga yang harus anda bayar adalah: Rp."<<bayar<<endl;
	cout<<"--------------------------------------"<<endl;
	getch();
}
int main(){
	
	//tipe data & variabel
	
	//CASING CPU
	cout<<"========================================="<<endl;
	cout<<" SELAMAT DATANG DI PROGRAM Custom PC "<<endl;
	cout<<"========================================="<<endl;
	cout<<endl;

	cout<<"******************************************"<<endl;
	cout<<"|No|   |Jenis Casing PC|    |    Harga   |"<<endl;
	cout<<"|--|---|---------------|----|------------|"<<endl;
	cout<<"|1.|   |Full Tower     |    |Rp 1.000.000|"<<endl;
	cout<<"|2.|   |Mid Tower      |    |Rp 750.000  |"<<endl;
	cout<<"|3.|   |Mini Tower     |    |Rp 500.000  |"<<endl;
	cout<<"******************************************"<<endl;
	cout<<endl;
	
	cout <<"Silahkan Pilih Jenis Casing PC (1-3) : ";
	cin>>casing;
	cout<<"Jumlah Pembelian: ";

	for(int i = 0; i<1;i++){
		cin>>qty[i];
	}
	for(int i=0;i < 1; i++){ 
		hasil1+=qty[i]; 
	
	//percabangan
	if (casing == 1){
		hargacsing  = qty[i] * 1000000;
		ncasing = "Full tower";
	}
	else if( casing == 2){
		hargacsing = qty[i]*750000;
		ncasing = "Mid Tower";
		
	}
	else if (casing == 3){
		hargacsing = qty[i]*500000;
		ncasing = "Mini Tower";
	}
	else {
		cout<< "Error! Inputan tidak ada (Silahkan Input angka 1-3)";
		exit(0);
	}
}
	
	
	cout<<endl;
	cout<< "Anda Akan Membeli Casing PC  "<<ncasing<<"\nSejumlah: "<<hasil1<<" Buah"<<"\nHarga  Rp."<<hargacsing<<endl;
	cout<<"Klik ENTER untuk melanjutkan"<<endl<<endl;
	
	getch();
system("cls");
	
	//JENIS CPU
	cout<<"************************************************"<<endl;
	cout<<"|No|   |Jenis CPU            |    |    Harga    |"<<endl;
	cout<<"|--|   |---------------------|    |-------------|"<<endl;
	cout<<"|1.|   |Ryzen 9 7950X        |    |Rp 11.900.000|"<<endl;
	cout<<"|2.|   |Intel Core i7 12700K |    |Rp 7.600.000 |"<<endl;
	cout<<"|3.|   |AMD RYZEN 7 5700X    |    |Rp 3.999.000 |"<<endl;
	cout<<"|4.|   |INTEL CORE I5 11400  |    |Rp 2.449.000 |"<<endl;
	cout<<"************************************************"<<endl;
	cout<<endl;
	cout<< "Silahkan Pilih Jenis CPU Anda (1-4): ";
	cin>>cpu;
	
	cout<<"Jumlah Pembelian: ";
	
	for(int i = 0; i<1;i++){
		cin>>qty[i];
	}
	for(int i=0;i < 1; i++){ 
		 hasil2+=qty[i]; 
		
	if (cpu == 1){
		hargacpu  = qty[i]*11900000;
		ncpu = "Ryzen 9 7950X  ";
	}
	else if( cpu == 2){
		hargacpu = qty[i]*7600000;
		ncpu = "Intel Core i7 12700K";
		
	}
	else if (cpu == 3){
		hargacpu = qty[i]*3999000;
		ncpu = "AMD RYZEN 7 5700X ";
	}
	else if (cpu == 4){
		hargacpu = qty[i]*2449000;
		ncpu = "INTEL CORE I5 11400";
	}
	else {
		cout<< "Error! Inputan tidak ada (Silahkan Input angka 1-4)";
		exit(0);
	}
}
cout<<endl;
		cout<< "Anda Akan Membeli CPU "<<ncpu<<"\nSejumlah: "<<hasil2<<" Buah"<<"\nHarga  Rp."<<hargacpu<<endl;
	cout<<"Klik ENTER untuk melanjutkan"<<endl<<endl;
	getch();
system("cls");
	
	//JENIS GPU
	cout<<"************************************************"<<endl;
	cout<<"|No|   |Jenis GPU            |    |    Harga    |"<<endl;
	cout<<"|--|   |---------------------|    |-------------|"<<endl;
	cout<<"|1.|   |NVIDIA GTX 1660 Super|    |Rp 3.600.000 |"<<endl;
	cout<<"|2.|   |AMD RADEON RX 570    |    |Rp 1.900.000 |"<<endl;
	cout<<"|3.|   |NVIDIA RTX 2060      |    |Rp 4.599.000 |"<<endl;
	cout<<"|4.|   |AMD RADEON 6600 XT   |    |Rp 11.500.000|"<<endl;
	cout<<"************************************************"<<endl;
	cout<<endl;
	cout<< "Silahkan Pilih Jenis GPU Anda (1-4): ";
	cin>>gpu;
	
	cout<<"Jumlah Pembelian: ";
	for(int i = 0; i<1;i++){
		cin>>qty[i];
	}
	for(int i=0;i < 1; i++){ 
		hasil3+=qty[i]; 
	if (gpu == 1){
		hargagpu  = qty[i]*3600000;
		ngpu = "NVIDIA GTX 1660 Super ";
	}
	else if( gpu == 2){
		hargagpu = qty[i]*1900000;
		ngpu = "AMD RADEON RX 570 ";
		
	}
	else if (gpu == 3){
		hargagpu = qty[i]*4599000;
		ngpu = "NVIDIA RTX 2060 ";
	}
	else if (gpu == 4){
		hargagpu = qty[i]*11500000;
		ngpu = "AMD RADEON 6600 XT ";
	}
	else {
		cout<< "Error! Inputan tidak ada (Silahkan Input angka 1-4)";
		exit(0);
	}
}
	cout<<endl;
	cout<< "Anda Akan Membeli GPU "<<ngpu<<"\nSejumlah: "<<hasil3<<" Buah"<<"\nHarga  Rp."<<hargagpu<<endl;
	cout<<"Klik ENTER untuk melanjutkan"<<endl<<endl;
	
	getch();
system("cls");	
	
	//Jenis Motherboard
	cout<<"************************************************"<<endl;
	cout<<"|No|   |Jenis Motherboard    |    |    Harga    |"<<endl;
	cout<<"|--|   |---------------------|    |-------------|"<<endl;
	cout<<"|1.|   |ASUS TUF GAMING B660 |    |Rp 3.100.000 |"<<endl;
	cout<<"|2.|   |ASUS TUF B560M-PLUS  |    |Rp 2.650.000 |"<<endl;
	cout<<"|3.|   |ASUS ROG STRIX B450-F|    |Rp 2.199.000 |"<<endl;
	cout<<"|4.|   |ASUS ROG STRIX Z690-A|    |Rp 5.890.000 |"<<endl;
	cout<<"************************************************"<<endl;
	cout<<endl;
	cout<< "Silahkan Pilih Jenis Motherboard Anda (1-4)  : ";
	cin>>mb;
	
	cout<<"Jumlah Pembelian: ";	
	for(int i = 0; i<1;i++){
		cin>>qty[i];
	}
	for(int i=0;i < 1; i++){ 
		hasil4+=qty[i]; 
		
	if (mb == 1){
		hargamb  = qty[i]*3100000;
		nmboard = "ASUS TUF GAMING B660 ";
	}
	else if( mb == 2){
		hargamb = qty[i]*2650000;
		nmboard = "ASUS TUF B560M-PLUS ";
		
	}
	else if (mb == 3){
		hargamb = qty[i]*2199000;
		nmboard = "ASUS ROG STRIX B450-F ";
	}
	else if (mb == 4){
		hargamb = qty[i]*5890000;
		nmboard = "ASUS ROG STRIX Z690-A ";
	}
	else {
		cout<< "Error! Inputan tidak ada (Silahkan Input angka 1-4)";
		exit(0);
	}
}
	cout<<endl;
	cout<< "Anda Akan Membeli Motherboard "<<nmboard<<"\nSejumlah: "<<hasil4<<" Buah"<<"\nHarga  Rp."<<hargamb<<endl;
	cout<<"Klik ENTER untuk melanjutkan"<<endl<<endl;
	
	getch();
system("cls");
	//Jenis RAM
	cout<<"******************************************"<<endl;
	cout<<"|No|   |Jenis RAM      |    |    Harga    |"<<endl;
	cout<<"|--|---|---------------|----|-------------|"<<endl;
	cout<<"|1.|   |RAM 4GB        |    |Rp 400.000   |"<<endl;
	cout<<"|2.|   |RAM 8GB        |    |Rp 520.000   |"<<endl;
	cout<<"|3.|   |RAM 16GB       |    |Rp 1.300.000 |"<<endl;
	cout<<"******************************************"<<endl;
	cout<<endl;
	
	cout <<"Silahkan Pilih Jenis RAM (1-3) : ";
	cin>>ram;
	
	cout<<"Jumlah Pembelian: ";
	for(int i = 0; i<1;i++){
		cin>>qty[i];
	}
	for(int i=0;i < 1; i++){ 
		hasil5+=qty[i]; 
	if (ram == 1){
		hargaram  = qty[i]*400000;
		nram = "RAM 4GB ";
	}
	else if( ram == 2){
		hargaram = qty[i]*520000;
		nram = "RAM 8GB ";
		
	}
	else if (ram == 3){
		hargaram = qty[i]*1300000;
		nram = "RAM 16GB ";
	}
	else {
		cout<< "Error! Inputan tidak ada (Silahkan Input angka 1-3)";
		exit(0);
	}


	cout<<endl;
	cout<< "Anda Akan Membeli RAM "<<nram<<"\nSejumlah: "<<hasil5<<" Buah"<<"\nHarga  Rp."<<hargaram<<endl;
	cout<<"Klik ENTER untuk melanjutkan"<<endl<<endl;
	getch();
system("cls");	
	
	
	bayar = hargacsing+hargacpu+hargagpu+hargamb+hargaram;
	print();

}
	return 0;
	
}

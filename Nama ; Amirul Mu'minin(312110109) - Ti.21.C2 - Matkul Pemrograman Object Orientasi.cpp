#include <iostream>
using namespace std;
int main(){
	
	cout<<" ===============================================\n";
	cout<<" Nama   : Amirul Mu'minin                       \n";
	cout<<" Kelas  : Ti.21.C2                              \n";
	cout<<" Nik    : 312110109                             \n";
	cout<<" Matkul : Pemrograman Berorientasi Object       \n";
	cout<<" ===============================================\n";

	cout<<endl;
	
	int energi, kecepatan;
	string arah, keterangan, keterangan2, warna;
	
	
	cout<<"Masukkan warna = "; cin>>warna;
	cout<<"Mengisi energi = "; cin>>energi;
	cout<<endl;
	cout<<"Nyalakan mesin Y/T = "; cin>>keterangan;
	if(keterangan=="Y"||keterangan == "y"){
		cout<<endl<<"Terbang/Turun = ";
		cin>>keterangan2;
		if(keterangan2=="terbang"){
			cout<<"Kecepatan Bertambah = ";cin>>kecepatan;
			cout<<"Arah = "; cin>>arah;
			cout<<endl;
		}
		else{
			cout<<"Kecepatan Berkurang = "; cin>>kecepatan;
			cout<<"Arah = ";cin>>arah;
			cout<<endl;
		}
		cout<<"warna Pesawat Tempur = "<<warna<<endl;
		cout<<"Ketinggian = "<<kecepatan+1000<<" kaki"<<endl;
		cout<<"Energi = "<<energi-kecepatan/100<<endl;
		cout<<"Arah = "<<arah<<endl;
	}else{
		cout<<endl<<"OFF"<<endl;
		cout<<"Warna Pesawat Tempur = "<<warna<<endl;
		cout<<"Ketinggian = - kaki"<<endl;
		cout<<"Energi = -"<<endl;
		cout<<"Arah = -"<<arah<<endl;
	}
}

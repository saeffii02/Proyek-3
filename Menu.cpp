#include <iostream>
using namespace std;

#define max 10
string n[max], nik[max], kab[max], TTL[max], imunisasi[max], polio[max], campak[max], influenza[max], hepatitis_A[max], PCV[max],dengue[max], loop;
int pos=0;

void add(){
	do{
		if(pos<max){
			cin.ignore();
			cout<<"Nama : ";
			getline(cin, n[pos]);
			cout<<"nik : ";
			getline(cin, nik[pos]);
			cout<<"kab : ";
			getline(cin, kab[pos]);
			cout<<"Tempat, tanggal lahir : ";
			getline(cin, TTL[pos]);
			cout<<"usia 0-6 bulan "<<endl;
			cout<<"  Imunisasi : "; 
			getline(cin, imunisasi[pos]);
			cout<<"  Polio : ";
			getline(cin, polio[pos]);
			cout<<"usia 6-12 bulan "<<endl;
			cout<<"  Campak : "; 
			getline(cin, campak[pos]);
			cout<<"  Influenza : ";
			getline(cin, influenza[pos]);
			cout<<"usia 12-24 bulan"<<endl;
			cout<<"  Hepatitis A : ";
			getline(cin, hepatitis_A[pos]);
			cout<<"  PCV : ";
			getline(cin, PCV[pos]);
			cout<<"usia 2-18 tahun "<<endl;
			cout<<"  Campak : ";
			getline(cin, campak[pos]);
			cout<<"  Dengue : ";
			getline(cin, dengue[pos]);
			pos++;
			cout<<"ulangi (y/t) : ";
			cin>>loop;
		}else{
			cout<<"memori penuh"<<endl;
			cout<<"isi t untuk kembali";
			cin>>loop;
		}
	
	}while(loop=="y");
	cout<<"Tambahkan Data"<<endl;
}


int main(){
	int pil;
	do{
		system("cls");
		cout<<"1. Tambahkan Data\n";
		cout<<"2. Tampilkan Data\n";
		cout<<"3. Edit Data\n";
		cout<<"4. Hapus Data\n";
	
		cout<<"Pilihan : ";
		cin>>pil;
		switch(pil){
		case 1:
			break;
		case 2:
			do{
			cout<<"kembali (y) : ";
			cin>>loop;
		}while(loop !="y");
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			cout<<"....."<<endl;
			break;
		default:
			cout<<"pilih 1-4"<<endl;
			break;
		}
	}while(pil !=5);
	cout<<"Program Selesai";
	 
}


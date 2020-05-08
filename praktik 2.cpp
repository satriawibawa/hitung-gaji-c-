#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int i,gaji,lama;
	char pil;
	mulai:
		cout << "Silahkan masukkan besar gaji perbulan : "; cin >> gaji;
			float pin,bunga,pokok,jml,c;
			if (gaji >= 2500000){
				cout << "Masukkan jumlah pinjaman : "; cin >> pin;
				cout << "Silahkan Masukkan lama pinjam (12,24,36) : "; cin >> lama;
				hai:
				if(lama == 12 || 24){
					pokok = pin/lama;
					cout << "Angsuran pokok "<<pokok;
					c= pin * 9/100;
					cout << "Bunga " <<c;
					bunga = c/12;
					jml = pokok + bunga ;
					cout << "jumlah angsuran" << jml <<endl;
					cout<<"angsuran ke  | POKOK  |BUNGA  |  JUMLAH ANGSURAN "<<endl;
					for(i=1;i<=lama;i++)
						{
						cout<<setw(10)<<i
						<<setw(15)<<setprecision(6)<<pokok
						<<setw(15)<<bunga<<setprecision(6)
						<<setw(20)<<jml<<setprecision(6)
						<<endl;
						}
					}
				else if(lama == 36){
				pokok = pin/lama;
					cout << "Angsuran pokok "<<pokok<<endl;
					c= pin * 1/10;
					cout << "Bunga " <<c<<endl;
					bunga = c/12;
					jml = pokok + bunga ;
					cout << "jumlah angsuran" << jml <<endl;
					cout<<"angsuran ke  | POKOK  |BUNGA  |  JUMLAH ANGSURAN "<<endl;
					for(i=1;i<=lama;i++)
						{
						cout<<setw(10)<<i
						<<setw(15)<<setprecision(6)<<pokok
						<<setw(15)<<bunga<<setprecision(6)
						<<setw(20)<<jml<<setprecision(6)
						<<endl;
					}
				}
				if(lama !=12 || lama !=24 ||lama != 36){
					cout <<"Tidak bisa mengajukan pinjaman "<<endl;
					cout <<"Ulangi lagi (y/t) : "; cin >> pil;
					if (pil=='y'){
						goto hai;
					}
				}
		}
		if(gaji < 2500000){
			cout <<"Tidak bisa mengajukan pinjaman "<<endl;
			cout <<"Ulangi lagi (y/t) : "; cin >> pil;
			if(pil=='y'){
				goto mulai;
			}
		 }
}
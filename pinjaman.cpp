#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float a,b,c,ang,bulan,sur,bunga;
	cout<<"Masukkan jumlah pinjaman : " ;cin>>a;
	cout<<"Masukkan besar bunga pertahun (%): ";cin>>bunga;	float bt=bunga/100;
	cout<<"===============================\n";
	cout<<"1. pinjaman 12 bulan\n";
	cout<<"2. pinjaman 24 bulan\n";
	cout<<"3. pinjaman 36 bulan\n";
	cout<<"4. pinjaman 48 bulan\n";
	cout<<"5. pinjaman 60 bulan\n";
	cout<<"===============================\n";
	cout<<"Masukkan lama pinjam : ";cin>>b;
		ang = a/b;
		cout<<"angsuran pokok: "<<ang<<endl;
		c= a * bt/12;
		cout<<"bunga : "<<c<<endl;
		sur = ang + c;
		cout<<"Jumlah angsuran : "<<sur<<endl;
		cout<<"Bulan  | angsuran pokok  |Bunga  | Pokok +bunga "<<endl;
			for(bulan=1;bulan<=12;bulan++)
		{
			cout<<setw(2)<<bulan
			<<setw(15)<<ang<<setprecision(15)
			<<setw(17)<<c<<setprecision(15)
			<<setw(15)<<sur<<setprecision(15)
			<<endl;
		}
		return 0 ;
}
		
		

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

	int angka1,angka2, pilihan;
	float hasil;
	string operasi;

	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;

	cout<<"Masukan Pilihan : ";
	cin>>pilihan;
	cout<<"Masukan Angka pertama : ";
	cin>>angka1;
	cout<<"Masukan Angka kedua : ";
	cin>>angka2;

	switch(pilihan){
        case 1 : hasil=angka1+angka2;
		operasi='+';
		break;
		case 2 : hasil=angka1-angka2;
			operasi='-';
			break;
		case 3 : hasil=angka1*angka2;
			operasi='*';
			break;
		case 4 : hasil=angka1/angka2;
			operasi='/';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"============================="<<endl;
	cout<<angka1<<operasi<<angka2<<"="<<hasil<<endl;
	cout<<"============================="<<endl;

	getch();
}

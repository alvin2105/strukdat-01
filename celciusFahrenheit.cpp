/*nama		: Alvin
NPM			: 140810180013
kelas		: A
tanggal 	: 26 februari 2019
deskripsi	: celcius to fahrenheit
*/
#include<iostream>//file header
using namespace std;

int celciusFahrenheit(float n, float hasil){//fungsi untuk melakukan perhitungan
	cout<<"masukan suhu dalam celcius (C)	: ";
	cin>>n;//input data yang akan dikonversi
	hasil=n*9/5+32;//perhitungan dari konversi celcius ke fahrenheit
	cout<<"hasil  konversi	: "<<hasil<<endl;//output konversi
}
int main(){
	float n,hasil;//inisialisasi 
	cout<<"KONVERSI CELCIUS KE FAHRENHEIT"<<endl<<endl;//judul program
	celciusFahrenheit(n,hasil);//output hasil
	
}

/*nama		: Alvin
NPM			: 140810180013
kelas		: A
tanggal 	: 26 februari 2019
deskripsi	: program fizz buzz( mengoutputkn fizz jika bisa dibagi 3 , buzz bisa dibagi 5 dan fizz buzz bisa dibagi 3 dan 5)
*/
#include<iostream>//file header
using namespace std;//

void fizzBuzz(int& n){
	
	for(int i=1; i<=100; i++){//looping dimulai dari 1 
		if(i%3==0&&i%5==0){//pengkondisian jika bisa dibagi 3 dan 5
			cout<<"fizz buzz"<<endl;//output jika kondisi benar
		}
		else if(i%3==0){//pengkondisian jika angka bisa dibagi 3
			cout<<"fizz"<<endl;	//output jika kondisi benar
		}
		else if(i%5==0){//pengkondisiian jika bisa dibagi 3
			cout<<"buzz"<<endl;//output jika kondisi benar
		}

		else{//pengkodisian jika tidak bisa dibagi 3 dan 5
			cout<<i<<endl;//output jika kondisi benar
		}
	}
}
int main(){
	int n,i;
	cout<<"PROGRAM FIZZ BUZ"<<endl<<endl;
	fizzBuzz(n);//pengoutputan hasil
}

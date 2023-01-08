#include <iostream>
using namespace std;



int hitung (int x, int y){
int hasil;
hasil=x*y/2;
return hasil;
	
}

int main (){
	int x,y;
	cout<<"Inputkan alas segitiga : ";
	cin>>x;
	cout<<"Inputkan Tinggi Segitiga : ";
	cin>>y;	
	cout<<"luas Segitiga Adalah : "<<hitung(x,y);

	
}

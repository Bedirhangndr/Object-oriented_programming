//Bedirhan Gündöner
//19120205013
//Nesneye Yonelik Programlama | ODEV 2
#define _CRT_SECURE_NO_WARNINGS// stringi karmasik sayi yapmam icin gerekliydi
#include <iostream>
#include <math.h>
#include <complex>
#include <cstring>
using namespace std;

class sayilar {
private:
	double real;
	double imagine;
public:
	sayilar() : real(0), imagine(0) { }
	sayilar( int real,  int imagine) :real(real), imagine(imagine) {};//iki gercek parametreyi karmasik sayi yapan constructor
	sayilar( int real) :real(real), imagine(0) {};//icine tam sayi girince karmasik sayi yapan constructor
	sayilar( double real) :real(real), imagine(0) {};//icine double sayi alinca karmasik sayiya donusturen constructor
	sayilar(char* str) {//girilen string degeri karmasik sayi yapan constructor
		char* token = strtok(str, "+");//artýdan onceki kismi alacak 
		char* token2 = strtok(NULL, "i");//i den sonraki kismi alacak
		this->real = atoi(token); //aldigimiz degerleri intager degere cevirdik ve private da tanimladigimiz reel ve imagine parametrelerine esitledik
		this->imagine = atoi(token2);
	}
	void add(const double real, const double imagine){//Parametre olarak bir karmaþýk sayýyý alan ve kendine ekleyen bir add üye fonksiyonu.
		this->real = real + this->real;
		this->imagine = imagine + this->imagine;
	};
	void subtract(const double real, const double imagine){//Parametre olarak bir karmaþýk sayýyý alan ve kendinden çýkartan bir subtract üye fonksiyonu.
		this->real = real - this->real;
		this->imagine = imagine - this->imagine;
	};
	void divide(const double real, const double imagine) {//Parametre olarak bir karmaþýk sayýyý alan ve kendini o sayýya bölen bir divide üye fonksiyonu.
		this->real = real/this->real;
		this->imagine = imagine/this->imagine;
	};
	void setter(const double real,const double imagine){//Sanal ve gerçel deðeri tutan özel veri üyelerine eriþim ve onlarý düzenlemek için getter / setter fonksiyonlar
		this->real = real;
		this->imagine = imagine;
	}
	void getter() { 
		cout << real << "+" << imagine << "i" << endl;
	}
	void PrintInfo() {
		cout << real << "+" << imagine << "i" << endl;//Karmaþýk sayýyý ekrana bastýran bir print üye fonksiyonu.
	}
};
int main() {
	sayilar s1;
	s1.getter();
	cout << endl;
	sayilar s2(3);//int deger alinca
	s2.getter();
	cout << endl;
	sayilar s3(3.5);//double deger alinca
	s1.getter();
	cout << endl;
	s1.setter(3.5 , 6.5);//iki gercel deger ila karmasik sayi üreten yapici
	s1.getter();
	cout << endl;
	s1.add(10, 12);//girilen degerleri karmasik sayiya ekleyen üye fonksiyonu
	s1.getter();
	cout << endl;
	s1.subtract(20, 25);//girilen degerleri karmasik sayidan cikartan üye fonksiyonu
	s1.getter();	
	cout << endl;
	s1.divide(5, 2);//girilen degerleri karmasik sayiya bolen üye fonksiyonu
	s1.getter();
	cout << endl;

	char str[] = "56i+46";//girilen string degeri 56i+46 olsun dedik 
	sayilar s4(str);
	s4.getter();
	cout << endl;
}
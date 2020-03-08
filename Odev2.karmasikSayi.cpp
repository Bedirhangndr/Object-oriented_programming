//Bedirhan G�nd�ner
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
		char* token = strtok(str, "+");//art�dan onceki kismi alacak 
		char* token2 = strtok(NULL, "i");//i den sonraki kismi alacak
		this->real = atoi(token); //aldigimiz degerleri intager degere cevirdik ve private da tanimladigimiz reel ve imagine parametrelerine esitledik
		this->imagine = atoi(token2);
	}
	void add(const double real, const double imagine){//Parametre olarak bir karma��k say�y� alan ve kendine ekleyen bir add �ye fonksiyonu.
		this->real = real + this->real;
		this->imagine = imagine + this->imagine;
	};
	void subtract(const double real, const double imagine){//Parametre olarak bir karma��k say�y� alan ve kendinden ��kartan bir subtract �ye fonksiyonu.
		this->real = real - this->real;
		this->imagine = imagine - this->imagine;
	};
	void divide(const double real, const double imagine) {//Parametre olarak bir karma��k say�y� alan ve kendini o say�ya b�len bir divide �ye fonksiyonu.
		this->real = real/this->real;
		this->imagine = imagine/this->imagine;
	};
	void setter(const double real,const double imagine){//Sanal ve ger�el de�eri tutan �zel veri �yelerine eri�im ve onlar� d�zenlemek i�in getter / setter fonksiyonlar
		this->real = real;
		this->imagine = imagine;
	}
	void getter() { 
		cout << real << "+" << imagine << "i" << endl;
	}
	void PrintInfo() {
		cout << real << "+" << imagine << "i" << endl;//Karma��k say�y� ekrana bast�ran bir print �ye fonksiyonu.
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
	s1.setter(3.5 , 6.5);//iki gercel deger ila karmasik sayi �reten yapici
	s1.getter();
	cout << endl;
	s1.add(10, 12);//girilen degerleri karmasik sayiya ekleyen �ye fonksiyonu
	s1.getter();
	cout << endl;
	s1.subtract(20, 25);//girilen degerleri karmasik sayidan cikartan �ye fonksiyonu
	s1.getter();	
	cout << endl;
	s1.divide(5, 2);//girilen degerleri karmasik sayiya bolen �ye fonksiyonu
	s1.getter();
	cout << endl;

	char str[] = "56i+46";//girilen string degeri 56i+46 olsun dedik 
	sayilar s4(str);
	s4.getter();
	cout << endl;
}
//Bedirhan Gundoner 19120205013	
//Bu Odevde ters-düz - elmas seklinde ucgenler yaptýk | ODEV 1 |

#include <iostream>
using namespace std;


void NormalTriangle(int size) {
	int zero1 = 0, sizerp = size;
	for (int i = 0; i < size; ++i) //
	{
		for (int j = 0; j <= size; ++j) //Bu döngüde girilen deger buyuklugunda bosluk býraktýk. Bir üst döngü her döndüðünde "size" degeri azalacak ve bosluk 1 azalacak.
		{
			cout << "-";
		}
		for (int k = 0; k <= zero1; ++k)//Bu döngüde en basta 1 yidiz yazdik. Bir üst döngü her döndüðünde "zero" degeri 2 artacak ve yildiz 2 artacak.
		{
			cout << "*";
		}
		cout << endl;
		zero1 += 2;
		size--;
	}

}
void ReverseTriangle(int size) {
	int i = 0, zero1 = 0, sizerp = size;
	int bosluk = size / 2 + 1; //Bunu yapma sebebim, bir sonraki asamadaki elmas sekli icin tam olarak birbirine denk gelmeyen sekillerin birbirine denk gelmesini saglamak.
	//büyük while dongusu icerisindeki ilk while dongusunde ki bosluk sayýsýný arttýrarak ucgeni biraz daha saga oteledim
	while (i < size)
	{
		//cout << "   "; 
		int j = 0, k = 0;
		while (k <= bosluk)//Bu döngüde girilen deger buyuklugunda bosluk býraktýk. Bir üst döngü her döndüðünde "bosluk" degeri 1 artacak ve bosluk 1 artacak.
		{
			cout << "-";
			k++;
		}
		while (j < sizerp)//Bu döngüde girilen deger sayýsýnca yildiz koyduk. Bir üst döngü her döndüðünde "size" degeri 2 artacak ve bosluk 1 azalacak.
		{
			cout << "*";
			j++;
		}
		cout << endl;
		sizerp -= 2;
		bosluk++;
		i += 2; //bunu yapmamýn sebebi while döngüsü size degerinin yarýsý kadar dönsün istemem.
	}
}

void Diamond(int size) {
	NormalTriangle(size);
	ReverseTriangle(size);
}

int TriangleTry(int size) {
	int i = 3;
	while (i <= 15)//Bu dongude 3'ten baslayarak 5-7-9-11-13 seklinde 15 e kadar i yi artýracak. eger bu degererden biri size'a esit ise 1 dönecek degil ise 0 donecek
	{
		if (i == size)
		{
			return 1;
		}
		i += 2;
	}
	return 0;
}
int DiamondTry(int size) {//burada ise triangle fonkiyonundan farklý olarak sadece i 3 degilde 5 ten basladi
	int i = 5;
	while (i <= 15)
	{
		if (i == size)
		{
			return 1;
		}
		i += 2;
	}
	return 0;
}

int main()
{
	cout << endl << endl << endl;


b:
	int number, size;
	cout << "1:Duz Ucgen" << endl << "2:Ters Ucgen" << endl << "3:Elmas" << endl << "4:Cikis" << endl;
	cin >> number;

	if (number == 4)
	{
		return 0;
	}

	if (number == 1)
	{
		int hak = 2;
		for (int i = 0; i <= 3; i++)
		{
			if (i == 3) //eger 3.kez girmis ise diger seceneklere bakmadan return 0 donecek ve program sonlanacak
			{
				cout << endl << "Uzgunuz... Daha fazla giris denemesi yapamazsiniz." << endl;
				return 0;
			}
			cout << endl << "Seklin buyuklugu icin 3 ve 15 arasindaki tek sayilardan birini girin." << endl;
			cin >> size;
			if (TriangleTry(size)) //eger girile deger uygun ise girip sekli basacak 
			{
				cout << endl << "giris basariyla yapildi..." << endl;
				NormalTriangle(size);
				goto b; // ve menuye geri donecek
				break;
			}
			else
			{
				cout << endl << "Giris yapilamadi. Kalan hak=" << hak << endl;
			}
			hak--;
		}
	}

	if (number == 2)
	{
		int hak = 2;
		for (int i = 0; i <= 3; i++)
		{
			if (i == 3)//eger 3.kez girmis ise diger seceneklere bakmadan return 0 donecek ve program sonlanacak
			{
				cout << endl << "Uzgunuz... Daha fazla giris denemesi yapamazsiniz." << endl;
				return 0;
			}
			cout << endl << "Seklin buyuklugu icin 3 ve 15 arasindaki tek sayilardan birini girin." << endl;
			cin >> size;
			if (TriangleTry(size))//eger girile deger uygun ise girip sekli basacak 
			{
				cout << endl << "giris basariyla yapildi..." << endl;
				ReverseTriangle(size);
				goto b;
				break;
			}
			else
			{
				cout << endl << "Giris yapilamadi. Kalan hak=" << hak << endl;
			}
			hak--;
		}
	}

	if (number == 3)
	{
		int hak = 2;
		for (int i = 0; i <= 3; i++)
		{
			if (i == 3)//eger 3.kez girmis ise diger seceneklere bakmadan return 0 donecek ve program sonlanacak
			{
				cout << endl << "Uzgunuz... Daha fazla giris denemesi yapamazsiniz." << endl;
				return 0;
			}
			cout << endl << "Seklin buyuklugu icin 5 ve 15 arasindaki tek sayilardan birini girin." << endl;
			cin >> size;
			if (DiamondTry(size))//eger girile deger uygun ise girip sekli basacak 
			{
				cout << endl << "giris basariyla yapildi..." << endl;
				Diamond(size);
				goto b;
				break;
			}
			else
			{
				cout << endl << "Giris yapilamadi. Kalan hak=" << hak << endl;
			}
			hak--;
		}
	}
}


































// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

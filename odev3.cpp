//Bedirhan Gündöner
//ödev 3 
//hocam farklı farklı bir çok şey denedim üzerine çok zaman harcadım ama sanırım asla yapılamayacak bir yoldan yapmaya çalıştım 
//classroom da "memoization " kavramını henüz, cok gec gordum kalan sürede yetiştirmeye calısacagım ama olmazsa bu sekilde yukleyip attıgınız kodu inceleyecegim  
#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>

using namespace std;

// Bu odevde global veya statik degisken tanimlanamaz!!!

/* Ozyinelemeli olarak zip zip kurbaganin kac farkli yoldan gittigini bulan fonksiyondur.
 * Bu fonksiyon icinde for ve while kullanamazsiniz ve en az bir kez recursiveFunction
 * fonksiyonu cagri yapilmalidir.
 */
long long recursiveFunction(int numberOfStones)
{


	// BURAYI DUZENLEYIN



	return 0;
}

/* Yinelemeli olarak zip zip kurbaganin kac farkli yoldan gittigini bulan fonksiyondur.
 * Bu fonksiyon icinde for ve while dongusu kullanilmalidir.
 * Bu fonksiyon icinde baska bir fonksiyona (kendisi dahil) cagri yapilamaz.
 */
long long iterativeFunction(int numberOfStones)
{


	//int a = 1, b = 2, c = 3, deneme = 1;
	//for (int i = numberOfStones; i>0; i--)
	//{
	//	cout << endl << deneme << endl;

	//	int toplam_adim = i * a;
	//	if (toplam_adim != numberOfStones) {
	//		for (int j = numberOfStones / 2 + 1; j > 0; j--)
	//		{
	//			toplam_adim = toplam_adim + b * j;
	//			if (toplam_adim != numberOfStones)
	//			{
	//				for (int k = numberOfStones / 3 + 1; k > 0; k--)
	//				{
	//					toplam_adim = toplam_adim + k * c;
	//					if (toplam_adim==numberOfStones)
	//					{
	//						deneme++;
	//					}
	//				}
	//			}
	//			else { deneme++; }
	//		}
	//	}
	//	else { deneme++; }
	//}
	return 3;
}

int denemefonks(int numberOfStones) {
	int toplamadim2, toplamadim3;

	int a = 1, b = 2, c = 3, deneme = 0;
	for (int i = 0; i <= numberOfStones; i++)
	{
		cout << " bir adim = " << i;
		int toplamadim = i;
		cout << endl << "toplam adimi:  " << toplamadim << endl;
		if (toplamadim == numberOfStones) {
			deneme++;
			cout << "deneme=" << deneme << endl;
			break;
		}

		{
			for (int j = 0; j <= numberOfStones; j++)
			{
				cout << endl;
				cout << "iki adim =" << j;
				toplamadim2 = toplamadim + 2 * j;
				cout << endl << "toplam adimj:  " << toplamadim2 << endl;
				if (toplamadim2 == numberOfStones) {
					deneme++;
					cout << "deneme=" << deneme << endl;
					break;
				}
				else if (toplamadim2 > numberOfStones) { break; }
				/*else if (numberOfStones - toplamadim2 == 1)
				{
					deneme++;
					cout << "deneme=" << deneme << endl;

					break;
				}*/
				else
				{
					for (int k = 1; k <= numberOfStones; k++)
					{
						cout << "uc adim = " << k;
						toplamadim3 = toplamadim2 + k * 3;
						cout << endl << "toplam adimk:  " << toplamadim3 << endl;
						if (toplamadim3 == numberOfStones)
						{
							deneme++;
							cout << "deneme=" << deneme << endl;
							break;
						}
						/*else if (numberOfStones-toplamadim3==2)
						{
							deneme++;
							cout << "deneme=" << deneme << endl;

							break;
						}*/
						else if (toplamadim3 > numberOfStones) {
							toplamadim2 = toplamadim3 - 3;
							break;
						}
					}
				}
			}
			cout << endl;
		}
		a++;

	}
	cout << "deneme:" << deneme << endl;
	return deneme;
}
int deneme2(int girilen) {
	int deneme = 0;
	for (int i = 0; i <= girilen; i++)
	{
		int toplamadim = 0;
	a:
		toplamadim += i;
		if (toplamadim == girilen)
		{
			deneme++;
		}
		else if (toplamadim != girilen)
		{
			for (int j = 0; j <= girilen; j++)
			{
			b:
				toplamadim += 2 * j;
				if (toplamadim > girilen)
				{
					goto a;
				}
				else if (toplamadim == girilen)
				{
					deneme++;
				}
				else if (toplamadim != girilen)
				{
					for (int k = 0; k <= girilen; k++)
					{
						if (toplamadim > girilen)
						{
							goto b;
						}
						else if (toplamadim == girilen)
						{
							deneme++;
						}
					}
				}
			}
		}
	}
	cout << endl << endl << "deneme2= " << deneme;
	return deneme;
}

// Test icin kullanilacaktir ve bu fonksiyonda bir duzenleme yapilamaz
int main()
{
	//denemefonks(5);
	//deneme2(4);



	//cout << setfill(' ');

	//for (auto i = 1; i < 100; ++i)
	//{
	//	{
	//		long long tempResult = { 0 };

	//		auto start = std::chrono::steady_clock::now();
	//		tempResult = iterativeFunction(i);
	//		auto stop = std::chrono::steady_clock::now();
	//		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();

	//		cout << "iterative" << setw(4) << i << " -> " << tempResult << "\t( " << duration << "us )\n";
	//	}

	//	{
	//		long long tempResult = { 0 };

	//		auto start = std::chrono::steady_clock::now();
	//		tempResult = recursiveFunction(i);
	//		auto stop = std::chrono::steady_clock::now();
	//		auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();

	//		cout << "recursive" << setw(4) << i << " -> " << tempResult << "\t( " << duration << "us )\n\n";
	//	}
	//}

	int sayi = 5, yol=0,adimsayisi=0;
	int iki = sayi / 2;
	int uc = sayi / 3;
	for (int i = sayi; i >=0; i--)
	{
		cout << endl;
		adimsayisi = 0;
		adimsayisi += i;
		cout << "adimsayisi:"<<adimsayisi<<"    i degeri:"<<i<<endl;
		if (adimsayisi==sayi)
		{
			yol++;
		}
		else if (adimsayisi<sayi)
		{
			for (int j = iki; j >= 0; j--){
				adimsayisi += j*2;
				cout << "adimsayisi:" << adimsayisi << "    j degeri:" << j << endl;


				if (adimsayisi==sayi)
				{
					yol++;
					adimsayisi -= j * 2;
				}
				else if (adimsayisi>sayi)
				{
					adimsayisi -= j * 2;
				}
				if (adimsayisi<sayi)
				{
					for (int k = uc; k >= 0; k--)
					{
						adimsayisi += k * 3;
						cout << "adimsayisi:" << adimsayisi << "    k degeri:" << k << endl;

						if (adimsayisi==sayi)
						{
							yol++;
							adimsayisi -= k * 3;
							break;
						}
						else if (adimsayisi > sayi)
						{
							adimsayisi -= k * 3;
						}
					}
				}
				
			}
		}
	}
	cout << "yol:"<<yol;


	return 0;
}

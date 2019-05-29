#include <iostream>
#define N 100
using namespace std;
char tablica[N];
void Switch(char tablica[])
{
	//adam - > 4 znaki (int)
	// strlen
	//tablica ma wiersze i kolumny i kazdy wiersz
	// i kazda kolumna maja swoje adresy/indeksy
	//[0] 'a'
	//[1] 'b'
	//[2] 
	int liczba_a = 0;
	int liczba_b = 0;
	int liczba_c = 0;
	int dlugosc = strlen(tablica); //zadziala ale gdzie?
		for (int i = 0; i < dlugosc; i++)
	{
		switch (tablica[i])
		{
		case 'a':
			liczba_a++;
			//instrukcje
			//to juz koniec instrukcji 

			break;
		case 'b':
			liczba_b++;
			break;
		case 'c':
			liczba_c++;
				break;
		
		default:
			//instrukcje
			break;
		}
	}
	
		cout << "liter a w wyrazie jest" << liczba_a << endl;
		cout << "liter b w wyrazie jest" << liczba_b << endl;
		cout << "liter c w wyrazie jest" << liczba_c << endl;
	

}
int main()
{

	cout << "Wprowadz wyraz ktroy ma max 100 znakow" << endl;
	cin >> tablica;

	Switch(tablica);
	system("pause");
	return 0;
}
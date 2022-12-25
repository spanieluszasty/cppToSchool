#include "iostream"
using namespace std;

//1. Napisz funkcję w c++, który dla danej liczby wypisze jej wszystkie dzielniki.
void zadanie1()
{
    int a;
    cout<<"Podaj liczbe: ";
    cin>>a;
    for(int i; i<=a; i++)
    {
        if(a%i==0)
        {
            cout<<i<<" ";
        }
    }
}

//2. Napisz funkcję w c++, który dla danych dwóch liczb wyliczy najmniejszą wspólną wielokrotność tych liczb. Skorzystaj z funkcji, która wyliczy największy wspólny dzielnik dwóch liczb.

//3. Napisz funkcję w c++, który dla danego pierwszego wyrazu i ilorazu ciągu wypisze 10 pierwszych wyrazów tego ciągu (ciąg geometryczny).

//4. Napisz funkcję w c++, który dla podanych liczb a, b i n wypisze wszystkie liczby podzielne przez n z przedziału <a,b>.

//5. Napisz funkcje w c++, które dla podanych liczb w tablicy dwuwymiarowej 3x3 i liczby n wyliczy ile jest w tablicy liczb większych od n.

//6. Napisz funkcje w c++, które dla podanych liczb w tablicy dwuwymiarowej 3x3:

//a) wypisze największą z nich.

//b) Wyznaczy ilość liczba parzystych

//c) Wyznaczy sumę liczb na głównej przekątnej
int main()
{
    zadanie1();
    return 0;
}

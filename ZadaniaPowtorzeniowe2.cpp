#include "iostream"


using namespace std;

//1. Napisz funkcję w c++, który dla danej liczby wypisze jej wszystkie dzielniki.
void zadanie1() {
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    for (int i; i <= a; i++) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
}

//2. Napisz funkcję w c++, który dla danych dwóch liczb wyliczy najmniejszą wspólną wielokrotność tych liczb.
// Skorzystaj z funkcji, która wyliczy największy wspólny dzielnik dwóch liczb.

int Nwd(int a, int b) {
    while (b > 0) {
        int mod = a % b;
        a = b;
        b = mod;
    }
    return a;
}

int zadanie2(int a, int b) {
    int nwd = Nwd(a, b);
    return a * b / nwd;
}

//3. Napisz funkcję w c++, który dla danego pierwszego wyrazu i ilorazu ciągu wypisze 10 pierwszych wyrazów tego ciągu (ciąg geometryczny).
void zadanie3(int a, int q) {
    for (int i = 0; i < 10; i++) {
        cout << a << " ";
        a *= q;


    }
}

//4. Napisz funkcję w c++, który dla podanych liczb a, b i n wypisze wszystkie liczby podzielne przez n z przedziału <a,b>.
void zadanie4(int a, int b, int n) {
    for (int i = a; i <= b; i++) {
        if (i % n == 0) {
            cout << i << " ";
        }
    }
}

//5. Napisz funkcje w c++, które dla podanych liczb w tablicy dwuwymiarowej 3x3 i liczby n wyliczy ile jest w tablicy liczb większych od n.
int zadanie5(int Tab[3][3], int n) {
    int licznik = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > n) {
                licznik++;
            }
        }
    }
}

//6. Napisz funkcje w c++, które dla podanych liczb w tablicy dwuwymiarowej 3x3:

//a) wypisze największą z nich.
int zadanie6a(int Tab[3][3])
{
    int max = Tab[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(Tab[i][j] > max)
            {
                max = Tab[i][j];
            }
        }
    }
    return max;
}
//b) Wyznaczy ilość liczba parzystych
int zadanie6b(int Tab[3][3])
{
    int licznik;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(Tab[i][j] % 2 == 0)
            {
                licznik+= Tab[i][j];
            }
        }
    }
    return licznik;
}
//c) Wyznaczy sumę liczb na głównej przekątnej
int zadanie6c(int Tab[3][3])
{
    int suma=0;
    for (int i = 0; i < 3; i++)
    {
       suma += Tab[i][i];
    }
    return suma;
}
int main() {
    cout << "zadanie 2: " << zadanie2(345, 765) << endl;
    cout << "zadanie 3: ";zadanie3(2, 4);cout << endl;
    cout << "zadanie 4: ";zadanie4(2, 45, 6);cout << endl;

    int tab[3][3];
    srand (time(0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           tab[i][j] = rand() % 100+1;
        }
    }


    cout << "zadanie 5: "<<zadanie5(tab, 8)<< endl;
    cout << "zadanie 6a: "<<zadanie6a(tab)<< endl;
    cout << "zadanie 6b: "<<zadanie6b(tab)<< endl;
    cout << "zadanie 6c: "<<zadanie6c(tab)<< endl;

    return 0;
}





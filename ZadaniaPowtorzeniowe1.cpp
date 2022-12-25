#include "iostream"


using namespace std;

//1.Dla podanych dwóch liczb naturalnych a i b sprawdź, która z nich jest większa i o ile.
void zadanie1() {
    int a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b:";
    cin >> b;
    if (a > b) { cout << "Liczba a jest wieksza od b o " << a - b; }
    else { cout << "Liczba b jest wieksza od a o " << b - a; }

}

//2.Dla podanej liczby naturalnej wylicz sumę dzielników tej liczby.
void zadanie2() {
    int a, sumaDzielnikow = 0;
    cout << "Podaj liczbe: ";
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            sumaDzielnikow += i;
        }
    }
    cout << sumaDzielnikow;
}

//3.Sprawdź dla podanej liczby naturalnej >10 czy wszystkie cyfry tej liczby są parzyste.
void zadanie3() {
    int a;
    bool czyParzyste = true;
    cout << "Podaj liczbe a: ";
    cin >> a;
    while (a > 0) {
        if (a % 2 == 1) {
            czyParzyste = false;
        }
        a = a / 10;
    }
    if (czyParzyste) {
        cout << "Wszystkie parzyste";
    } else {
        cout << "Nie wszystkie sa parzyste";
    }
}

//4.Wypełnij tablicę jednowymiarową (100 elementową) losowymi (od 1 do 500) liczbami całkowitymi, wypisz zawartość
// tablicy na ekran i wypisz z jakiego przedziału liczby znajdują się w tablicy.
void zadanie4() {
    int Tab[100];
    srand(time(0));

    for (int i = 0; i < 100; i++) {
        Tab[i] = rand() % 500 + 1;
        cout << Tab[i] << " ";
    }
    int min = 500;
    int max = 0;
    for (int i = 0; i < 100; i++) {
        if (Tab[i] < min) {
            min = Tab[i];
        }
        if (Tab[i] > max) {
            max = Tab[i];
        }
    }
    cout << endl << "Liczby sa z przedzialu <" << min << "," << max << ">";

}

//5.Wypełnij tablicę dwuwymiarową, kwadratową o wymiarach 7x7 losowymi (od 1 do 10) liczbami całkowitymi. Wypisz
// zawartość tablicy na ekran. Wylicz ile razy wystąpiła w tablicy liczba 5.
void zadanie5() {
    int Tab[7][7];
    srand(time(0));
    int ile5=0;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            Tab[i][j] = rand() % 10 + 1;
            if(Tab[i][j]==5){
                ile5++;
            }
            cout << Tab[i][j] << " ";
        }
    }
    cout<<endl<<"ile 5: " <<ile5;



}


//6.Wczytaj z klawiatury napis pod zmienną typu string i wylicz ile w nim jest małych liter, ile wielkich a ile cyfr.
void zadanie6()
{
    string tekst;
    cout<<"Podaj tekst: ";
    cin>>tekst;
    int licznikMalych = 0, licznikDuzych = 0, licznikCyfr = 0;
    for(int i = 0;i<tekst.size();i++)
    {
        if(tekst[i]>=97 && tekst[i]<=122){
            licznikMalych ++;
        }
        if(tekst[i]>=65 && tekst[i]<=90){
            licznikDuzych ++;
        }
        if(tekst[i]>=48 && tekst[i]<=57){
            licznikCyfr ++;
        }
    }
    cout<<"Duzych jest: "<<licznikDuzych;
    cout<<endl<<"Malych jest: "<<licznikMalych;
    cout<<endl<<"Cyfr jest: "<<licznikCyfr;
}
//7.Wczytaj z klawiatury tekst pod zmienną typu string i zamień w nim wszystkie znaki niebędące literami znakiem $.
// Wypisz tekst na ekran.
void zadanie7()
{
    string tekst;
    cout<<"Podaj tekst: ";
    cin>>tekst;
    for(int i = 0;i<tekst.size();i++)
    {
        if(tekst[i]<65 || (tekst[i]>90 && tekst[i]<97) || tekst[i]>122)
        {
            tekst[i]='$';
        }
    }
    cout<<tekst;
}

//8.Wypełnij tablicę jednowymiarową (100 elementową) losowymi (od 1 do 35) liczbami całkowitymi, wypisz zawartość
// tablicy na ekran, ułóż w niej elementy od największego do najmniejszego i wypisz na ekran.
void zadanie8()
{

        int Tab[100];
        srand(time(0));

        for (int i = 0; i < 100; i++) {
            Tab[i] = rand() % 35 + 1;
            cout << Tab[i] << " ";
        }

    for (int i =0; i<100;i++){
        for (int j = i; j<100;j++){
            if (Tab[i]>Tab[j]){
                swap(Tab[i], Tab[j]);
            }
        }
    }

        cout<<endl;
        for(int i = 0;i < 100; i++)
        {
            cout<<Tab[i]<<" ";
        }


}



int main() {
    zadanie8();
    return 0;
}
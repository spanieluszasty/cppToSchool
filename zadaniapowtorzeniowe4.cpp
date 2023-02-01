#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void zadanko1()
{
    fstream f;
    int t;
    int licznikp = 0;
    int liczniknp = 0;
    f.open("liczby.txt", ios::in);
    while (f >> t)
    {
        if (t % 2 == 0)
        {
            licznikp++;
        }
        else
        {
            liczniknp++;
        }
    }
    f.close();
    cout<<"Parzystych jest: "<<licznikp<<", nieparzystych jest: "<<liczniknp;

}

int sumaCyfr(int t){
    int sum = 0;
    while(t>0)
    {
        sum += t%10;
        t /= 10;
    }
    return sum;
}

bool czyPierwsza(int t)
{
    for(int i=2;i<t;i++)
    {
        if(t%i==0)
        {
            return false;
        }
    }return true;
}
void zadanko2()
{
    fstream f;
    int licznik=0;
    int t;
    f.open("liczby.txt", ios::in);
    while (f >> t)
    {

        if(sumaCyfr(t) == 15)
        {
            cout<<t<<" ";
        }
    }
    f.close();
}
void zadanko3()
{
    fstream f,g;
    int licznik=0;
    int t;
    f.open("liczby.txt", ios::in);
    g.open("pierwsze.txt", ios::out);
    while (f >> t)
    {
        if(czyPierwsza(t))
        {
            licznik++;
            g << t <<endl;

        }

    }cout<<licznik;
    f.close();
    g.close();
}
void zadanko4()
{

    fstream f,g;
    int t;
    f.open("liczby.txt", ios::in);
    g.open("palindrom.txt", ios::out);
    while (f >> t)
    {
        if(2<=log10(t) && log10(t)<3 && t%10==t/100)
        {
            g << t <<endl;

        }

    }
    f.close();
    g.close();
}

int main()
{
   zadanko1();
   cout <<endl;
   zadanko2();
   cout <<endl;
   zadanko3();
   cout <<endl;
   zadanko4();
}

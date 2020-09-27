#include <iostream>

using namespace std;

int main()

{
    int liczba;
    float blad_dopuszczalny, a, b, wynik;

    cout << "Podaj liczbe z ktorej chcesz obliczyc pierwiastek: ";
    cin>>liczba;

    cout<<"Podaj blad dopuszczalny: ";
    cin>>blad_dopuszczalny;

    a=1;
    b=liczba;

    wynik=a-b;

    if(wynik<0)
    {
        wynik=wynik*-1;
    }

    while( wynik>blad_dopuszczalny )
    {
        a=(a+b)/2;
        b=liczba/a;

        wynik=a-b;

        if(wynik<0)
        {
            wynik=wynik*(-1);
        }

    }

    cout<<"Wynik to "<<a<<" lub "<<b;

    return 0;
}


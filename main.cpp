#include <iostream>
#include <cstdlib>//zeby exit dzialal

using namespace std;
int numer_miesiaca;

int main()
{

    cout << "Podaj numer miesiaca" << endl;
    if (!(cin>>numer_miesiaca))//jesli to co w nawiasie ma wartosc falsz to ta zmienna nie jest liczba, jest to tzw. metoda walidacji
        {
    cerr<<"To nie jest liczba";//wysyla do strumienia wejsciowego bledow
    exit(0);
        }


    switch(numer_miesiaca)
    {

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"Ten miesiac ma 31 dni"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Ten miesiac ma 30 dni."<<endl;
        break;
        case 2:
             int x;
             cout<<"Jaki mamy rok?"<<endl;
             cin>>x;

    if (((x%4 == 0)&&(x%100!=0)) || (x%400 == 0))//tp jest z wikipedii
        {cout<<"Ten miesiac jest przestepny"<<endl;

             cout<<"Ten miesiac ma 29 dni."<<endl;
        }
    else
        cout<<"Ten miesiac ma 28 dni"<<endl;
    break;
    default: cout<<"Niepoprawny numer miesiaca";


    }

    return 0;
}

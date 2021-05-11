#include <iostream>

using namespace std;
void printName()
{
    char name[20];
    char surname[20];
    cout<<"podaj imie autora: ";
    cin>>name;
    cout<<"podaj nazwisko autora: ";
    cin>>surname;
    cout<<"imie autora to: "<<name<<" a nazwisko: "<<surname;
}
int convert(int n)
{
    return n*1852;
}
void print1()
{
    cout<<"Entliczek pentliczek"<<endl;
}
void print2()
{
    cout<<"Czerwony stoliczek"<<endl;
}
int convert_age(int n)
{
    return n*12;
}
float CelsiusToFarenheit(float n)
{
return 1.8*n+32.0;
}
double convertLightYear(double n)
{
return n*63240;
}
void printTime(int n, int m)
{
cout<<n<<":"<<m;}
int main()
{
    int button;
    while(1)
    {
        cout<<"podaj numer zadania: "<<endl;
        cout<<"1) zadanie 1"<<endl;
        cout<<"2) zadanie 2"<<endl;
        cout<<"3) zadanie 3"<<endl;
        cout<<"4) zadanie 4"<<endl;
        cout<<"5) zadanie 5"<<endl;
        cout<<"6) zadanie 6"<<endl;
        cout<<"7) zadanie 7"<<endl;
        cout<<"8) wyjscie z programu"<<endl;
        cin>>button;
        switch(button)
        {
        case 1:
            printName();
            break;
        case 2:
            int n;
            cout<<"podaj ilosc mil morskich: ";
            cin>>n;
            cout<<n<<" mil morskich to: "<<convert(n)<<" metrow";
            break;
        case 3:
            print1();
            print1();
            print2();
            print2();
            break;
        case 4:
            int age;
            cout<<"podaj swoj wiek: ";
            cin>>age;
            cout<<"twoj wiek w miesiacach to: "<<convert_age(age);
            break;
        case 5:
        int temperature;
        cout<<"podaj temperature w stopniach cejsjusza: ";
        cin>>temperature;
        cout<<temperature<<" stopnie Celsjusza to "<<CelsiusToFarenheit(temperature)<<" stopnie Farenheita";
            break;
        case 6:
        double lightYear;
        cout<<"podaj ilosc lat swietlnych: ";
        cin>>lightYear;
        cout<<lightYear<<" lat swietlnych to: "<<convertLightYear(lightYear)<<" jednostek astronomicznych.";
            break;
        case 7:
        int hours,minutes;
        cout<<"podaj ilosc godzin: ";
        cin>>hours;
        cout<<"podaj ilosc minut: ";
        cin>>minutes;
        printTime(hours,minutes);
            break;
        case 8:
            return (0);
        default:
            cout<<"podaj jeszcze raz. "<<endl;
        }
        cout<<endl;
    }
    return 0;
}

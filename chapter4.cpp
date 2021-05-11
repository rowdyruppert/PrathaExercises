#include <iostream>
#include<string>
#include<cstring>
#include<vector>
#include<array>
using namespace std;
struct bar
{
    string name;
    double weight;
    int calories;
};
struct pizza
{
    string name;
    int diameter;
    int weight;
};
int main()
{
    int exerciseNumber;
    while(1)
    {

        cout<<"podaj numer zadania do wykoniania: "<<endl;
        cout<<"1. zadanie1"<<endl;
        cout<<"2. zadanie2"<<endl;
        cout<<"3. zadanie3"<<endl;
        cout<<"4. zadanie4"<<endl;
        cout<<"5. zadanie5"<<endl;
        cout<<"6. zadanie6"<<endl;
        cout<<"7. zadanie7"<<endl;
        cout<<"8. zadanie8"<<endl;
        cout<<"9. zadanie9"<<endl;
        cout<<"10. zadanie10"<<endl;
        cout<<"11. koniec programu"<<endl;
        cin>>exerciseNumber;
        switch(exerciseNumber)
        {
        case 2:
        {
            int grade,age;
            string name,surname;
            cout<<"podaj imie: "<<endl;
            cin.get();
            getline(cin,name);
            cout<<"podaj nazwisko: "<<endl;
            getline(cin,surname);
            cout<<"na jaka ocene zaslugujesz:"<<endl;
            cin>>grade;
            cout<<"podaj swoj wiek:"<<endl;
            cin>>age;
            cout<<"nazwisko i ime: "<<surname<<","<<name<<endl;
            cout<<"ocena: "<<grade-1<<endl;
            cout<<"wiek: "<<age<<endl;
            break;
        }
        case 1:
        {
            int grade,age;
            char name[30],surname[30];
            cout<<"podaj imie: "<<endl;
            cin.get();
            cin.getline(name,30);
            cout<<"podaj nazwisko: "<<endl;
            cin.getline(surname,30);
            cout<<"na jaka ocene zaslugujesz:"<<endl;
            cin>>grade;
            cout<<"podaj swoj wiek:"<<endl;
            cin>>age;
            cout<<"nazwisko i ime: "<<surname<<","<<name<<endl;
            cout<<"ocena: "<<grade-1<<endl;
            cout<<"wiek: "<<age<<endl;
            break;
        }
        case 3:
        {
            cout << "Podaj imię: ";
            char firstName[6];
            cin >> firstName;
            cout << "Podaj nazwisko: ";
            char lastName[14];
            cin >> lastName;
            strcat(lastName, ", ");
            strcat(lastName, firstName);
            cout << "Oto informacje zestawione w jeden napis: " << lastName;
            break;
        }
        case 4:
        {
            cout << "Podaj imię: ";
            string firstName;
            cin >> firstName;
            cout << "Podaj nazwisko: ";
            string lastName;
            cin >> lastName;
            lastName += ", " + firstName;
            cout << "Oto informacje zestawione w jeden napis: " << lastName;
            break;
        }
        case 5:
        {
            bar snack= {"mocha munch", 3.4, 333};
            cout<<"nazwa batonika: "<<snack.name<<endl;
            cout<<"waga batonika: "<<snack.weight<<endl;
            cout<<"liczba kalorii: "<<snack.calories<<endl;
            break;
        }
        case 6:
        {
            bar snacks[3]
            {
                {"Snikcers",22.5,555},
                {"Twix", 57.9,123},
                {"Mars",60.2, 333}
            };
            for(int i=0; i<3; i++)
            {

                cout<<"nazwa batonika #"<<i+1<<" "<<snacks[i].name<<endl;
                cout<<"waga batonika #"<<i+1<<" "<<snacks[i].weight<<endl;
                cout<<"kalorie batonika #"<<i+1<<" "<<snacks[i].calories<<endl;
            }
        }
        case 7:
        {
            pizza myPizza;
            cout<<"podaj nazwe pizzy: "<<endl;
            cin.get();
            getline(cin,myPizza.name);
            cout<<"podaj srednice pizzy:"<<endl;
            cin>>myPizza.diameter;
            cout<<"podaj wage pizzy: "<<endl;
            cin>>myPizza.weight;
            cout<<endl;
            cout<<"dane pizzy: "<<endl;
            cout<<"nazwa: "<<myPizza.name<<endl;
            cout<<"srednia: "<<myPizza.diameter<<endl;
            cout<<"waga: "<<myPizza.weight<<endl;
            break;
        }
        case 8:
        {
            pizza *ptr= new pizza;
            cout<<"podaj srednice pizzy:"<<endl;
            cin>>ptr->diameter;
            cout<<"podaj nazwe firmy produkujacej pizze: "<<endl;
            cin.get();
            getline(cin,ptr->name);
            cout<<"podaj wage pizzy:"<<endl;
            cin>>ptr->weight;
            cout<<"srednica pizzy:"<<ptr->diameter<<endl;
            cout<<"nazwa producenta:"<<ptr->name<<endl;
            cout<<"waga pizzy:"<<ptr->weight<<endl;
            break;
        }
        case 9:
        {
            bar *ptr = new bar[3]
            {
                {"Snikcers",22.5,555},
                {"Twix", 57.9,123},
                {"Mars",60.2, 333}
            };
            for(int i=0; i<3; i++)
            {

                cout<<"nazwa batonika #"<<i+1<<" "<<ptr[i].name<<endl;
                cout<<"waga batonika #"<<i+1<<" "<<ptr[i].weight<<endl;
                cout<<"kalorie batonika #"<<i+1<<" "<<ptr[i].calories<<endl;
            }
            break;
        }
        case 10:
        {
            cout<<"podaj trzy wyniki sprintu na 100 metrow"<<endl;
            array<double,3> results;
            for(int i=0;i<3;i++)
            {
                cout<<"wynik #"<<i+1<<" biegu: "<<endl;
                cin>>results[i];
            }
            cout<<"Podane wyniki biegow: "<<endl;
            for(int i=0;i<3;i++)
            {
                cout<<"bieg #"<<i+1<<" : "<<results[i]<<" sekund"<<endl;
            }
            cout<<"srednia tych czasow wynosi "<<(results[0]+results[1]+results[2])/3 <<" sekund"<<endl;
            break;
        }
        case 11:
        {
            return(0);
        }
        default:
        {
            cout<<"bledny numer zadania, podaj numer zadania jeszcze raz"<<endl;
        }
        }
    }
}

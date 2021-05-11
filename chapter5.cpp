#include <iostream>
#include<array>
#include<vector>
using namespace std;

struct vehicle
{
    string vehicleNumber;
    int productionYear;
};
vehicle *pt=new vehicle; // zdeklarowanie pointera na strukture globalnie aby wskaznik byl widoczny przez loadData i printData or main()
int sum(int a,int b)
{
    int total=0;
    if  (b>a)
    {
        for (int i=a; i<=b; i++) //sumowanie liczb z danego przedzialu
        {
            total+=i;
        }
    }
    else
    {
        swap(a,b);
        for (int i=a; i<=b; i++)
        {
            total+=i;
        }
    }
    return total;

}
void factorial (int a) //obliczanie silini z uzyciem klasy array, vector i dynamicznych tablic
{

    //  uzycie klasy array
    /*
        array<long double, 10> factorials;
        factorials[1] = factorials[0] = 1.0;
        for (int i = 2; i <= 10; i++)
            factorials[i] = i * factorials[i-1];
        for (int i = 0; i <= 10; i++)
            cout << i << "! = " << factorials[i] << endl;

    */

    //  uzycie klasy vector

    /*
        vector<long double> factorials(a);
        factorials[0] = factorials[1] = 1.0;
        for (int i = 2; i <=a; i++)
            factorials[i] = i * factorials[i-1];
        for (int i = 0; i <=a; i++)
            cout<<i<<" "<< factorials[i] << endl;
    */

    //  uzycie tablicy dynamicznej

    int *factorials;
    factorials=new int[a];
    factorials[0]=factorials[1]=1;
    for (int i = 2; i <=a; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i <=a; i++)
        cout<<i<<" "<< factorials[i] <<" "<<&factorials[i]<<endl;

}
void sum2()
{
    int a,sum=0;
    do
    {
        cin>>a;
        sum+=a;
    }
    while (a!=0);

    cout<<"suma liczb wynosi: "<<sum;
}
void printSheet() //nie moglem zrobic w trzech oddzielnych funkcjach //     funkcja do zadania 5
{
    float money=100;
    int counter=1;
    float cleoMoney=money;
    float dafneMoney=money;
    while (dafneMoney>=cleoMoney)
    {
        dafneMoney+=10;
        cleoMoney+=cleoMoney*0.05;
        cout<<"rok "<<counter<<"\tdafne: "<<dafneMoney<<"\t"<<"cleo: "<<cleoMoney<<endl;
        counter++;
    }
}
void bookSale() //funkcja do zadania numer 6
{
    string months[12]= {"styczen","luty","marzec","kwiecien","maj","czerwiec",
                        "lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien"
                       };
    int soldBooks[12];
    int sum=0;
    for (int i=0; i<12; i++)
    {
        cout<<"podaj ilosc ksizek sprzedanych w miesiacu: "<<months[i]<<endl;
        cin>>soldBooks[i];
        sum+=soldBooks[i];
    }
    cout<<"ilosc wszystkich sprzedanych ksiazek: "<<sum<<endl;
}
void bookSale2()
{
    string months[12]= {"styczen","luty","marzec","kwiecien","maj","czerwiec",
                        "lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien"
                       };
    int booksSold[12][3];
    int sum[3]= {0,0,0};
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<12; j++)
        {
            cout<<"podaj ilosc ksiazek sprzedanych w miesiacu: "<<months[j]<<" w #"<<i+1<<" roku: "<<endl;
            cin>>booksSold[i][j];
            sum[i]+=booksSold[i][j];
        }
        cout << "W ciagu roku #" << i + 1 << " sprzedano " << sum[i] << " egzemplarzy."<<endl;
    }
    cout << "W ciagu trzech lat uda³o sie ³acznie sprzedac " << sum[0] + sum[1] + sum[2] << " egzemplarzy."<<endl;
}
void structureLoadData(int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"podaj numer #"<<i+1<<" pojazdu: "<<endl;
        cin.get();
        getline(cin, pt->vehicleNumber);
        cout<<"podaj rok produkcji: #"<<i+1<<" pojazdu: "<<endl;
        cin>>pt->productionYear;
    }
}
void structurePrintData(int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"dane #"<<i+1<<" pojazdu: "<<endl;
        cout<<"numer rejsetracyjny: "<< pt->vehicleNumber <<endl;
        cout<<"rok prdukcji: "<<pt->productionYear<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
}
void howManyWord()
{

    string word;
    //string delimiter="gotowe";
    int counter=0;
    cin>>word;
    while (word!="gotowe")
    {
        cin>>word;
        counter++;
    }
    cout<<"podano: " << counter<<" slow."<<endl;

}
void stars(int n)
{
    for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n - i; k++)
		{
			cout << ".";
		}
		for (int k = n - i; k < n; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
    int choice;
    int a1,b1;
    int n;
    while(1)
    {
        cout<<"podaj zadanie jakie chcesz wykonac: "<<endl;
        cout<<"1) zadanie 1: "<<endl;
        cout<<"2) zadanie 2: "<<endl;
        cout<<"3) zadanie 3: "<<endl;
        cout<<"4) zadanie 4: "<<endl;
        cout<<"5) zadanie 5: "<<endl;
        cout<<"6) zadanie 6: "<<endl;
        cout<<"7) zadanie 7: "<<endl;
        cout<<"8) zadanie 8: "<<endl;
        //cout<<"9) zadanie 9: "<<endl;
        cout<<"10) zadanie 10: "<<endl;
        cout<<"11) koniec zadania: "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"podaj dwie liczby calkowite:"<<endl;
            cin>>a1>>b1;
            cout<<"suma liczb z tego przedzialu = "<<sum(a1,b1)<<endl;
            break;
        }
        case 2:
        {
            cout<<"podaj liczbe ktorej silnie chcesz obliczyc: "<<endl;
            cin>>n;
            factorial(n);
            break;
        }
        case 3:
        {
            cout<<"podaj liczby do zsumowania: ( wprowadzenie '0' zkonczenie programu )"<<endl;
            sum2();
            cout<<endl;
            break;
        }
        case 4:
        {
            printSheet();
            break;
        }
        case 5:
        {
            bookSale();
            break;
        }
        case 6:
        {
            bookSale2();
            break;
        }
        case 7:
        {
            int n;
            cout<<"podaj liczbe pojazdow do skataogowania: "<<endl;
            cin>>n;
            structureLoadData(n);
            structurePrintData(n);
            break;
        }
        case 8:
        {
            howManyWord();
            break;
        }
        case 10:
        {
            int n;
            cout<<"wprowadz liczbe wierszy: "<<endl;
            cin>>n;
            stars(n);
            break;
        }
        case 11:
        {
            return(0);
        }
        default:
        {
            cout<<"podaj jeszcze raz numer zadania: "<<endl;
        }
        }
    }
}

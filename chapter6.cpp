#include <iostream>
#include<cctype>
#include<array>
using namespace std;

void print(int n)
{
    char arr[n];
    char arr2[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for (int j=0; j<n; j++)
    {
        if(isdigit(arr[j]))
        {
            arr2[j]='0';
        }
        else if(isupper(arr[j]))
        {
            arr2[j]=tolower(arr[j]);
        }
        else if(islower(arr[j]))
        {
            arr2[j]=toupper(arr[j]);
        }
    }
    for(int k=0; k<n; k++)
    {
        if(arr2[k]=='0')
        {
            continue;
        }
        else
            cout<<arr2[k]<<" ";
    }
    cout<<endl;
}

void donations()
{
    array<double,10> arr;
    int counter=0;
    double value,sum=0;
    cout<<"podaj wartosc dotacji #"<<counter+1<<":"<<endl;
    cin>>value;
    while(cin.good() && counter <10 )
    {
        arr[counter]=value;
        sum+=value;//dodawanie do sredniej
        if (10 > ++counter)
        {
            cout<<"podaj wartosc dotacji #"<<counter+1<<":"<<endl;
            cin>>value;
        }
    }
    cout<<"srednia wartosc dotacji: "<<sum/counter<<endl;
    for (int j=0; j<counter; j++)
    {
        if(arr[counter] > sum/counter)
        {
            cout<<arr[counter]<<" "; //nie dziala????
        }
    }
}
void switchCase()
{
    char letter;
    cout<<"r) roslinozerca"<<"\t";
    cout<<"p) pianista"<<endl;
    cout<<"d) drzewo"<<"\t";
    cout<<"g) gra"<<endl;
    cout<<"podaj literke: "<<endl;
    cin>>letter;
    switch(letter)
    {
    case r

    }
}
int main()
{
    int choice;
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
        cout<<"9) zadanie 9: "<<endl;
        cout<<"10) koniec zadania: "<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            int n;
            cout<<"podaj ile chcesz znakow wprowadzic: "<<endl;
            cin>>n;
            print(n);
            break;
        }
        case 2:
        {
            donations();
            break;
        }
        case 3:
        {
            switchCase();
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        case 8:
        {
            break;
        }
        case 10:
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

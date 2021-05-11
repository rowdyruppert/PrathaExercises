#include <iostream>
using namespace std;
int convertHeightFeet(float n)
{
    return n/30.48;
}
int convertHeightInches(float n)
{
    int w= (int)n/30.48;
    int help = w*30.48;
    int help2=n-help;
    help2=help2/2.54;
    return help2;
}
float BMI(float a,float b,float c) //feet,inches,weight
{
    float totalHeight= (a*12+b)*0.0254;
    float totalWeight=c/2.2;
    return totalWeight/(totalHeight*totalHeight);

}
float Degree(float a, float b, float c) //degree,minutes,seconds
{
    float totalDegree=a;
    float totalSeconds=c+(b*60);
    float percentageHour=totalSeconds/3600;
    return totalDegree+percentageHour;
}
void dateTime(long long int n) //seconds ; days,hours,minutes,seconds
{
// 1 day -> 86400 seconds
// 1 hour -> 3600 seconds
// 1 minute -> 60 second
    int days=n/86400;
//int temp1=n%86400;
    int hours= (n%86400)/3600;
//temp2=(n%86400)%3600;
    int minutes=((n%86400)%3600)/60;
    int last=((n%86400)%3600)%60;
    cout<<n<<" sekund = "<<days<<" dni, "<<hours<<" godzin, "<<minutes<<" minut, "<<last<<" sekund."<<endl;
}
double population(long long int a,long long int b)// population Earth,population Poland
{
    return (double)b/a*100;
}
float howMuch(float a,float b) //kilometers,litres
{
    return 100*b/a;
}
float fuel(float a) //fuealUsage
{
    return 62.14/(a/3.785);
}
int main()
{
    while(1)
    {
        int button;
        float height,weight;
        int feet,inches,degree,minutes,seconds;
        long long int seconds2,populationEarth,populationPoland;
        cout<<"podaj numer zadania do wykonania: "<<endl;
        cout<<"1) zadanie 1:"<<endl;
        cout<<"2) zadanie 2:"<<endl;
        cout<<"3) zadanie 3:"<<endl;
        cout<<"4) zadanie 4:"<<endl;
        cout<<"5) zadanie 5:"<<endl;
        cout<<"6) zadanie 6:"<<endl;
        cout<<"7) zadanie 7:"<<endl;
        cout<<"8) zakoncz program"<<endl;
        cin>>button;
        switch(button)
        {
        case 1:
            cout<<"podaj wzrost w centymetrach: ";
            cin>>height;
            cout<<"twoj wzrost w centymetrach wynosi: "<<height<<" natomiast w stopach i calach to: "<<convertHeightFeet(height)<<"_"<<convertHeightInches(height)<<endl;
            break;
        case 2:
            cout<<"podaj wzrost w stopach i calach: ";
            cin>>feet>>inches;
            cout<<"podaj mase w funtach: ";
            cin>>weight;
            cout<<"BMI wynosi: "<<BMI(feet,inches,weight)<<endl;
            break;
        case 3:
            cout<<"podaj dlugosc geograficzna w stopniach minutach i sekundach: ";
            cin>>degree>>minutes>>seconds;
            cout<<degree<<"stopni, "<<minutes<<"minut, "<<seconds<<"sekund = "<<Degree(degree,minutes,seconds)<<endl;
            break;
        case 4:
            cout<<"podaj liczbe sekund: ";
            cin>>seconds2;
            dateTime(seconds2);
            break;
        case 5:
            cout<<"podaj liczbe ludnosci swiata: ";
            cin>>populationEarth;
            cout<<"podaj populacje Polski: ";
            cin>>populationPoland;
            cout<<"populacja Polski wynosi: "<<population(populationEarth,populationPoland)<<"% populacji swiata."<<endl;
            break;
        case 6:
        float litres,kilometers;
        cout<<"podaj ile kilometrow przejechano: ";
        cin>>kilometers;
        cout<<"podaj ile litrow benzyny zuzyto: ";
        cin>>litres;
        //wypisanie ile mil na 1 galonie?
        cout<<"zuzycie samochodu wynosi "<<howMuch(kilometers,litres)<<" l/100km"<<endl;
            break;
        case 7:
        float fuelUsage;
        cout<<"podaj wartosc zuzycia benzyny w l/100km: ";
        cin>>fuelUsage;
        cout<<"zuzycie benzyny w milach na galon wynosi: "<<fuel(fuelUsage)<<endl;
            break;
        case 8:
            return (0);
        default:
            cout<<"nieprawidowy numer.";
            break;
            return 0;
        }
    }
}

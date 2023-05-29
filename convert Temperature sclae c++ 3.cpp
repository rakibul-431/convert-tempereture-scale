#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float c,f,k;
    cout<<"If you want Celsius to Fahrenheit  value you press CF  "<<endl;
    cout<<"If you want Celsius to Kelvin value you press CK "<<endl;
    cout<<"If you want Fahrenheit to Celsius value you press FC  "<<endl;
    cout<<"If you want Fahrenheit to kelvin value you press FK  "<<endl;
    cout<<"If you want Kelvin to Celsius value you press KC "<<endl;
    cout<<"If you want Kelvin to Fahrenheit value you press KF  "<<endl;

    string cf = "CF", ck = "CK", fc = "FC", fk = "FK", kc = "KC", kf = "KF";
    string h;
    //char d;

    cout<<endl<<"You press what you want:";
    getline(cin,h);
    if(h==cf)
    {
        cout<<"You Enter Celsius value :";
        float c;
        cin>>c;//Enter Celsius value.
        float fah=1.8*c+32;//Calculate Fahrenheit value.
        cout<<"Fahrenheit value:"<<fah;//print Fahrenheit value.
        cout<<endl<<"Successfully print Fahrenheit value.....";
    }
    else if(h==ck){
        cout<<"Enter Celsius value: ";
        float c;
        cin>>c;//Enter Celsius value.
        float kel=c+273;//Calculate Kelvin value.
        cout<<"Kelvin value :"<<kel;//print kelvin value.
        cout<<endl<<endl<<"Successfully print Kelvin value......";

    }
    else if(h==fc){
        cout<<"Enter Fahrenheit value :";
        float f;
        cin>>f;//Enter Fahrenheit value.
        float cel=1.8*(f-32);//Calculate Celsius value.
        cout<<"Celsius value :"<<cel;
        cout<<endl<<"Successfully print Celsius value.....";
    }
    else if(h==fk){
        cout<<"Enter Fahrenheit value :";
        float f;
        cin>>f;//Enter Fahrenheit value.
        float kel=(5*(f-32)+2457)/9;//Calculate Kelvin value.
        cout<<"Kelvin value :"<<kel;//print Kelvin value.
        cout<<endl<<"Successfully print kelvin value.....";
    }
    else if(h==kc){
        cout<<"Enter Kelvin value :";
        float k;
        cin>>k;//Enter Kelvin value.
        float cel=k-273;//Calculate Celsius value.
        cout<<"Celsius value :"<<cel;//print Celsius value.
        cout<<endl<<"Successfully print Celsius value......";
    }
    else if(h==kf){
        cout<<"Enter Kelvin value :";
        float k;
        cin>>k;//Enter Kelvin value.
        float fah=(9*(k-273)+160)/5;//Calculate Fahrenheit value.
        cout<<"Fahrenheit value :"<<fah;//print Fahrenheit value.
        cout<<endl<<"Successfully print Fahrenheit value .....";

    }

    getch();
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
string lectura1, lectura2;
cout<<"\nIngrese la palabra: ";
cin>>lectura1;
cin.ignore(256,'\n');
cout<<"\nIngrese nuevamente la palabra: ";
getline(cin,lectura2);
cout<<"\nCapturando con cin>>lectura1 se obtuvo:        "<<lectura1<<endl;
cout<<"Capturando con getline(cin,lectura2) se obtuvo: "<<lectura2<<endl;
return 0;
}

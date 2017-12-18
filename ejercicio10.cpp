#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
string str="Hola!";
 

cout<<"\nLa longitud antes de usar resize() es: "<<str.length()<<endl; 
str.resize(str.length()*2);
cout<<"La nueva longitud de la cadena str es: "<<str.length()<<endl;
cout<<"La cadena continua siendo: "<<str<<endl;
 
return 0;
}

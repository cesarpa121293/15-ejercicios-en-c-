#include <iostream>
#include <string>
using namespace std;
int main()
{
string str1="Hola Mundo";
string str2;
str2=str1.substr(5,5); 
cout<<"El contenido de str1 es: "<<str1<<endl;
cout<<"El contenido de str2 es: "<<str2<<endl;
return 0;
}

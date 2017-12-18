#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
string str1="Cesar";
string str2="Julio";
cout<<"\nstr1 = "<<str1<<endl<<endl;
cout<<"str2 = "<<str2<<endl<<endl;
str1.swap(str2);
cout<<"\t\tdespues del intercambio.."<<endl<<endl;
cout<<"\nstr1 = "<<str1<<endl<<endl;
cout<<"str2 = "<<str2<<endl<<endl;
 
return 0;
}

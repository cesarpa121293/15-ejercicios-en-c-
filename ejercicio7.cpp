#include <iostream>
#include <string>
using namespace std;
int main()
{
string str = "abcdefgh";
if(str.find("wkf")==string::npos)
{
cout<<"cadena no encontrada"<<endl;
}
else
 {
	cout<<"cadena encontrada.."<<endl;
 }
 
cout<<str.find_first_of("cde")<<endl; 
 
cout<<str.find_last_of("cde")<<endl; 
 
cout<<str.find_first_not_of("cde")<<endl;
 
cout<<str.find_last_not_of("cde")<<endl; 
 
return 0;
}

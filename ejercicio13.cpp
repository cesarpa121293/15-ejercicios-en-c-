#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str="";
    if(str.empty()==true)
    {
        cout<<"\nLa cadena str se encuentra vacia.."<<endl<<endl;
    }
    else
    {
        cout<<"La cadena str contiene informacion.."<<endl;
    }
 
    return 0;
}

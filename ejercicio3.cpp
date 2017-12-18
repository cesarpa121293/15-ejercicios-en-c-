#include <string> 
 #include <iostream> 
 using namespace std; 
  main() 
 { 
  cout<<"********************************************\n";
  cout<<"* universidad Alva Edison                  *\n";
  cout<<"* Cesar Palalia Arce                       *\n";
  cout<<"* Metodologia de la programacion           *\n";
  cout<<"* ID:F170012                               *\n";
  cout<<"********************************************\n";
  string texto1, texto2 = "Hola ", texto3("Que tal"); 
 
  texto1 = texto2 + texto3 + " estas? "; 
  cout << texto1 << "\n"; 
  string subcadena (texto1, 2, 6); 
  cout << subcadena << "\n"; 
  string subcadena2; 
  subcadena2 = texto1.substr(0, 5); 
  texto1.insert(5, "Juan "); 
  cout << texto1 << "\n"; 
  texto2.replace(1, 2, "ad"); 
  cout << texto2 << "\n"; 
  cout << "La longitud de texto1 es " << texto1.size() << "\n"; 
  cout << "La tercera letra de texto1 es " << texto1[2] 
  cout<< " o bien " << texto1.at(2) << "\n"; 
    if (texto2 == "Hada ")
       {
   
        cout << "Texto 2 es Hada\n";
       }
 }  

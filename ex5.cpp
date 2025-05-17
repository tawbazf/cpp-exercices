//Écrire un programme en C++  qui permet d'afficher le plus grand de trois entiers saisis  au clavier.
#include <iostream>
 using namespace std;
 int main() {
 int A,B,C,Max;
 cout<<" Entrer A:" ; cin>>A;
 cout<<" Entrer B:" ; cin>>B;
 cout<<" Entrer C:" ; cin>>C;
    Max = A ; 
 if (B >= Max) 
	    Max = B ;
 if (C >= Max) 
      Max = C ;
 cout<<" Le Max est "<<Max;
 return 0; 
 }

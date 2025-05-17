//Écrire un programme en C++  qui permet de calculer la moyenne de trois entiers saisis par l'utilisateur. 
#include <iostream>
 using namespace std;
 int main() {
 int A,B,C,moyenne;
 cout<<" Entrer A:"; cin>>A;
 cout<<" Entrer B:"; cin>>B;
 cout<<" Entrer C:"; cin>>C;
     moyenne = (A+B+C)/3 ; 
 cout<<"La somme egal:"<<moyenne;
 return 0; 
 }
/*Écrire un programme en C++ qui demande l'âge d'un enfant et permet d'informer de sa catégorie sachant que les catégories sont les suivantes: 
"poussin de 6 a 7 ans"   
"pupille de 8 a 9 ans "   
"minime de 10 a 11 ans "  
" cadet après 12 ans ".*/
#include <iostream>
 using namespace std;
 int main() {
 float age;
  cout<<" Entrer votre age :"; 
  cin>>age;
  if( age >= 6  &&  age <= 7) 
  cout<<" Vous etes poussin ";
  if( age >= 8  &&  age <= 9 ) 
  cout<<" Vous etes pupille ";
  if( age >= 10  &&  age <= 11)
  cout<<" Vous etes minime ";
  if( age >= 12 ) 
  cout<<" Vous etes Cadet "; 
 return 0; 
 }
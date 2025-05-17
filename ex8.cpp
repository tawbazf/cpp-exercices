//Écrire un programme  qui permet de calculer la valeur absolue d'un entier saisi  par l'utilisateur.
#include <iostream>
 using namespace std;
 int main(){
 int m ;
 cout<<" Entrer un nombre :" ; cin>>m;
 if( m >= 0)
  cout<<"La valeur absolue de "<<m<<"est"<<m;
 else 
  cout<<"La valeur absolue de "<<m<<" est "<<-m;
  return 0; 
 }

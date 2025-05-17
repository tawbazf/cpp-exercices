//Écrire un programme  qui permet de vérifier une note saisie au  clavier (si la note supérieur à 10 alors il affiche validé sinon non validé  (NB : la note comprise entre 0 et 20 ).
#include <iostream>
 using namespace std;
 int main() {
 float note ;
 cout<<" Entrer la note : "; 
 cin>> note;

 if ( note < 0  || note > 20)
      cout<<"Erreur !!" ;
 if ( note >= 0  && note < 10)
      cout<<" Non Valide" ;
 if ( note >= 10  && note <= 20)
      cout<<" Valide";
 return 0; 
 }
/*
Le centre de photocopie facture 0,25 DH  pour les 10 premières photocopies, 0,20 DH les vingt suivantes et 0,10 DH  au-delà. Ecrire un programme  qui demande à l’utilisateur de saisir le nombre de photocopies effectuées et qui affiche la facture correspondante.
*/

#include <iostream>
 using namespace std; 
 int main() {
 int Nb_papies;	
 float prix;
 cout<<"Entrer le nombre de photocopies ";
 cin>>Nb_papies;
  if ( Nb_papies <= 10 ) 
   prix = Nb_papies *0.25;
  if ( Nb_papies > 10 && Nb_papies<= 20 ) 
   prix = Nb_papies *0.20;
  if ( Nb_papies > 20  ) 
   prix = Nb_papies *0.10;
   
 cout<<"Le prix total est: "<<prix<<" Dh";   
 return 0; 
 }
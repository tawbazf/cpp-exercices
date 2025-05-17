/*
Une boutique propose à ces clients, une réduction de 15% pour les montants d’achat supérieurs à 200 dh. Écrire un programme  permettant de saisir le prix total HT et de calculer le  montant TTC en prenant en compte la réduction et la TVA=20%. */
#include <iostream>
 using namespace std;
 int main() {
 float Prix_HT , Prix_TTC ;
 cout<<" Entrer le montant HT:"; cin>>Prix_HT;
 Prix_TTC = Prix_HT + Prix_HT*0.2 ;
  if ( Prix_TTC > 200 ) {
     Prix_TTC = Prix_TTC - Prix_TTC*0.15;
     cout<<"le montant TTC est: "<<Prix_TTC;
  }else{ 
     cout<<"le montant TTC est: "<<Prix_TTC;
  }
 return 0; 
 }
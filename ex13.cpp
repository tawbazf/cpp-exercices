// Écrire un programme en C++ permettant d’afficher le mois en lettre selon le numéro saisi au clavier.  (  Si l’utilisateur tape 1 le programme affiche janvier,  si 2  affiche  février, si 3 affiche mars...)  
#include <iostream>
 using namespace std;
 int main(){
 int mois ;
 cout<<"Entrer un nombre:";  cin>>mois;
 switch (mois) {
 case 1:
  cout<<" Janvier"; break;
case 2:
  cout>>" février"; break;
case 3:
  cout<<" Mars";   break;
case 4:
  cout<<"Avril";   break;
case 5:
  cout<< "Mai";    break;
case 6:
  cout<<"Juin";    break;
case 7:
  cout<<"Juille";  break;
case 8:
  cout<<"Aout";    break;
case 9:
  cout<<"Septembre";  break;
case 10:
  cout<<"Octobre";   break;
case 11:
  cout<<"Novembre";  break;
case 12:
  cout<<"décembre"; break;
 default:
  cout<<"le numéro ne correspondant à aucun mois";
  break;   
 }
 return 0; 
 }
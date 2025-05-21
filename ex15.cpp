//Écrire une classe « Somme » ayant deux variables « n1 » et « n2 » et une fonction membre « som() » qui calcule la somme. Dans la méthode principale main demandez à l’utilisateur d’entrez deux entiers et passez-les au constructeur par défaut de la classe « Somme » et afficher le résultat de l’addition des deux nombres.
#include<iostream>
using namespace std;
class Somme{
    public : int n1, n2 ;
    int  som(){
        return n1+n2;
    }
}; 
   int main (){
Somme S;
cout<< "veuillez entrer le  premier nombre ";
cin>>S.n1;
cout<< "veuillez entrer le deuxieme nombre ";
cin>>S.n2;
cout<<"SOMME : "<< S.som();
}
//autre methode
#include <iostream>
using namespace std;

class Somme{
   public:
   int n1, n2;

   Somme(int nbr1, int nbr2){
      n1=nbr1;
      n2=nbr2;
   }

   int som(){
      return n1 + n2;
   }
};

int main (){
int n1, n2;
  cout<<"Entrez le premier nombre :";
  cin>>n1;
cout<<"Entrez le deuxième nombre :";
  cin>>n2;
Somme obj(n1,n2);
cout<<"Le résultat de l'addition est :"<< obj.som() <<"\n";
return 0;
}
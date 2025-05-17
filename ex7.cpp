/*
Écrire un programme   qui demande deux nombres m et n à l’utilisateur et l’informe ensuite si le produit de ces deux nombres est positif ou négatif. On inclut dans le programme le cas où le produit peut être nul.
*/
#include <iostream>
 using namespace std;
 int main() {
 float m,n ;
 cout<<" Entrer un nombre:"; cin>>m;
 cout<<" Entrer un nombre:"; cin>>n;
 if( n == 0 || m == 0)
    cout<<"Le produit est nul!!";
 if ( m*n < 0)
    cout<<"Le produit est negatif";
 if ( m*n > 0)  
    cout<<"Le produit  est positif";
 return 0; 
 }
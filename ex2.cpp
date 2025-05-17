//Écrire  un programme  permettant de saisir deux nombres et d'afficher leur produit.
#include <iostream>
int main (){
    float a , b , p;
std::cout<<"entrer un nombre 1" ;
 std::cin>>a;
std::cout<<"entrer un nombre  2"; 
 std::cin>>b;
p=a*b;
std::cout<<"le produit est" <<p;
    return 0;
}
//autre methode
#include <iostream>
 using namespace std;
 int main() {
 float m,n,p ;
  cout<<" Entrer un nombre:"; cin>>m ;
  cout<<" Entrer un nombre:"; cin>>n ;
       p = m*n ;
  cout<<"le produit de "<<m<<" et "<<n<<" = "<<p ;
  return 0 ;   
 }
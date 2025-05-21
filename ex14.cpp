// Écrire une classe «Rectangle» ayant deux variables « a » et « b » et une fonction membre « surface() » qui retournera la surface du rectangle.
#include<iostream>
using namespace std;

class Rectangle {

   public: int a,b;
   int surface(){
     return a*b;
   }
};

int main() {
Rectangle rectangle;
cout<<"Entrez la largeur(a) du rectangle :"<<endl;
  cin>>rectangle.a;
cout<<"Entrez la longueur(b) du rectangle:"<<endl;
  cin>>rectangle.b;
 
  cout<<"Surface : "<< rectangle.surface();
   return 0;
}


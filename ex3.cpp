//Écrire  un programme en C++  qui  permet d'échanger le contenu de deux entiers  A et B  saisis par l'utilisateur. et afficher  ces entiers  après l’échange.  
#include <iostream>
using namespace std;
int main (){
    float a,b,tmp;
    cout << "entrer un nombre 1";
    cin>>a;
    cout << "entrer un nombre 2";
    cin>>b;
    tmp=a;
    a=b;
    b=tmp;
    cout << "la nouvelle valeur de a est"<<a;
    cout << "la nouvelle valeur de b est"<<b;
    return 0;
}
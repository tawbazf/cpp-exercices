//Écrire un un programme en C++ qui  permet d'afficher si un nombre  entier saisi au  clavier est pair ou impair.
#include <iostream>
using namespace std;

int main() {
    int nbr;
    cout << "Entrer un nombre : ";
    cin >> nbr;

    if (nbr % 2 == 0)
        cout << "Le nombre " << nbr << " est pair." << endl;
    else
        cout << "Le nombre " << nbr << " est impair." << endl;

    return 0;
}

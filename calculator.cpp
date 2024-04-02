#include<iostream>
#include<math.h> // Inclure le bibliothèque pour les fonctions mathématiques

using namespace std;

int main(){
    char operation;
    double nombre1, nombre2, resultat, indice;

    // Une boucle principale qui va permettre à l'utilisateur de saisir des opérations
    while (true){
        cout << "Choisissez une opération : \n";
        cout << "\t + : Addition \n\t - : Soustraction \n\t * : Multiplication \n\t / : Division\n";

        cout << "\t Tm : Table de multiplication \n\t P : Puissance \n\t R : Racine carré \n\t q : Quitter\n";
        cin >> operation;

        if (operation == 'q'){
            cout << "Fin du programme. \n";
            break;
        }

        switch (operation)
        {
        case '+' :
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxième nombre : ";
            cin >> nombre2;
            resultat = nombre1 + nombre2;

            cout << "Résultat : " << resultat << endl;
            break;
        
        case '-':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxième nombre : ";
            cin >> nombre2;
            resultat = nombre1 - nombre2;

            cout << "Résultat : " << resultat << endl;
            break;
        case '*':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxième nombre : ";
            cin >> nombre2;
            resultat = nombre1 * nombre2;

            cout << "Résultat : " << resultat << endl;
            break;
        case '/':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxième nombre : ";
            cin >> nombre2;
            if (nombre2 != 0){
                resultat = nombre1 / nombre2;

            cout << "Résultat : " << resultat << endl;
            }
            else {
                cout << "Erreur de division par Zéro.\n";
            }
            break;

        case 'T':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez le deuxième nombre : ";
            cin >> nombre2;
            cout << "Table de Multiplication de " << nombre1 << " : \n";
            for (int i =0; i<= nombre2; i++){
                cout << nombre1 << " x " << i << " = " << nombre1 * i << endl;
            }
            break;

        case 'P' : 
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez l'indice : ";
            cin >> indice;
            resultat = pow(nombre1, indice);
            cout << "Résultat : " << resultat << endl;
            break;

        case 'R':
            cout << "Entrez le premier nombre : ";
            cin >> nombre1;
            cout << "Entrez l'indice : ";
            cin >> indice;
            if (nombre1 >= 0){
                resultat = pow(nombre1, 1/indice);
                cout << "Résultat : " << resultat << endl;

            }
            else{
                cout << "Erreur ! Il n'existe pas la racine d'un nombre négatif.\n";
            }
            break;

        default:
            cout << " Opération non valide. veuillez réessayer encore";
            break;
        }
    }

    return 0;

}
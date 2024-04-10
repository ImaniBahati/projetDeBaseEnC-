#include <iostream>
#include <vector>

class Livre{
public:
    std::string titre;
    std::string auteur;
    bool emprunte = false;

};

class Utilisateur{
public:
    std:: string nom;

};

class Emprunt{
public:
    Livre* livreEmprunte;
    Utilisateur* emprunteur;

};

class Bibliotheque{
private:
    std:: vector<Livre> livres;
    std:: vector<Utilisateur> utilisateurs;
    std:: vector<Emprunt> emprunts;

public:
    void ajouteLivre(const Livre& livre){
        livres.push_back(livre);
    }
    void ajouterUtilisateur(const Utilisateur& utilisateur){
        utilisateurs.push_back(utilisateur);
    }

    void emprunterLivre(Livre& livre, Utilisateur& utilisateur){
        if (!livre.emprunte){
            livre.emprunte = true;
            Emprunt emprunt = {&livre, &utilisateur};
            emprunts.push_back(emprunt);
            std::cout << "Le livre \""<< livre.titre <<"\" a ete emprunté par "<< utilisateur.nom << std::endl;

        }

        else {
            std::cout <<"Le livre \"" << livre.titre <<"\" est deja emprunter" << std::endl;
        }
    }

    void retournerLivre(Livre& livre){
        livre.emprunte = false;
        
        for (auto i = emprunts.begin(); i != emprunts.end(); i++){
            if (i->livreEmprunte == &livre){
                emprunts.erase(i);
                break;
            }
        }
        std::cout <<"Le livre \"" << livre.titre << "\" a ete retourné " << std::endl;
    }
};

int main(){
    Bibliotheque bibliotheque;

    Livre livre1 = {"Relativite Restreinte", "Albert Enstein"};
    bibliotheque.ajouteLivre(livre1);

    Utilisateur Utilisateur1 = {"Faith"};
    bibliotheque.ajouterUtilisateur(Utilisateur1);

    bibliotheque.emprunterLivre(livre1, Utilisateur1);
    bibliotheque.retournerLivre(livre1);

    return 0;
}
#include <iostream>

using namespace std;


class Rectangle {
private:
    double longueur;
    double largeur;
    double perimetre;
    double surface;

public:
    Rectangle(double longueur = 1, double largeur = 1) {
        this->setLongueur(longueur);
        this->setLargeur(largeur);
        this->setPerimetre();
        this->setSurface();
    }

    double getLongueur() {
        return this->longueur;
    }

    double getLargeur() {
        return this->largeur;
    }

    void setLongueur(double longueur) {
        this->longueur = longueur;
    }

    void setLargeur(double largeur) {
        this->largeur = largeur;
    }

    void setPerimetre() {
        double perimetre = this->getLongueur() + this->getLargeur() / 2;
        this->perimetre = perimetre;
    }

    double getPerimetre() {
        return this->perimetre;
    }

    void setSurface() {
        double surface = this->getLongueur() * this->getLargeur();
        this->surface = surface;
    }

    double getSurface() {
        return this->surface;
    }

};


int main() {
    cout << "Veuillez entrer la longueur du rectangle : "<<endl;
    double longueur;
    cin>>longueur;
    cout << "Veuillez entrer la largeur du rectangle : "<<endl;
    double largeur;
    cin>>largeur;
    Rectangle ecole(longueur, largeur);
    cout << "Le périmètre correspondant aux valeurs données est : " << ecole.getPerimetre() << "m" << endl;
    cout << "La surface correspondant aux valeurs données est : " << ecole.getSurface() << "m" << endl;
    cout << "La longueur est : " << ecole.getLongueur() << "m" << endl;
    cout << "La largeur est : " << ecole.getLargeur() << "m" << endl;
    return 0;
}
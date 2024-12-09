#include "carte.h"
#include "JeuDeCartes.h"

c_Carte::c_Carte(int valeur, const std::string& forme) : m_valeur(valeur), m_forme(forme) {}

bool c_Carte::setValeur(int valeur) {
    if (valeur >= 1 && valeur <= 13) {
        m_valeur = valeur;
        return true;
    } else {
        return false;
    }
}
bool c_Carte::setForme(const std::string& forme) {
    m_forme = forme;
    return true;
}
short c_Carte::getValeur() const {
    return m_valeur;
}
short c_Carte::getForme() const {
    return m_forme;
}

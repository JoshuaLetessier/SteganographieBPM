#include "ConvertStringToBin.h"

std::vector<bool> ConvertStringToBin::Execute(const std::string& text) const {
    std::vector<bool> binaire;

    if (text.empty()) {
        std::cerr << "Erreur : Le texte est vide." << std::endl;
        return binaire; 
    }

    for (char c : text) {
        std::bitset<8> bits(static_cast<unsigned char>(c));

        for (int j = 7; j >= 0; --j) {  
            binaire.push_back(bits[j]);
        }
    }

    return binaire;
}

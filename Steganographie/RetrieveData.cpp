#include "RetrieveData.h"

std::vector<bool> Excute(const std::vector<Pixel>& pixels, size_t dataSizeInBits)
{
    std::vector<bool> retrievedBits;

    size_t bitIndex = 0;

    for (size_t i = 0; i < pixels.size() && bitIndex < dataSizeInBits; ++i) {
        // Récupérer les deux bits de poids faible du canal rouge
        if (bitIndex < dataSizeInBits) {
            retrievedBits.push_back((pixels[i].red >> 1) & 1); // Premier bit (le plus à droite)
            if (bitIndex + 1 < dataSizeInBits) {
                retrievedBits.push_back(pixels[i].red & 1); // Deuxième bit
                bitIndex += 2;
            }
            else {
                bitIndex++;
            }
        }

        // Récupérer le bit de poids faible du canal vert
        if (bitIndex < dataSizeInBits) {
            retrievedBits.push_back(pixels[i].green & 1);
            bitIndex++;
        }

        // Récupérer le bit de poids faible du canal bleu
        if (bitIndex < dataSizeInBits) {
            retrievedBits.push_back(pixels[i].blue & 1);
            bitIndex++;
        }
    }

    return retrievedBits; // Retourne le vecteur de bits extraits
}



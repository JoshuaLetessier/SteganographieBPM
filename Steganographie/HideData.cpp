#include "HideData.h"

std::vector<Pixel> HideData::Execute(std::vector<bool> binaires, std::vector<Pixel>& pixels)
{
    // Calculer le nombre total de bits modifiables (2 pour rouge, 1 pour vert et bleu)
	// mettre le test avant pour lancer l'agrandissement de l'image si nécessaire
	// demande l'autorisation de l'utilisateur pour l'agrandissement
    //if (binaires.size() > pixels.size() * 4) { // Chaque pixel modifie 4 bits au total
    //    std::cerr << "Erreur : Le texte est trop long pour l'image." << std::endl;
    //    return;
    //}

    size_t bitIndex = 0; // Index pour parcourir le vecteur de bits (binaires)

    for (size_t i = 0; i < pixels.size() && bitIndex < binaires.size(); ++i) {
        // Modifier les deux bits de poids faible du canal rouge
        if (bitIndex < binaires.size()) {
            // Remplacer les deux LSB avec deux bits de "binaires"
            pixels[i].red = (pixels[i].red & 0xFC) | ((binaires[bitIndex] << 1) | binaires[bitIndex + 1]);
            bitIndex += 2;
        }

        // Modifier le LSB du canal vert
        if (bitIndex < binaires.size()) {
            pixels[i].green = (pixels[i].green & 0xFE) | binaires[bitIndex]; // Remplacer LSB
            bitIndex++;
        }

        // Modifier le LSB du canal bleu
        if (bitIndex < binaires.size()) {
            pixels[i].blue = (pixels[i].blue & 0xFE) | binaires[bitIndex]; // Remplacer LSB
            bitIndex++;
        }
    }

	return pixels;
}

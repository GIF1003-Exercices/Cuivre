//
// Created by Pascal Charpentier on 2023-02-18.
//

#ifndef CUIVRE_TUBA_H
#define CUIVRE_TUBA_H

#include "Cuivre.h"

class Tuba : public Cuivre {
public:
    Tuba() : Cuivre(), sourdine(false) {}

    void basculeSourdine() {sourdine = !sourdine ; }

    bool lireSourdine() const {return sourdine ; }

    bool operator == (const Tuba& rhs) {
        return Cuivre::operator==(rhs) && sourdine == rhs.sourdine ;
    }

    std::string emettreUnSon() const override {
        return "Pon!" ;
    }

private:
    bool sourdine ;
};


#endif //CUIVRE_TUBA_H

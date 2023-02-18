//
// Created by Pascal Charpentier on 2023-02-18.
//

#ifndef CUIVRE_CUIVRE_H
#define CUIVRE_CUIVRE_H

#include <array>
#include <string>


class Cuivre {
private:
    static constexpr size_t npistons = 3 ;

public:
    Cuivre() = default ;

    void pressePiston(size_t numero) {
        pistons.at(numero) = true ;
    }

    bool lirePiston(size_t numero) const {
        return pistons.at(numero) ;
    }

    virtual std::string emettreUnSon() const = 0 ;

    bool operator == (const Cuivre& rhs) { return pistons == rhs.pistons ; }

private:
    std::array<bool, npistons> pistons ;

};


#endif //CUIVRE_CUIVRE_H

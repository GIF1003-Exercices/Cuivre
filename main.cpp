#include <iostream>
#include "Tuba.h"

int main() {
    Tuba grosTuba ;
    Tuba petitTuba ;

    grosTuba.basculeSourdine() ;
    petitTuba.basculeSourdine() ;

    grosTuba.pressePiston(1) ;
    petitTuba.pressePiston(1) ;

    std::cout << "Mêmes pistons, même sourdine --> " << (grosTuba == petitTuba) << std::endl ;

    petitTuba.basculeSourdine() ;
    std::cout << "Même pistons, sourdine différente --> " << (grosTuba == petitTuba) << std::endl ;

    petitTuba.basculeSourdine() ;
    petitTuba.pressePiston(2) ;

    std::cout << "Pistons différents --> " << (grosTuba == petitTuba) << std::endl ;
    return 0;
}

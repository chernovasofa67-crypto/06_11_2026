//
// Created by Евгения on 05.11.2026.
//

#include "Eagle.h"
#include <iostream>

namespace Birds {
    Eagle::Eagle() : Animal("Орел") {}

    void Eagle::makeSound() const {
        std::cout << "орел: крик орла!" << std::endl;
    }
}

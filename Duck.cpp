//
// Created by Евгения on 05.11.2026.
//
#include "Duck.h"
#include <iostream>

namespace Birds {
    namespace Domestic {
        Duck::Duck() : Animal("Качка") {}

        void Duck::makeSound() const {
            std::cout << "качка: кря-кря!" << std::endl;
        }
    }
}



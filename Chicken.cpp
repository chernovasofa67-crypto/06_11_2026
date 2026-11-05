//
// Created by Евгения on 05.11.2026.
//
#include "Chicken.h"
#include <iostream>

namespace Birds {
    namespace Domestic {
        Chicken::Chicken() : Animal("Курка") {}

        void Chicken::makeSound() const {
            std::cout << "курка: Кудкудах!" << std::endl;
        }
    }
}

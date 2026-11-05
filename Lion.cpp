//
// Created by Евгения on 05.11.2026.
//

#include "Lion.h"
#include <iostream>

namespace Animals {
    namespace Wild {
        Lion::Lion() : Animal("Лев") {}
        void Lion::makeSound() const {
            std::cout << name << ": Рррр!\n";
        }
    }
}

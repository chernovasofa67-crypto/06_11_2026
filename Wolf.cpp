//
// Created by Евгения on 05.11.2026.
//

#include "Wolf.h"
#include <iostream>

namespace Animals {
    namespace Wild {
        Wolf::Wolf() : Animal("Вовк") {}
        void Wolf::makeSound() const {
            std::cout << name << ": Аууу!\n";
        }
    }
}

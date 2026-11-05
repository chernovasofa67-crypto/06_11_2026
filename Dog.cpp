//
// Created by Евгения on 05.11.2026.
//

#include "Dog.h"
#include <iostream>

namespace Animals {
    Dog::Dog() : Animal("Собака") {}
    void Dog::makeSound() const {
        std::cout << name << ": Гав-гав!\n";
    }
}

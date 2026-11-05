#include <iostream>
#include <vector>
#include "Lion.h"
#include "Wolf.h"
#include "Dog.h"
#include "Chicken.h"
#include "Duck.h"
#include "Eagle.h"

int main() {
    std::system("chcp 1251 > nul");

    std::vector<Animal*> zoo;

    zoo.push_back(new Animals::Wild::Lion());
    zoo.push_back(new Animals::Wild::Wolf());
    zoo.push_back(new Animals::Dog());
    zoo.push_back(new Birds::Domestic::Chicken());
    zoo.push_back(new Birds::Domestic::Duck());
    zoo.push_back(new Birds::Eagle());

    for (const auto& animal : zoo) {
        animal->makeSound();
    }

    for (auto& animal : zoo) {
        delete animal;
    }

    return 0;
}

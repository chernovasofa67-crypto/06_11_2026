//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_DOG_H
#define INC_06_11_2026_DOG_H



#include "Animal.h"

namespace Animals {
    class Dog : public Animal {
    public:
        Dog();
        void makeSound() const override;
    };
}


#endif //INC_06_11_2026_DOG_H

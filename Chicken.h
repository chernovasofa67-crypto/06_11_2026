//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_CHICKEN_H
#define INC_06_11_2026_CHICKEN_H

#pragma once
#include "Animal.h"

namespace Birds {
    namespace Domestic {
        class Chicken : public Animal {
        public:
            Chicken();
            void makeSound() const override;
        };
    }
}

#endif //INC_06_11_2026_CHICKEN_H

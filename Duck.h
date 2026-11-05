//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_DUCK_H
#define INC_06_11_2026_DUCK_H

#pragma once
#include "Animal.h"

namespace Birds {
    namespace Domestic {
        class Duck : public Animal {
        public:
            Duck();
            void makeSound() const override;
        };
    }
}


#endif //INC_06_11_2026_DUCK_H

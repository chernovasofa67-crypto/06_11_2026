//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_WOLF_H
#define INC_06_11_2026_WOLF_H

#include "Animal.h"

namespace Animals {
    namespace Wild {
        class Wolf : public Animal {
        public:
            Wolf();
            void makeSound() const override;
        };
    }
}

#endif //INC_06_11_2026_WOLF_H

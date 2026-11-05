//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_LION_H
#define INC_06_11_2026_LION_H

#include "Animal.h"

namespace Animals {
    namespace Wild {
        class Lion : public Animal {
        public:
            Lion();
            void makeSound() const override;
        };
    }
}


#endif //INC_06_11_2026_LION_H

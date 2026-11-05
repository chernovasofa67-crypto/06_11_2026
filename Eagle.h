//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_EAGLE_H
#define INC_06_11_2026_EAGLE_H

#pragma once
#include "Animal.h"

namespace Birds {
    class Eagle : public Animal {
    public:
        Eagle();
        void makeSound() const override;
    };
}

#endif //INC_06_11_2026_EAGLE_H

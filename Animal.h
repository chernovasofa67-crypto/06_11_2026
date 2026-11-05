//
// Created by Евгения on 05.11.2026.
//

#ifndef INC_06_11_2026_ANIMAIZOO_H
#define INC_06_11_2026_ANIMAIZOO_H



#include <string>

class Animal {
protected:
    std::string name;
public:
    Animal(std::string n);
    virtual ~Animal();
    virtual void makeSound() const = 0;
};



#endif //INC_06_11_2026_ANIMAIZOO_H

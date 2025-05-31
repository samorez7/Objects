#include "Objects.h"

// === LivingBeing ===
LivingBeing::LivingBeing(const std::string& name, int age) : name(name), age(age) {}

void LivingBeing::info() const {
    std::cout << "Name: " << name << ", Age: " << age;
}

// === Animal ===
Animal::Animal(const std::string& name, int age) : LivingBeing(name, age) {}

void Animal::info() const {
    std::cout << "Animal - ";
    LivingBeing::info();
    std::cout << std::endl;
}

// === Bird ===
Bird::Bird(const std::string& name, int age) : LivingBeing(name, age) {}

void Bird::info() const {
    std::cout << "Bird - ";
    LivingBeing::info();
    std::cout << std::endl;
}

// === Human ===
Human::Human(const std::string& name, int age, const std::string& occupation)
    : LivingBeing(name, age), occupation(occupation) {
}

void Human::info() const {
    std::cout << "Human - ";
    LivingBeing::info();
    std::cout << ", Occupation: " << occupation << std::endl;
}
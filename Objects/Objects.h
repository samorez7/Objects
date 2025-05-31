#pragma once
#include <string>
#include <iostream>

// Базовий клас
class LivingBeing {
protected:
    std::string name;
    int age;
public:
    LivingBeing(const std::string& name, int age);
    virtual void info() const;
    virtual ~LivingBeing() = default;
};

// Тварина
class Animal : public LivingBeing {
public:
    Animal(const std::string& name, int age);
    void info() const override;
};

// Птах
class Bird : public LivingBeing {
public:
    Bird(const std::string& name, int age);
    void info() const override;
};

// Людина
class Human : public LivingBeing {
private:
    std::string occupation;
public:
    Human(const std::string& name, int age, const std::string& occupation);
    void info() const override;
};

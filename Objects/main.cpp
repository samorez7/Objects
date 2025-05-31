#include "Objects.h"
#include <vector>
#include <memory>

int main() {
    std::vector<std::shared_ptr<LivingBeing>> beings;

  
    beings.push_back(std::make_shared<Animal>("Lion", 5));
    beings.push_back(std::make_shared<Animal>("Elephant", 12));
    beings.push_back(std::make_shared<Animal>("Tiger", 7));

   
    beings.push_back(std::make_shared<Bird>("Eagle", 4));
    beings.push_back(std::make_shared<Bird>("Parrot", 2));

  
    beings.push_back(std::make_shared<Human>("Alice", 30, "Engineer"));
    beings.push_back(std::make_shared<Human>("Bob", 25, "Doctor"));
    beings.push_back(std::make_shared<Human>("Charlie", 40, "Teacher"));

    for (const auto& being : beings) {
        being->info();
    }

    return 0;
}

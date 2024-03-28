#include "Room.h"
#include "Apartment.h"
#include <iostream>

int main() {
    Room room;
    std::cout << "Enter room details:" << std::endl;
    std::cin >> room;

    Apartment apartment;
    std::cin >> apartment;

    std::cout << room << std::endl;
    std::cout << apartment << std::endl;

    return 0;
}

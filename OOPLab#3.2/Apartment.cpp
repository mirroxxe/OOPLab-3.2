#include "Apartment.h"
#include <iostream>

Apartment::Apartment() : Room(), floor(0) {}

Apartment::Apartment(float w, float l, float h, const std::string& num, int f, const std::string& c)
    : Room(w, l, h), number(num), floor(f), city(c) {}

Apartment::Apartment(const Apartment& apartment)
    : Room(apartment), number(apartment.number), floor(apartment.floor), city(apartment.city) {}

Apartment::~Apartment() {}

std::string Apartment::getNumber() const { return number; }
int Apartment::getFloor() const { return floor; }
std::string Apartment::getCity() const { return city; }

void Apartment::setNumber(const std::string& num) { number = num; }
void Apartment::setFloor(int f) { floor = f; }
void Apartment::setCity(const std::string& c) { city = c; }

Apartment::operator std::string() const {
    return "Apartment: " + static_cast<std::string>(*this) + ", number=" + number + ", floor=" + std::to_string(floor) + ", city=" + city;
}

std::istream& operator>>(std::istream& is, Apartment& apartment) {
    std::cout << "Enter room details:" << std::endl;
    is >> static_cast<Room&>(apartment);
    std::cout << "Enter apartment number: ";
    is >> apartment.number;
    std::cout << "Enter floor: ";
    is >> apartment.floor;
    std::cout << "Enter city: ";
    is >> apartment.city;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Apartment& apartment) {
    os << static_cast<std::string>(apartment);
    return os;
}

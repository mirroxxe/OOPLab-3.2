#ifndef APARTMENT_H
#define APARTMENT_H

#include "Room.h"
#include <string>

class Apartment : public Room {
private:
    std::string city;
    std::string number;
    int floor;

public:
    Apartment(); 
    Apartment(float w, float l, float h, const std::string& num, int f, const std::string& c);
    Apartment(const Apartment& apartment);
    ~Apartment();
    std::string getNumber() const;
    int getFloor() const;
    std::string getCity() const;
    void setNumber(const std::string& num);
    void setFloor(int f);
    void setCity(const std::string& c);
    operator std::string() const;
    friend std::istream& operator>>(std::istream& is, Apartment& apartment);
    friend std::ostream& operator<<(std::ostream& os, const Apartment& apartment);
};

#endif

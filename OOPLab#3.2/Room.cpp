#include "Room.h"
#include <iostream>

Room::Room() : width(0), length(0), height(0) {}

Room::Room(float w, float l, float h) : width(w), length(l), height(h) {
    if (w <= 0 || l <= 0 || h <= 0) {
        std::cout << "Error: Invalid room dimensions." << std::endl;
        exit(1);
    }
}

Room::Room(const Room& room) : width(room.width), length(room.length), height(room.height) {}

Room::~Room() {}

float Room::getWidth() const { return width; }
float Room::getLength() const { return length; }
float Room::getHeight() const { return height; }

void Room::setWidth(float w) {
    if (w <= 0) {
        std::cout << "Error: Width must be positive." << std::endl;
        exit(1);
    }
    width = w;
}

void Room::setLength(float l) {
    if (l <= 0) {
        std::cout << "Error: Length must be positive." << std::endl;
        exit(1);
    }
    length = l;
}

void Room::setHeight(float h) {
    if (h <= 0) {
        std::cout << "Error: Height must be positive." << std::endl;
        exit(1);
    }
    height = h;
}

Room::operator std::string() const {
    return "Room: width=" + std::to_string(width) + ", length=" + std::to_string(length) + ", height=" + std::to_string(height);
}

std::istream& operator>>(std::istream& is, Room& room) {
    float w, l, h;
    std::cout << "Enter width: ";
    is >> w;
    std::cout << "Enter length: ";
    is >> l;
    std::cout << "Enter height: ";
    is >> h;
    room.setWidth(w);
    room.setLength(l);
    room.setHeight(h);
    return is;
}

std::ostream& operator<<(std::ostream& os, const Room& room) {
    os << static_cast<std::string>(room);
    return os;
}

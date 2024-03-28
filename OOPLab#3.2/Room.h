#ifndef ROOM_H
#define ROOM_H

#include <string>

class Apartment;

class Room {
protected:
    float width;
    float length;
    float height;

public:
    Room();
    Room(float w, float l, float h);
    Room(const Room& room);
    ~Room();
    float getWidth() const;
    float getLength() const;
    float getHeight() const;
    void setWidth(float w);
    void setLength(float l);
    void setHeight(float h);
    operator std::string() const;
    friend std::istream& operator>>(std::istream& is, Room& room);
    friend std::ostream& operator<<(std::ostream& os, const Room& room);
};

#endif

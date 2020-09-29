#pragma once
#include <iostream>
#include "../World/world.h"
#include "../Coins/point.h"
using namespace std;

class Robot{
  private:
    Point rPos;
    enum orientation_type{east, west,south, north };
    orientation_type orientation;
  public:
    void init();
    void print() const;
    void setOrientation(orientation_type orientation);
    bool forward();
    void turnCW();
    void turnAntiCW();
    bool eastEnd();
    bool westEnd();
    bool northEnd();
    bool southEnd();
    bool zag();
    bool zig();
    int getX();
    int getY();    
};
#pragma once
#include <iostream>
using namespace std;
class Point{
  private:
        int x;
        int y;
  public:
        void print() const;
        void set(int x, int y);
        int getX();
        int getY();
        
};
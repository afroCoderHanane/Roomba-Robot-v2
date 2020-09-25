#pragma once 
#include<iostream>
#include "../Coins/point.h"
using namespace std;
class World{
  private:
    Point coins[3]; 
  public:
    void print()const;
    void set(int i, int x, int y);
};

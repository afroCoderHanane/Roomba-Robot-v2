#include "world.h"

void World::print()const{
  int count = 0;
  while(count<3)
  {
    coins[count].print();
    count++;
  }
}
void World::set(int i, int x, int y){
    coins[i].set(x,y);
}

Point World::getCoin(int i)
{
  return coins[i];
}
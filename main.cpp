#include <iostream>
#include "./Robot/robot.h"
using namespace std;
int main() {
  Robot r1;
  r1.init();
  r1.forward();
     
}
//Unit Testing of Point
 /*int i = 0;
  Point p[2];
  while(i<2){
    int x, y;
    cout<<"Enter the point coordinate"<<endl;
    cin>>x>>y;
    if(x<10&&y<10){
      p[i].set(x,y);
      p[i].print();
      i++;
    }
    else 
    {
      cout<<"Reenter your coordinate"<<endl;
    }
    
  }
  //Unit Testing of World
   World w;
  int i = 0;
  while(i<3)
  {
   int x, y;
    cout<<"Enter the point coordinate"<<endl;
    cin>>x>>y;
    if(x<10&&y<10){
      w.set(i,x,y);
      w.print();
      i++;
    }
    else{
      cout<<"Reenter your coordinate"<<endl;
    }
     
  }
  w.print();*/
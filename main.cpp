#include <iostream>
#include "./Robot/robot.h"
using namespace std;
int main() {

int x, y; 
World w;// world object
Robot r;// robot object
  int i = 0; //initiator

  // loop to get coins location and store them in a point
  while (i < 3 ){      
    cout << "Enter coins X value and Y value: " << endl; 
    //fout << "Enter X value and Y value: " << endl;
    cin >> x >> y;
    cout<<"----------------------------------"<<endl;
  if(x > -1 && y > -1 && x < 10 && y < 10){ 
    w.set(i, x, y);
    i++;
    }
  else
    cout << "Error!" << endl;
 }
    cout << "Points are = ";
//print the point
   w.print();
   cout << endl; 
   cout << endl; 

 // robot call to initialize direction and point  
r.init();
r.print();

    int coinNum=0;
    int moveCount =0;
// loop to check if the coins are not found within the limit of the code 
 while (coinNum < 3 && moveCount<100){
    for (int i =0; i<3; i++){
      int rX = r.getX();
      int rY = r.getY();

      int coinX = w.getCoin(i).getX();
      int coinY = w.getCoin(i).getY();
     //statement to check if the coins are found
      if (rX == coinX && rY == coinY){
        coinNum++;
        cout << "I found the coin num: "<< coinNum <<"! I’m gonna be rich! Yippee!" << endl;
        }
      
    }
      r.forward();
      moveCount++;
      r.zag();
      r.zig();
      r.print();
  }
  //print the number of moves made by robot
  cout<<"----------------------------------------"<<endl;
    cout<<"I made "<<moveCount<<" moves"<<endl;
    cout<<"---------------------------------------"<<endl;


  return 0;    
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
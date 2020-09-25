#include "robot.h"

void Robot::init(){
  rPos.set(0,0);
  orientation=east;
}
void Robot::print() const{
 cout<<"I am at "; rPos.print();
 cout<<"and I am facing"<< static_cast<orientation_type>(orientation)<<endl;
}
void Robot::setOrientation(orientation_type orientation){
  
   
  switch((int)orientation)
  {
    case 1: 
     orientation=north;
    case 2:
     orientation=south;
    case 3:
     orientation=east;
    case 4:
     orientation=west;
    default:
     break;
  }
}
bool Robot::forward(){
  bool move = false;
  if(orientation==east&&rPos.getX()<10&&rPos.getY()<10){
    move = true;
    cout<<"Robot is moving east"<<endl;
    rPos.set(rPos.getX()+1,rPos.getY());
    rPos.print();
  }
  else if(orientation==west&&rPos.getX()<10&&rPos.getY()<10){
    move = true;
   cout<<"Robot is moving east"<<endl;
    rPos.set(rPos.getX()-1,rPos.getY());
    rPos.print();
  }
  else if(orientation==north&&rPos.getX()<10&&rPos.getY()<10){
   move=true;
   cout<<"Robot is moving north"<<endl;
    rPos.set(rPos.getX(),rPos.getY()+1);
    rPos.print();
  }
  else {
    move = true;
   cout<<"Robot is moving south "<<endl;
    rPos.set(rPos.getX(),rPos.getY()-1);
    rPos.print();
  }
  return move;
}
void Robot::turnCW(){
   if(orientation==east)
      setOrientation(south);
    else if(orientation==south)
      setOrientation(west);
    else if(orientation == west)
      setOrientation(north);
    else
      setOrientation(east); 
}
void Robot::turnAntiCW(){
   if(orientation==east)
      setOrientation(north);
    else if(orientation==north)
      setOrientation(west);
    else if(orientation == west)
      setOrientation(south);
    else
      setOrientation(east); 
}
bool Robot::eastEnd()
{
  return (rPos.getX()==10&&rPos.getY()==0);
}
bool Robot::westEnd()
{
  return (rPos.getX()==0&&rPos.getY()==10);
}
bool Robot::northEnd(){
  return (rPos.getX()==0&&rPos.getY()==0);
}
bool Robot::southEnd(){
  return (rPos.getX()==10&&rPos.getY()==10);
}
bool Robot::zag(){
  bool ok = false;
  if(orientation==east&&eastEnd())
  {
    ok = true;
    turnCW();
    forward();
    turnCW();
  }
  return ok;
}
bool Robot::zig(){
  bool ok = false;
  if(orientation==west&&westEnd())
  {
    ok = true;
    turnAntiCW();
    forward();
    turnAntiCW();
  }
  return ok;
}
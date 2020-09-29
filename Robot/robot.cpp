
#include "robot.h"
// function intialize robot position to (0,0) and orientation to East
void Robot::init(){
  rPos.set(0,0);
  orientation= east;
}
// print function
void Robot::print() const{
  cout<<"I am at  ";
  rPos.print();
  cout<<" and I am facing ";
      if (orientation==east)
      cout<<"EAST\n";
    else if(orientation==south)
      cout<<"Sout\n";
    else if(orientation==west)
    cout<<"WEST\n";
    else if(orientation==north)
    cout<<"NORTH\n";
}
//function to set the new orientation
void Robot::setOrientation(orientation_type orientation){
  this->orientation=orientation;
}
//function to return true if the robot can move forward
bool Robot::forward(){
  if(orientation==east){
      if(rPos.getX()<9){
        rPos.set(rPos.getX()+1,rPos.getY());
        return true;
      }
      else {
        return false;
      }
  }
  else if(orientation==west){
      if(rPos.getX()>0){
        rPos.set(rPos.getX()-1, rPos.getY());
        return true;
      }
      else{
        return false;
      }
  }
  else if(orientation==north){
    if (rPos.getY()<9){
    rPos.set(rPos.getX(),rPos.getY()+1);
    return true; 
  }
  else
  {
    return false;
  }
}
else if(orientation==south)
{
  if(rPos.getY()>0)
  {
    rPos.set(rPos.getX(),rPos.getY()-1);
    return true;
  }
  else
  {
    return false;
  }
}
return false;
}
// turn clocewise if the robot reaches the wall
void Robot::turnCW()
{
    if(orientation==east)
    orientation=south;
    else if(orientation==south)
    orientation=west;
    else if(orientation==west)
    orientation=north;
    else if(orientation==north)
    orientation=east;

}
//turn anticlockwise if the robot reach the wall
void Robot::turnAntiCW()
{
  if(orientation==east)
   orientation=north;
  else if(orientation==north)
   orientation=west;
  else if(orientation==west)
   orientation=south;
  else if (orientation==south)
   orientation=east;
}
//return true if the north end is reach
bool Robot::northEnd()
{
  if(rPos.getY()==9)
   return true;
  else 
   return false;
}
//return true if the south end is reach
bool Robot:: southEnd()
{
  if(rPos.getY()==0)
   return true;
  else 
   return false;
}
//return true if the east end is reach
bool Robot::eastEnd()
{
  if(rPos.getX()==9)
   return true;
  else
   return false;
}
//return true if the west end is reach
bool Robot::westEnd()
{
  if(rPos.getX()==0)
   return true;
  else
   return false;
}
//return true if 
bool Robot::zag()
{
  if(eastEnd())
  {
    turnAntiCW();
    forward();
    turnAntiCW();
    return true;
  }
  else
   return false;
}
bool Robot::zig()
{
  if(westEnd())
  {
    turnCW();
    forward();
    turnCW();
    return true;
  }
  else 
    return false;
}
int Robot:: getX()
{
  return rPos.getX();
}
int Robot:: getY()
{
  return rPos.getY();
}




// A simple sample program written in c++ for understanding of class and use of them. This program will give the volume of a box with given  inputs.
#include<iostream>
using namespace std;

class Box{
public :
int width, height,length;

Box(){
width=0;
height=0;
length=0;
}


Box(int width,int  height,int length){

this->width=width;
this->height=height;
this->length=length;
}

int volume(){

return width*height*length;

}


};


int main(int argc, char* argv[])
{
Box b1(10,20,30);
cout<<"Volume of the box is "<<b1.volume()<<endl;

return 0;
}

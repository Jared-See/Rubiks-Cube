#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}














/*
Hello thanks for looking at my project
You can view my other projects at my GitHub, Pagaley12
If you find any issues just make an error or let me know.
#include<iostream>
#include<fstream>
#include <string>
#include "Header_Files/matrix.h"


using namespace std;

int input(istream& in=cin)//Allows User Input
{
	int x;
	in >> x;
	return x;
}

class cubeFace{
    Matrix<int, 3, 3>face;
    int FC4 = face[0][0];
    int FE3 = face[1][0];
    int FC3 = face[2][0];
    int FE4 = face[0][1];
    int C   = face[1][1];
    int FE2 = face[2][1];
    int FC1 = face[0][2];
    int FE1 = face[1][2];
    int FC2 = face[2][2];

    cubeFace* leftFace;
    cubeFace* rightFace;
    cubeFace* upFace;
    cubeFace* downFace;
    cubeFace* backFace;

    void rightFace(){

    };
};



class rubiksCube{

};




int main()//Main Program
{
    cubeFace frontFace;
    cubeFace leftFace;
    cubeFace rightFace;
    cubeFace upFace;
    cubeFace downFace;
    cubeFace backFace;

    return 0;
}


void setUpCubes(){

    //Initializing All The Cube Faces As Objects Of The cubeFace Class


    //Initializing the Faces of the Cube Relative To The Front Face
    frontFace.backFace = backFace;
    frontFace.leftFace = leftFace;
    frontFace.rightFace = rightFace;
    frontFace.upFace = upFace;
    frontFace.downFace = downFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    leftFace.backFace = rightFace;
    leftFace.leftFace = backFace;
    leftFace.rightFace = frontFace;
    leftFace.upFace = upFace;
    leftFace.downFace = downFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    rightFace.backFace = leftFace;
    rightFace.leftFace = frontFace;
    rightFace.rightFace = backFace;
    rightFace.upFace = upFace;
    rightFace.downFace = downFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    upFace.backFace = downFace;
    upFace.leftFace = leftFace;
    upFace.rightFace = rightFace;
    upFace.upFace = backFace;
    upFace.downFace = frontFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    downFace.backFace = upFace;
    downFace.leftFace = leftFace;
    downFace.rightFace = rightFace;
    downFace.downFace = backFace;
    downFace.upFace = frontFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    backFace.backFace = frontFace;
    backFace.leftFace = rightFace;
    backFace.rightFace = leftFace;
    backFace.downFace = downFace;
    backFace.upFace = upFace;
} */

















/*      //Initializing All The Cube Faces As Objects Of The cubeFace Class
    cubeFace frontFace;
    cubeFace leftFace;
    cubeFace rightFace;
    cubeFace upFace;
    cubeFace downFace;
    cubeFace backFace;

    //Initializing the Faces of the Cube Relative To The Front Face
    frontFace.backFace = backFace;
    frontFace.leftFace = leftFace;
    frontFace.rightFace = rightFace;
    frontFace.upFace = upFace;
    frontFace.downFace = downFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    leftFace.backFace = rightFace;
    leftFace.leftFace = backFace;
    leftFace.rightFace = frontFace;
    leftFace.upFace = upFace;
    leftFace.downFace = downFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    rightFace.backFace = leftFace;
    rightFace.leftFace = frontFace;
    rightFace.rightFace = backFace;
    rightFace.upFace = upFace;
    rightFace.downFace = downFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    upFace.backFace = downFace;
    upFace.leftFace = leftFace;
    upFace.rightFace = rightFace;
    upFace.upFace = backFace;
    upFace.downFace = frontFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    downFace.backFace = upFace;
    downFace.leftFace = leftFace;
    downFace.rightFace = rightFace;
    downFace.downFace = backFace;
    downFace.upFace = frontFace;

    //Initializing the Faces of the Cube Relative To The Left Face
    backFace.backFace = frontFace;
    backFace.leftFace = rightFace;
    backFace.rightFace = leftFace;
    backFace.downFace = downFace;
    backFace.upFace = upFace;  */

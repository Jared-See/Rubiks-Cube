#include <Arduino.h>
using namespace std;



void setup() { //The Setup
  Serial.begin(9600);
}





class cubeFace{ //A class of  individual cube faces
public:
  char face[3][3];
  char FC4 = face[0][0];
  char Fe3 = face[1][0];
  char FC3 = face[2][0];
  char FE4 = face[0][1];
  char C   = face[1][1];
  char Fe2 = face[2][1];
  char FC1 = face[0][2];
  char Fe1 = face[1][2];
  char FC2 = face[2][2];

  cubeFace* leftFace;
  cubeFace* rightFace;
  cubeFace* upFace;
  cubeFace* downFace;
  cubeFace* backFace;
};





class rubiksCube{
public:
  cubeFace frontFace;
  cubeFace leftFace;
  cubeFace rightFace;
  cubeFace upFace;
  cubeFace downFace;
  cubeFace backFace;
};





//Global Vairables
//Creates the 6 sides of the cube
cubeFace frontFace;
cubeFace leftFace;
cubeFace rightFace;
cubeFace upFace;
cubeFace downFace;
cubeFace backFace;





rubiksCube rotateL(rubiksCube& cubeMain){
  cubeMain.frontFace = rightFace;
  cubeMain.leftFace = frontFace;
  cubeMain.rightFace = backFace;
  cubeMain.upFace = upFace;
  cubeMain.downFace = downFace;
  cubeMain.backFace = leftFace;

  return cubeMain;
}





rubiksCube rotateR(rubiksCube& cubeMain){
  cubeMain.frontFace = leftFace;
  cubeMain.leftFace = backFace;
  cubeMain.rightFace = frontFace;
  cubeMain.upFace = upFace;
  cubeMain.downFace = downFace;
  cubeMain.backFace = rightFace;

  return cubeMain;
}



rubiksCube moveR(rubiksCube& cubeMain){
  //Changes to the front face
  cubeMain.frontFace.FC2 = cubeMain.downFace.FC2;
  cubeMain.frontFace.Fe2 = cubeMain.downFace.Fe2;
  cubeMain.frontFace.FC3 = cubeMain.downFace.FC3;

  //Changes to the up face
  cubeMain.upFace.FC2 = cubeMain.upFace.FC2;
  cubeMain.upFace.Fe2 = cubeMain.upFace.Fe2;
  cubeMain.upFace.FC3 = cubeMain.upFace.FC3;
  return cubeMain;
}


//Main Code Loop
void loop() {
  //Creates the Main Rubiks cube
  rubiksCube mainCube;

  //Defines the Faces of the cube
  mainCube.backFace = backFace;
  mainCube.frontFace = frontFace;
  mainCube.leftFace = leftFace;
  mainCube.rightFace = rightFace;
  mainCube.upFace = upFace;
  mainCube.frontFace = downFace;



}

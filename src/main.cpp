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
  char Fe4 = face[0][1];
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
  //Creates Temperary Variables of the sides
  cubeFace tempRightCubeFace = cubeMain.rightFace;
  cubeFace tempFrontCubeFace = cubeMain.frontFace;
  cubeFace tempLeftFace = cubeMain.leftFace;
  cubeFace tempUpFace = cubeMain.upFace;
  cubeFace tempDownFace = cubeMain.downFace;
  cubeFace tempBackFace = cubeMain.backFace;
  
  cubeMain.frontFace = tempRightCubeFace;
  cubeMain.leftFace = tempFrontCubeFace;
  cubeMain.rightFace = tempBackFace;
  cubeMain.upFace = tempUpFace;
  cubeMain.downFace = tempDownFace;
  cubeMain.backFace = tempLeftFace;

  return cubeMain;
}





rubiksCube rotateR(rubiksCube& cubeMain){
  //Creates Temperary Variables of the sides
  cubeFace tempRightCubeFace = cubeMain.rightFace;
  cubeFace tempFrontCubeFace = cubeMain.frontFace;
  cubeFace tempLeftFace = cubeMain.leftFace;
  cubeFace tempUpFace = cubeMain.upFace;
  cubeFace tempDownFace = cubeMain.downFace;
  cubeFace tempBackFace = cubeMain.backFace;
  
  cubeMain.frontFace = tempLeftFace;
  cubeMain.leftFace = tempBackFace;
  cubeMain.rightFace = tempFrontCubeFace;
  cubeMain.upFace = tempUpFace;
  cubeMain.downFace = tempDownFace;
  cubeMain.backFace = tempRightCubeFace;

  return cubeMain;
}



rubiksCube moveR(rubiksCube& cubeMain){
  //Temperary Vairables
  //Temp Front Faces
  char tempFrontFC2 = cubeMain.frontFace.FC2;
  char tempFrontFe2 = cubeMain.frontFace.Fe2;
  char tempFrontFC3 = cubeMain.frontFace.FC3;
  //Temp Up Faces
  char tempUpFC2 = cubeMain.upFace.FC2;
  char tempUpFe2 = cubeMain.upFace.Fe2;
  char tempUpFC3 = cubeMain.upFace.FC3;
  //Temp Down Faces
  char tempDownFC2 = cubeMain.downFace.FC2;
  char tempDownFe2 = cubeMain.downFace.Fe2;
  char tempDownFC3 = cubeMain.downFace.FC3;
  //Temp Back Faces
  char tempBackFC1 = cubeMain.backFace.FC1;
  char tempBackFe4 = cubeMain.backFace.Fe4;
  char tempbackFC4 = cubeMain.backFace.FC4;
  //Temp Right Face
  char temprightFC1 = cubeMain.rightFace.FC2;
  char temprightFe1 = cubeMain.rightFace.FC2;
  char temprightFC2 = cubeMain.rightFace.FC2;
  char temprightFe4 = cubeMain.rightFace.FC2;
  char temprightFC2 = cubeMain.rightFace.FC2;
  char temprightFC2 = cubeMain.rightFace.FC2;
  char temprightFC2 = cubeMain.rightFace.FC2;
  char temprightFC2 = cubeMain.rightFace.FC2;

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

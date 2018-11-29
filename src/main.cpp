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





rubiksCube rotateL(rubiksCube& temp){
  temp.frontFace = rightFace;
  temp.leftFace = frontFace;
  temp.rightFace = backFace;
  temp.upFace = upFace;
  temp.downFace = downFace;
  temp.backFace = leftFace;

  return temp;
}





rubiksCube rotateR(rubiksCube& temp){
  temp.frontFace = leftFace;
  temp.leftFace = backFace;
  temp.rightFace = frontFace;
  temp.upFace = upFace;
  temp.downFace = downFace;
  temp.backFace = rightFace;

  return temp;
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
  mainCube.downFace = downFace;

  rightFace.FC1 = 'A';
  rotateR(mainCube);
  if(mainCube.backFace.FC1 = 'A'){
    Serial.println("sucess");
  }


}

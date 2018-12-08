#include <Arduino.h>
using namespace std;



void setup() { //The Setup
  Serial.begin(9600);
}





class cubeFace{ //A class of  individual cube faces
public:
  char face[3][3];
  char FC4 = face[2][0];
  char Fe3 = face[2][1];
  char FC3 = face[2][2];
  char Fe4 = face[1][0];
  char C   = face[1][1];
  char Fe2 = face[1][2];
  char FC1 = face[0][0];
  char Fe1 = face[0][1];
  char FC2 = face[0][2];

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

  //Temp Back Faces
  char tempBackFC1 = cubeMain.backFace.FC1;
  char tempBackFe4 = cubeMain.backFace.Fe4;
  char tempbackFC4 = cubeMain.backFace.FC4;
  //Temp Right Face
  char tempRightFC1 = cubeMain.rightFace.FC1;
  char tempRightFe1 = cubeMain.rightFace.Fe1;
  char tempRightFC2 = cubeMain.rightFace.FC2;
  char tempRightFe4 = cubeMain.rightFace.Fe4;
  char tempRightFe2 = cubeMain.rightFace.Fe2;
  char tempRightFC4 = cubeMain.rightFace.FC4;
  char tempRightFe3 = cubeMain.rightFace.Fe3;
  char tempRightFC3 = cubeMain.rightFace.FC3;

  //Changes to the front face
  cubeMain.frontFace.FC2 = cubeMain.downFace.FC2;
  cubeMain.frontFace.Fe2 = cubeMain.downFace.Fe2;
  cubeMain.frontFace.FC3 = cubeMain.downFace.FC3;

  //Changes to the up face
  cubeMain.upFace.FC2 = tempFrontFC2;
  cubeMain.upFace.Fe2 = tempFrontFe2;
  cubeMain.upFace.FC3 = tempFrontFC3;

  //Chnages to the back face
  cubeMain.backFace.FC1 = tempUpFC3;
  cubeMain.backFace.Fe4 = tempUpFe2;
  cubeMain.backFace.FC4 = tempUpFC2;

  //Changes to the down face
  cubeMain.downFace.FC2 = tempBackFC1;
  cubeMain.downFace.Fe2 = tempBackFe4;
  cubeMain.downFace.FC3 = tempbackFC4;

  //Changes to the right face
  cubeMain.rightFace.FC1 = tempRightFC4;
  cubeMain.rightFace.Fe1 = tempRightFe4;
  cubeMain.rightFace.FC2 = tempRightFC1;
  cubeMain.rightFace.Fe4 = tempRightFe3;
  cubeMain.rightFace.Fe2 = tempRightFe1;
  cubeMain.rightFace.FC4 = tempRightFC3;
  cubeMain.rightFace.Fe3 = tempRightFe2;
  cubeMain.rightFace.FC3 = tempRightFC2;


  return cubeMain;
}


rubiksCube moveRPrime(rubiksCube& cubeMain){
  //Temperary Vairables
  //Temp Down Faces
  char tempDownFC2 = cubeMain.downFace.FC2;
  char tempDownFe2 = cubeMain.downFace.Fe2;
  char tempDownFC3 = cubeMain.downFace.FC3;

  //Temp Front Faces
  char tempFrontFC2 = cubeMain.frontFace.FC2;
  char tempFrontFe2 = cubeMain.frontFace.Fe2;
  char tempFrontFC3 = cubeMain.frontFace.FC3;


  //Temp Back Faces
  char tempBackFC1 = cubeMain.backFace.FC1;
  char tempBackFe4 = cubeMain.backFace.Fe4;
  char tempBackFC4 = cubeMain.backFace.FC4;
  //Temp Right Face
  char tempRightFC1 = cubeMain.rightFace.FC1;
  char tempRightFe1 = cubeMain.rightFace.Fe1;
  char tempRightFC2 = cubeMain.rightFace.FC2;
  char tempRightFe4 = cubeMain.rightFace.Fe4;
  char tempRightFe2 = cubeMain.rightFace.Fe2;
  char tempRightFC4 = cubeMain.rightFace.FC4;
  char tempRightFe3 = cubeMain.rightFace.Fe3;
  char tempRightFC3 = cubeMain.rightFace.FC3;

  //Changes to the front face
  cubeMain.frontFace.FC2 = cubeMain.upFace.FC2;
  cubeMain.frontFace.Fe2 = cubeMain.upFace.Fe2;
  cubeMain.frontFace.FC3 = cubeMain.upFace.FC3;

  //Changes to the up face
  cubeMain.upFace.FC2 = tempBackFC4;
  cubeMain.upFace.Fe2 = tempBackFe4;
  cubeMain.upFace.FC3 = tempBackFC1;

  //Changes to the back face
  cubeMain.backFace.FC1 = tempDownFC3;
  cubeMain.backFace.Fe4 = tempDownFe2;
  cubeMain.backFace.FC4 = tempDownFC2;

  //Changes to the down face
  cubeMain.downFace.FC2 = tempFrontFC2;
  cubeMain.downFace.Fe2 = tempFrontFe2;
  cubeMain.downFace.FC3 = tempFrontFC3;

  //Changes to the right face
  cubeMain.rightFace.FC1 = tempRightFC2;
  cubeMain.rightFace.Fe1 = tempRightFe2;
  cubeMain.rightFace.FC2 = tempRightFC3;
  cubeMain.rightFace.Fe4 = tempRightFe1;
  cubeMain.rightFace.Fe2 = tempRightFe3;
  cubeMain.rightFace.FC4 = tempRightFC1;
  cubeMain.rightFace.Fe3 = tempRightFe4;
  cubeMain.rightFace.FC3 = tempRightFC4;


  return cubeMain;
}



void printFace(cubeFace cubeMainFace){
  char face[3][3];
  face[2][0] = cubeMainFace.FC4;
  face[2][1] = cubeMainFace.Fe3;
  face[2][2] = cubeMainFace.FC3;
  face[1][0] = cubeMainFace.Fe4;
  face[1][1] = cubeMainFace.C;
  face[1][2] = cubeMainFace.Fe2;
  face[0][0] = cubeMainFace.FC1;
  face[0][1] = cubeMainFace.Fe1;
  face[0][2] = cubeMainFace.FC2;

    for(int i=0 ; i<=2 ; i++)
    {
        for(int j=0 ; j<=2 ; j++)
            Serial.print( *(*(face+i)+j));
        Serial.println("");
    }
    Serial.println("");
}





//Main Code Loop
void loop(){
  //Creates the Main Rubiks cube
  rubiksCube mainCube;

  //Defines the Faces of the cube
  mainCube.backFace = backFace;
  mainCube.frontFace = frontFace;
  mainCube.leftFace = leftFace;
  mainCube.rightFace = rightFace;
  mainCube.upFace = upFace;
  mainCube.frontFace = downFace;

  frontFace.FC4 = 'R';
  frontFace.Fe3 = 'E';
  frontFace.FC3 = 'D';
  frontFace.Fe4 = 'H';
  frontFace.C = 'E';
  frontFace.Fe2 = 'Y';
  frontFace.FC1 = 'A';
  frontFace.Fe1 = 'S';
  frontFace.FC2 = 'S';

  printFace(frontFace);


}

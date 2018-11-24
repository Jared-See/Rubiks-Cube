class cubeFace{
    //Access Specifier
    int FC4 = face[0][0];
    int FC3 = face[2][0];
    int FE2 = face[2][1];
    int FC1 = face[0][2];
    //Faces Relative to this face used for rotating layers of the cube
    Matrix<int, 3, 3>rightFace;
    Matrix<int, 3, 3>leftFace;
    Matrix<int, 3, 3>upFace;
    Matrix<int, 3, 3>backFace;
    Matrix<int, 3, 3>downFace;

    //Member Functions
    void uTurn(){

    }
};


{

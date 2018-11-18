/*Hello thanks for looking at my project
You can view my other projects at my GitHub, Pagaley12
If you find any issues just make an error or let me know.*/
#include<iostream>
#include<fstream>
#include <string>

using namespace std;

int input(istream& in=cin)
{
	int x;
	in >> x;
	return x;
}

void createAndPrintFace (const string & str1){ //Function Creates a Face
    if(str1 == "Front"){//Code for Front Face
        int frontFace [3][3]; //creates a 3*3 matrix or a 2d array.
    
    }else if(str1 == "Back"){//Code for Back Face
        cout <<"Back" <<endl;
    } else if(str1 == "Up"){//Code for Upper Face
        cout <<"Up" <<endl;
    }else if(str1 == "Down"){//Code for Down Face
        cout <<"Down" <<endl;
    }else if(str1 == "Left"){//Code for Left Face
        cout <<"Left" <<endl;
    }else if(str1 == "Right"){//Code for Right Face
        cout<<"Right" <<endl;
    }
    
    
    /*int board [3][3]; //creates a 3*3 matrix or a 2d array.

	for(int i=0; i<3; i++)    //This loops on the rows.
	{
		for(int j=0; j<3; j++) //This loops on the columns
		{
			board[i][j] = input(); 
		}
	}

    for(int i=0; i<3; i++)    //This loops on the rows.
    {
        for(int j=0; j<3; j++) //This loops on the columns
        {
            cout << board[i][j]  << "  ";
        }
        cout << <<endl;
    }*/
    
}

int main()
{
    createAndPrintFace("Front");
}






/* Code To Print an Array
for(int i=0; i<3; i++)    //This loops on the rows.
    {
        for(int j=0; j<3; j++) //This loops on the columns
        {
            cout << board[i][j]  << "  ";
        }
        cout << endl;
    }
*/





















/*

//Initial SetUp
void setup() {
    // Front Face Variables/Layout
    char FC1;   //Top Left Piece on the Front Side
    char FC2;   //Top Right Piece on the Front Side
    char FC3;   //Bottom Right Piece on the Front Side
    char FC4;   //Bottom Left Piece on the Front Side
    char FE1;   //Top Middle Piece on the Front Side
    char FE2;   //Middle-Right Piece on the Front Side
    char FE3;   //Bottom Middle Piece on the Front Side
    char FE4;   //Left-Middle Piece on the Front Side
    char C1;    //Center Piece on the Front Side

    char frontFace[3][3]{
        {FC1, FE1, FC2},
        {FE4, C1, FE2},
        {FC4, FE3, FC3}
    };
}

int print face(char face[][3])
{
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            std::cout << face[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
    return 0;
}


*/
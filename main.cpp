#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
// x0, x1, x2
// y0, y1, y2

float coord[2][3]= {{250,250,200},

    {250,150,150}
};
float coordTmp[2][3]= {{250,250,200},
    {250,150,150}
};

// 2nd cord

float coord2[2][3]= {{250,300,250},
    {250,150,150}
};
float coord2Tmp[2][3]= {{250,300,250},
    {250,150,150}

};

// 3rd cord
float coord3[2][3]= {{250,350,350},
    {250,250,200}
};
float coord3Tmp[2][3]= {{250,350,350},
    {250,250,200}
};

// 4th cord

float coord4[2][3]= {{250,350,350},
    {250,300,250}
};
float coord4Tmp[2][3]= {{250,350,350},
    {250,300,250}
};


// 5th cord

float coord5[2][3]= {{250,250,300},
    {250,350,350}
};
float coord5Tmp[2][3]= {{250,250,300},
    {250,350,350}
};

// 6th cord

float coord6[2][3]= {{250,200,250},
    {250,350,350}
};
float coord6Tmp[2][3]= {{250,200,250},
    {250,350,350}
};

// 7th cord

float coord7[2][3]= {{250,150,150},
    {250,250,300}
};
float coord7Tmp[2][3]= {{250,150,150},
    {250,250,300}
};

// 8th cord

float coord8[2][3]= {{250,150,150},
    {250,200,250}
};
float coord8Tmp[2][3]= {{250,150,150},
    {250,200,250}
};


// rotation
float rot[2][2];
// matrix multiplication result
float tmp[2][3];

float deg_To_Rad(float val)
{
    return val*(3.1416/180);
}
void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(0,500,0,500,-15,5);

    rot[0][0]=cosf(deg_To_Rad(1));
    rot[0][1]=-sinf(deg_To_Rad(1));
    rot[1][0]=sinf(deg_To_Rad(1));
    rot[1][1]=cosf(deg_To_Rad(1));
}

// row
int N=2;
// col
int M=3;

// matrix multiplication
void multiply(float mat1[][2],float mat2[][3],float res[][3])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mat2[i][j]=res[i][j];
        }
    }
}






void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // 1st triangle
    glColor3ub(255,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(coordTmp[0][0],coordTmp[1][0]);
    glVertex2f(coordTmp[0][1],coordTmp[1][1]);
    glVertex2f(coordTmp[0][2],coordTmp[1][2]);
    glEnd();

    // 2nd triangle

    glColor3ub(0,205,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord2Tmp[0][0],coord2Tmp[1][0]);
    glVertex2f(coord2Tmp[0][1],coord2Tmp[1][1]);
    glVertex2f(coord2Tmp[0][2],coord2Tmp[1][2]);
    glEnd();

    // 3rd triangle

     glColor3ub(0,255,100);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord3Tmp[0][0],coord3Tmp[1][0]);
    glVertex2f(coord3Tmp[0][1],coord3Tmp[1][1]);
    glVertex2f(coord3Tmp[0][2],coord3Tmp[1][2]);
    glEnd();

    //4 th triangle

     glColor3ub(0,220,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord4Tmp[0][0],coord4Tmp[1][0]);
    glVertex2f(coord4Tmp[0][1],coord4Tmp[1][1]);
    glVertex2f(coord4Tmp[0][2],coord4Tmp[1][2]);
    glEnd();

    //5 th triangle

     glColor3ub(0,100,211);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord5Tmp[0][0],coord5Tmp[1][0]);
    glVertex2f(coord5Tmp[0][1],coord5Tmp[1][1]);
    glVertex2f(coord5Tmp[0][2],coord5Tmp[1][2]);
    glEnd();


    //6 th triangle

     glColor3ub(0,200,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord6Tmp[0][0],coord6Tmp[1][0]);
    glVertex2f(coord6Tmp[0][1],coord6Tmp[1][1]);
    glVertex2f(coord6Tmp[0][2],coord6Tmp[1][2]);
    glEnd();


    //7 th triangle

     glColor3ub(100,0,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord7Tmp[0][0],coord7Tmp[1][0]);
    glVertex2f(coord7Tmp[0][1],coord7Tmp[1][1]);
    glVertex2f(coord7Tmp[0][2],coord7Tmp[1][2]);
    glEnd();

//8 th triangle

     glColor3ub(200,0,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(coord8Tmp[0][0],coord8Tmp[1][0]);
    glVertex2f(coord8Tmp[0][1],coord8Tmp[1][1]);
    glVertex2f(coord8Tmp[0][2],coord8Tmp[1][2]);
    glEnd();








    glFlush();
}

void update(int value)
{
    // 1st triangle

    // 1st cord x y - root value
    coordTmp[0][0]=coordTmp[0][0]-coord[0][0];
    coordTmp[1][0]=coordTmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coordTmp[0][1]=coordTmp[0][1]-coord[0][0];
    coordTmp[1][1]=coordTmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coordTmp[0][2]=coordTmp[0][2]-coord[0][0];
    coordTmp[1][2]=coordTmp[1][2]-coord[1][0];


    multiply(rot,coordTmp,tmp);

    // 1st cord x y + root value
    coordTmp[0][0]=coordTmp[0][0]+coord[0][0];
    coordTmp[1][0]=coordTmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coordTmp[0][1]=coordTmp[0][1]+coord[0][0];
    coordTmp[1][1]=coordTmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coordTmp[0][2]=coordTmp[0][2]+coord[0][0];
    coordTmp[1][2]=coordTmp[1][2]+coord[1][0];


    // 2nd triangle

    // 1st cord x y - root value
    coord2Tmp[0][0]=coord2Tmp[0][0]-coord[0][0];
    coord2Tmp[1][0]=coord2Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord2Tmp[0][1]=coord2Tmp[0][1]-coord[0][0];
    coord2Tmp[1][1]=coord2Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord2Tmp[0][2]=coord2Tmp[0][2]-coord[0][0];
    coord2Tmp[1][2]=coord2Tmp[1][2]-coord[1][0];


    multiply(rot,coord2Tmp,tmp);

    // 1st cord x y + root value
    coord2Tmp[0][0]=coord2Tmp[0][0]+coord[0][0];
    coord2Tmp[1][0]=coord2Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord2Tmp[0][1]=coord2Tmp[0][1]+coord[0][0];
    coord2Tmp[1][1]=coord2Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord2Tmp[0][2]=coord2Tmp[0][2]+coord[0][0];
    coord2Tmp[1][2]=coord2Tmp[1][2]+coord[1][0];


    // 3rd triangle

    // 1st cord x y - root value
    coord3Tmp[0][0]=coord3Tmp[0][0]-coord[0][0];
    coord3Tmp[1][0]=coord3Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord3Tmp[0][1]=coord3Tmp[0][1]-coord[0][0];
    coord3Tmp[1][1]=coord3Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord3Tmp[0][2]=coord3Tmp[0][2]-coord[0][0];
    coord3Tmp[1][2]=coord3Tmp[1][2]-coord[1][0];


    multiply(rot,coord3Tmp,tmp);

    // 1st cord x y + root value
    coord3Tmp[0][0]=coord3Tmp[0][0]+coord[0][0];
    coord3Tmp[1][0]=coord3Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord3Tmp[0][1]=coord3Tmp[0][1]+coord[0][0];
    coord3Tmp[1][1]=coord3Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord3Tmp[0][2]=coord3Tmp[0][2]+coord[0][0];
    coord3Tmp[1][2]=coord3Tmp[1][2]+coord[1][0];


    // 4th triangle

    // 1st cord x y - root value
    coord4Tmp[0][0]=coord4Tmp[0][0]-coord[0][0];
    coord4Tmp[1][0]=coord4Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord4Tmp[0][1]=coord4Tmp[0][1]-coord[0][0];
    coord4Tmp[1][1]=coord4Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord4Tmp[0][2]=coord4Tmp[0][2]-coord[0][0];
    coord4Tmp[1][2]=coord4Tmp[1][2]-coord[1][0];


    multiply(rot,coord4Tmp,tmp);

    // 1st cord x y + root value
    coord4Tmp[0][0]=coord4Tmp[0][0]+coord[0][0];
    coord4Tmp[1][0]=coord4Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord4Tmp[0][1]=coord4Tmp[0][1]+coord[0][0];
    coord4Tmp[1][1]=coord4Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord4Tmp[0][2]=coord4Tmp[0][2]+coord[0][0];
    coord4Tmp[1][2]=coord4Tmp[1][2]+coord[1][0];

    // 5th triangle

    // 1st cord x y - root value
    coord5Tmp[0][0]=coord5Tmp[0][0]-coord[0][0];
    coord5Tmp[1][0]=coord5Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord5Tmp[0][1]=coord5Tmp[0][1]-coord[0][0];
    coord5Tmp[1][1]=coord5Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord5Tmp[0][2]=coord5Tmp[0][2]-coord[0][0];
    coord5Tmp[1][2]=coord5Tmp[1][2]-coord[1][0];


    multiply(rot,coord5Tmp,tmp);

    // 1st cord x y + root value
    coord5Tmp[0][0]=coord5Tmp[0][0]+coord[0][0];
    coord5Tmp[1][0]=coord5Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord5Tmp[0][1]=coord5Tmp[0][1]+coord[0][0];
    coord5Tmp[1][1]=coord5Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord5Tmp[0][2]=coord5Tmp[0][2]+coord[0][0];
    coord5Tmp[1][2]=coord5Tmp[1][2]+coord[1][0];

// 6th triangle

    // 1st cord x y - root value
    coord6Tmp[0][0]=coord6Tmp[0][0]-coord[0][0];
    coord6Tmp[1][0]=coord6Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord6Tmp[0][1]=coord6Tmp[0][1]-coord[0][0];
    coord6Tmp[1][1]=coord6Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord6Tmp[0][2]=coord6Tmp[0][2]-coord[0][0];
    coord6Tmp[1][2]=coord6Tmp[1][2]-coord[1][0];


    multiply(rot,coord6Tmp,tmp);

    // 1st cord x y + root value
    coord6Tmp[0][0]=coord6Tmp[0][0]+coord[0][0];
    coord6Tmp[1][0]=coord6Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord6Tmp[0][1]=coord6Tmp[0][1]+coord[0][0];
    coord6Tmp[1][1]=coord6Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord6Tmp[0][2]=coord6Tmp[0][2]+coord[0][0];
    coord6Tmp[1][2]=coord6Tmp[1][2]+coord[1][0];


// 7th triangle

    // 1st cord x y - root value
    coord7Tmp[0][0]=coord7Tmp[0][0]-coord[0][0];
    coord7Tmp[1][0]=coord7Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord7Tmp[0][1]=coord7Tmp[0][1]-coord[0][0];
    coord7Tmp[1][1]=coord7Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord7Tmp[0][2]=coord7Tmp[0][2]-coord[0][0];
    coord7Tmp[1][2]=coord7Tmp[1][2]-coord[1][0];


    multiply(rot,coord7Tmp,tmp);

    // 1st cord x y + root value
    coord7Tmp[0][0]=coord7Tmp[0][0]+coord[0][0];
    coord7Tmp[1][0]=coord7Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord7Tmp[0][1]=coord7Tmp[0][1]+coord[0][0];
    coord7Tmp[1][1]=coord7Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord7Tmp[0][2]=coord7Tmp[0][2]+coord[0][0];
    coord7Tmp[1][2]=coord7Tmp[1][2]+coord[1][0];

// 8th triangle

    // 1st cord x y - root value
    coord8Tmp[0][0]=coord8Tmp[0][0]-coord[0][0];
    coord8Tmp[1][0]=coord8Tmp[1][0]-coord[1][0];
    // 2nd cord x y - root value
    coord8Tmp[0][1]=coord8Tmp[0][1]-coord[0][0];
    coord8Tmp[1][1]=coord8Tmp[1][1]-coord[1][0];
    // 3rd cord x y - root value
    coord8Tmp[0][2]=coord8Tmp[0][2]-coord[0][0];
    coord8Tmp[1][2]=coord8Tmp[1][2]-coord[1][0];


    multiply(rot,coord8Tmp,tmp);

    // 1st cord x y + root value
    coord8Tmp[0][0]=coord8Tmp[0][0]+coord[0][0];
    coord8Tmp[1][0]=coord8Tmp[1][0]+coord[1][0];

    // 2nd cord x y + root value
    coord8Tmp[0][1]=coord8Tmp[0][1]+coord[0][0];
    coord8Tmp[1][1]=coord8Tmp[1][1]+coord[1][0];

    // 3rd cord x y + root value
    coord8Tmp[0][2]=coord8Tmp[0][2]+coord[0][0];
    coord8Tmp[1][2]=coord8Tmp[1][2]+coord[1][0];





    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}
static void key(unsigned char key, int x, int y)
{


    glutPostRedisplay();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(20, 20);
    glutCreateWindow("Assignment 4");
    init();
    glutDisplayFunc(myDisplay);

    // glutTimerFunc(25, update, 0);
    update(0);

    // glutKeyboardFunc(key);
    glutMainLoop();




    return 0;
}

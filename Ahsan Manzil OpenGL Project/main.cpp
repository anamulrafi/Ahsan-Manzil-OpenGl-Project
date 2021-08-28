 /*cout << "*********Ahsan Manzil Front view ********" << endl << endl;
    cout << "Press m : For Morning " << endl << endl;
    cout << "Press d : For Day" << endl << endl;
    cout << "Press e : For evening " << endl << endl;
    cout << "Press n : For Night " << endl << endl;

    cout << "Press f : For Fast Move" << endl << endl;
    cout << "Press p : For Pause " << endl << endl;


    cout<< "Group I" << end;

    cout << "Anamul Hoque Rafi , Id- 19-40780-2 " <<endl;
    cout << "Ankon Sarkar Linkon , Id- 19-40895-2 " <<endl;
    cout << "Md: Abir Hossain , Id- 19-40907-2 " <<endl;
    cout << "Abdullah Al Hafiz, Id- 18-36612-1" <<endl;

    */






#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j = 0.0f;
GLfloat h = 0.0f;
GLfloat m = 0.0f;
GLfloat s = 0.0f;

GLfloat position=0.0f;
GLfloat speed=0.003f;
GLfloat position1=0.0f;
GLfloat speed1=0.01f;
GLfloat position2=0.0f;
GLfloat speed2=0.02f;
GLfloat position3=0.0f;
GLfloat speed3=0.03f;
GLfloat position4 = 0.0f;
GLfloat speed4 = 0.1f;

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void screen()
{
    gluOrtho2D(-2,2,-2,2);
}
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void update(int value){
if(position>1.5)
    {
        position=-0.9;
    }
    position+=speed;
    glutPostRedisplay();
    glutTimerFunc(100,update,0);
}
void update1(int value){
if(position1>1.5)
    {
        position1=-0.9;
    }
    position1+=speed1;
    glutPostRedisplay();
    glutTimerFunc(100,update1,0);
}

void update2(int value){
if(position2>1.5)
    {
        position2=-0.9;
    }
    position2-=speed2;
    glutPostRedisplay();
    glutTimerFunc(100,update2,0);
}

void update3(int value){
if(position3>1.5)
    {
        position3=-0.9;
    }
    position3+=speed3;
    glutPostRedisplay();
    glutTimerFunc(100,update3,0);
}



void update4(int value) {

    if(position4 >1.0)
        position4 = 1.0f;

    position4 += speed4; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);
}







void morning() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

 // glLineWidth(5);
 glBegin(GL_QUADS);//SKY
    glColor3ub(199, 210, 237);

    glVertex2f(-1,1);    // x, y
    glVertex2f(-1,0.0);
        // x, y
    glVertex2f(1,0.0);    // x, y
    glVertex2f(1,1);

    glEnd();
 glLoadIdentity();

 //sun
  int j21;
 GLfloat x21= -.85f;
  GLfloat y21= .825f;
   GLfloat radius21= .125f;

 int triangleAmount21 =21;

 GLfloat twicePi21 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN); //sun
glColor3ub(252, 139, 0 );
glVertex2f(x21,y21);

for(j21=0; j21<=triangleAmount21; j21++){
    glVertex2f(
    x21+(radius21* cos(j21*twicePi21 /triangleAmount21)),
    y21+(radius21* sin(j21*twicePi21 /triangleAmount21))
               );
}
glEnd();







    //ankon part start
 glBegin(GL_QUADS);//green
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,0.0f);
glVertex2f(-1.0f,-0.5f);
glVertex2f(10.f,-0.5f);
glVertex2f(1.0f,0.0f);
glEnd();

glBegin(GL_QUADS);//fountain left
glColor3ub(198, 140, 83);
glVertex2f(-0.55f,-0.2f);
glVertex2f(-0.57f,-0.32f);
glVertex2f(-0.43f,-0.32f);
glVertex2f(-0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(-0.54f,-0.22f);
glVertex2f(-0.56f,-0.31f);
glVertex2f(-0.44f,-0.31f);
glVertex2f(-0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(-0.505f,-0.26f);
glVertex2f(-0.51f,-0.29f);
glVertex2f(-0.49f,-0.29f);
glVertex2f(-0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.538f,-0.23f);
glVertex2f(-0.5f,-0.26f);
glVertex2f(-0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.54f,-0.214f);
glVertex2f(-0.5f,-0.24f);
glVertex2f(-0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.5f,-0.195f);
glVertex2f(-0.51f,-0.214f);
glVertex2f(-0.49f,-0.214f);
glEnd();
//
glBegin(GL_QUADS);//fountain right
glColor3ub(198, 140, 83);
glVertex2f(0.55f,-0.2f);
glVertex2f(0.57f,-0.32f);
glVertex2f(0.43f,-0.32f);
glVertex2f(0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(0.54f,-0.22f);
glVertex2f(0.56f,-0.31f);
glVertex2f(0.44f,-0.31f);
glVertex2f(0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(0.505f,-0.26f);
glVertex2f(0.51f,-0.29f);
glVertex2f(0.49f,-0.29f);
glVertex2f(0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.538f,-0.23f);
glVertex2f(0.5f,-0.26f);
glVertex2f(0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.54f,-0.214f);
glVertex2f(0.5f,-0.24f);
glVertex2f(0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.5f,-0.195f);
glVertex2f(0.51f,-0.214f);
glVertex2f(0.49f,-0.214f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.25f);
glVertex2f(-.97f,-0.28f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.7f,0.00f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.1f);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.68f,0.1f);
glVertex2f(-0.7f,-0.17);
glVertex2f(-0.2f,-0.17f);
glVertex2f(-0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.3f);
glVertex2f(-0.942f,0.05f);
glVertex2f(-0.65f,0.05f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.93f,0.0f);
glVertex2f(-.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.72f,-0.25f);
glVertex2f(-0.72f,0.0f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,0.0f);
glVertex2f(-.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.05f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,0.0f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.835f,-0.05f);
glVertex2f(-.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.825f,-0.05f);
glVertex2f(-.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.25f,-0.19f);
glVertex2f(-0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.07f);
glVertex2f(-.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.665f,0.07f);
glVertex2f(-.665f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.575f,0.04f);
glVertex2f(-.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.565f,0.04f);
glVertex2f(-.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,0.07f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.07f);
glVertex2f(-0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.04f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,-0.14f);
glVertex2f(-0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,-0.14f);
glVertex2f(-0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.305f,-0.14f);
glVertex2f(-0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,0.07f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.07f);
glVertex2f(-0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.04f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,-0.14f);
glVertex2f(-0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.435f,-0.14f);
glVertex2f(-0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.445f,-0.14f);
glVertex2f(-0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.03f);
glVertex2f(-0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.06f);
glVertex2f(-0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.09f);
glVertex2f(-0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.12f);
glVertex2f(-0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.18f);
glVertex2f(-0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.21f);
glVertex2f(-0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.03f);
glVertex2f(-0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.06f);
glVertex2f(-0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.09f);
glVertex2f(-0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.12f);
glVertex2f(-0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.15f);
glVertex2f(-0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.18f);
glVertex2f(-0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.21f);
glVertex2f(-0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.28f,0.4f);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.24f,0.1f);
glVertex2f(-0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,0.1f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.1f);
glVertex2f(-0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.38f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.3f);
glVertex2f(-0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.3f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.27f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.13f);
glVertex2f(-0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.625f,0.13f);
glVertex2f(-0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.61f,0.13f);
glVertex2f(-0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.3f);
glVertex2f(-0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.3f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.27f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.13f);
glVertex2f(-0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.495f,0.13f);
glVertex2f(-0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.48f,0.13f);
glVertex2f(-0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.3f);
glVertex2f(-0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.3f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.27f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.1f);
glVertex2f(-0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.1f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.13f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,0.27f);
glVertex2f(-0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.335f,0.27f);
glVertex2f(-0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.935f,0.48f);
glVertex2f(-0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.935f,0.53f);
glVertex2f(-0.942f,0.48f);
glVertex2f(-0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.675f,0.48f);
glVertex2f(-0.675f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.676f,0.53f);
glVertex2f(-0.684f,0.48f);
glVertex2f(-0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.28f,0.36f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.95f,0.43f);
glVertex2f(-0.95f,0.35f);
glVertex2f(-0.92f,0.35f);
glVertex2f(-0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.69f,0.43f);
glVertex2f(-0.69f,0.35f);
glVertex2f(-0.66f,0.35f);
glVertex2f(-0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.88f,0.41f);
glVertex2f(-0.88f,0.34f);
glVertex2f(-0.85f,0.34f);
glVertex2f(-0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.82f,0.41f);
glVertex2f(-0.82f,0.34f);
glVertex2f(-0.79f,0.34f);
glVertex2f(-0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.41f);
glVertex2f(-0.76f,0.34f);
glVertex2f(-0.73f,0.34f);
glVertex2f(-0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.23f);
glVertex2f(-0.84f,0.23f);
glVertex2f(-0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.89f,0.21f);
glVertex2f(-0.89f,0.13f);
glVertex2f(-0.85f,0.13f);
glVertex2f(-0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.25f);
glVertex2f(-0.76f,0.23f);
glVertex2f(-0.68f,0.23f);
glVertex2f(-0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.74f,0.21f);
glVertex2f(-0.74f,0.13f);
glVertex2f(-0.7f,0.13f);
glVertex2f(-0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,-0.1f);
glVertex2f(-0.9f,-0.25f);
glVertex2f(-0.87f,-0.25f);
glVertex2f(-0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.78f,-0.1f);
glVertex2f(-0.78f,-0.25f);
glVertex2f(-0.75f,-0.25f);
glVertex2f(-0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.64f,-0.01f);
glVertex2f(-0.64f,-0.17f);
glVertex2f(-0.61f,-0.17f);
glVertex2f(-0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.52f,-0.01f);
glVertex2f(-0.52f,-0.17f);
glVertex2f(-0.49f,-0.17f);
glVertex2f(-0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.39f,-0.01f);
glVertex2f(-0.39f,-0.17f);
glVertex2f(-0.36f,-0.17f);
glVertex2f(-0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.57f,0.23f);
glVertex2f(-0.57f,0.1f);
glVertex2f(-0.54f,0.1f);
glVertex2f(-0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.43f,0.23f);
glVertex2f(-0.43f,0.1f);
glVertex2f(-0.4f,0.1f);
glVertex2f(-0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.38f);
glVertex2f(-0.24f,0.38f);
glVertex2f(-0.24f,0.1f);
glEnd();
//
glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.125f,0.48f);
glVertex2f(-0.125f,0.38f);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.24f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.38f);
glVertex2f(0.24f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.36f);
glVertex2f(0.24f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.05f,0.25f);
glVertex2f(-0.05f,0.1f);
glVertex2f(0.05f,0.1f);
glVertex2f(0.05f,0.25f);
glEnd();

int i;
    glColor3ub(135, 81, 19);
	GLfloat x=.0f; GLfloat y=.25f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	int j;
    glColor3ub(135, 81, 19);
	GLfloat x1=.0f; GLfloat y1=.38f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	int k1;
    glColor3ub(255, 172, 117);
	GLfloat x2=.0f; GLfloat y2=.5f; GLfloat radius2 =.15f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k1 = 0; k1 <= triangleAmount2;k1++) {
			glVertex2f(
		            x2 + (radius2 * cos(k1 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.36f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.36f);
glVertex2f(-0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.34f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.1f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.1f);
glVertex2f(-0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.12f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.12f,0.34f);
glVertex2f(-0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.13f,0.34f);
glVertex2f(-0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.2f,0.25f);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.17f,0.1f);
glVertex2f(-0.17f,0.25f);
glEnd();



glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.36f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.36f);
glVertex2f(0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.34f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.1f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.1f);
glVertex2f(0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.12f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.12f,0.34f);
glVertex2f(0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.13f,0.34f);
glVertex2f(0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.2f,0.25f);
glVertex2f(0.2f,0.1f);
glVertex2f(0.17f,0.1f);
glVertex2f(0.17f,0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.125f,0.38f);
glVertex2f(-0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.17f,0.5f);
glVertex2f(-0.17f,0.48f);
glVertex2f(0.17f,0.48f);
glVertex2f(0.17f,0.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(135, 81, 19);
glVertex2f(0.0f,0.68f);
glVertex2f(-0.02f,0.645f);
glVertex2f(0.02f,0.645f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.25f);
glVertex2f(0.97f,-0.28f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.00f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(.68f,0.1f);
glVertex2f(0.7f,-0.17);
glVertex2f(0.2f,-0.17f);
glVertex2f(0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.3f);
glVertex2f(0.942f,0.05f);
glVertex2f(0.65f,0.05f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.93f,0.0f);
glVertex2f(0.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.72f,-0.25f);
glVertex2f(0.72f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,0.0f);
glVertex2f(0.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.05f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,0.0f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.835f,-0.05f);
glVertex2f(0.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.825f,-0.05f);
glVertex2f(0.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.25f,-0.19f);
glVertex2f(0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.665f,0.07f);
glVertex2f(0.665f,-0.17f);
glEnd();//

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.575f,0.04f);
glVertex2f(0.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.565f,0.04f);
glVertex2f(0.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.58f,-0.17f);
glVertex2f(.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.56f,-0.17f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,0.07f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.07f);
glVertex2f(0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.04f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,-0.14f);
glVertex2f(0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,-0.14f);
glVertex2f(0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.305f,-0.14f);
glVertex2f(0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,0.07f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.07f);
glVertex2f(0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.04f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,-0.14f);
glVertex2f(0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.435f,-0.14f);
glVertex2f(0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.445f,-0.14f);
glVertex2f(0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.03f);
glVertex2f(0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.06f);
glVertex2f(0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.09f);
glVertex2f(0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.12f);
glVertex2f(0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.18f);
glVertex2f(0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.21f);
glVertex2f(0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.03f);
glVertex2f(0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.06f);
glVertex2f(0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.09f);
glVertex2f(0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.12f);
glVertex2f(0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.15f);
glVertex2f(0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.18f);
glVertex2f(0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.21f);
glVertex2f(0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.3f);
glVertex2f(0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.3f);
glVertex2f(0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.3f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.27f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.13f);
glVertex2f(0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.625f,0.13f);
glVertex2f(0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.61f,0.13f);
glVertex2f(0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.3f);
glVertex2f(0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.3f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.27f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.13f);
glVertex2f(0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.495f,0.13f);
glVertex2f(0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.48f,0.13f);
glVertex2f(0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.3f);
glVertex2f(0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.3f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.27f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.1f);
glVertex2f(0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.1f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.13f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,0.27f);
glVertex2f(0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.335f,0.27f);
glVertex2f(0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.935f,0.48f);
glVertex2f(0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.935f,0.53f);
glVertex2f(0.942f,0.48f);
glVertex2f(0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.677f,0.48f);
glVertex2f(0.677f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.676f,0.53f);
glVertex2f(0.684f,0.48f);
glVertex2f(0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.95f,0.43f);
glVertex2f(0.95f,0.35f);
glVertex2f(0.92f,0.35f);
glVertex2f(0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.69f,0.43f);
glVertex2f(0.69f,0.35f);
glVertex2f(0.66f,0.35f);
glVertex2f(0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.88f,0.41f);
glVertex2f(0.88f,0.34f);
glVertex2f(0.85f,0.34f);
glVertex2f(0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.82f,0.41f);
glVertex2f(0.82f,0.34f);
glVertex2f(0.79f,0.34f);
glVertex2f(0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.41f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.73f,0.34f);
glVertex2f(0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,0.25f);
glVertex2f(0.9f,0.23f);
glVertex2f(0.84f,0.23f);
glVertex2f(0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.89f,0.21f);
glVertex2f(0.89f,0.13f);
glVertex2f(0.85f,0.13f);
glVertex2f(0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.25f);
glVertex2f(0.76f,0.23f);
glVertex2f(0.68f,0.23f);
glVertex2f(0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.74f,0.21f);
glVertex2f(0.74f,0.13f);
glVertex2f(0.7f,0.13f);
glVertex2f(0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,-0.1f);
glVertex2f(0.9f,-0.25f);
glVertex2f(0.87f,-0.25f);
glVertex2f(0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.78f,-0.1f);
glVertex2f(0.78f,-0.25f);
glVertex2f(0.75f,-0.25f);
glVertex2f(0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.64f,-0.01f);
glVertex2f(0.64f,-0.17f);
glVertex2f(0.61f,-0.17f);
glVertex2f(0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.52f,-0.01f);
glVertex2f(0.52f,-0.17f);
glVertex2f(0.49f,-0.17f);
glVertex2f(0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.39f,-0.01f);
glVertex2f(0.39f,-0.17f);
glVertex2f(0.36f,-0.17f);
glVertex2f(0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.57f,0.23f);
glVertex2f(0.57f,0.1f);
glVertex2f(0.54f,0.1f);
glVertex2f(0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.43f,0.23f);
glVertex2f(0.43f,0.1f);
glVertex2f(0.4f,0.1f);
glVertex2f(0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.23f,0.11f);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(-0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.34f,-0.28f);
glVertex2f(-0.34f,-0.32f);
glVertex2f(-0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.23f,0.11f);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.34f,-0.28f);
glVertex2f(0.34f,-0.32f);
glVertex2f(0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.22f,0.1f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.22f,0.1f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.225f,0.08f);
glVertex2f(0.225f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.23f,0.06f);
glVertex2f(0.23f,0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.235f,0.04f);
glVertex2f(0.235f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.02f);
glVertex2f(0.24f,0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.245f,0.0f);
glVertex2f(0.245f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,-0.02f);
glVertex2f(0.25f,-0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.255f,-0.04f);
glVertex2f(0.255f,-0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.26f,-0.06f);
glVertex2f(0.26f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.265f,-0.08f);
glVertex2f(0.265f,-0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,-0.1f);
glVertex2f(0.27f,-0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.275f,-0.12f);
glVertex2f(0.275f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,-0.14f);
glVertex2f(0.28f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.284f,-0.16f);
glVertex2f(0.284f,-0.16f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.288f,-0.18f);
glVertex2f(0.288f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.291f,-0.2f);
glVertex2f(0.291f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.295f,-0.22f);
glVertex2f(0.295f,-0.22f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.299f,-0.24f);
glVertex2f(0.299f,-0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,-0.26f);
glVertex2f(0.31f,-0.26f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.314f,-0.28f);
glVertex2f(0.314f,-0.28f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.318f,-0.3f);
glVertex2f(0.318f,-0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.315f);
glVertex2f(0.32f,-0.315f);
glEnd();

//under

glBegin(GL_QUADS); //black part
glColor3ub(15, 12, 4);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-.90f);
glVertex2f(1.0f,-.90f);
glVertex2f(1.0f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.80f,-0.9650f);
glVertex2f(-.80f,-.90f);
glVertex2f(-.60f,-.90f);
glVertex2f(-.60f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.40f,-0.9650f);
glVertex2f(-.40f,-.90f);
glVertex2f(-.20f,-.90f);
glVertex2f(-.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.0f,-0.9650f);
glVertex2f(0.0f,-.90f);
glVertex2f(.20f,-.90f);
glVertex2f(.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.40f,-0.9650f);
glVertex2f(0.40f,-.90f);
glVertex2f(.60f,-.90f);
glVertex2f(.60f,-0.9650f);
glEnd();


glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(1.0f,-0.9650f);
glVertex2f(1.0f,-.90f);
glVertex2f(.80f,-.90f);
glVertex2f(.80f,-0.9650f);
glEnd();
//close
// under tree
glBegin(GL_QUADS);
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.9650f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.92f,-1.0f);
glVertex2f(-.950f,-0.9f);
glVertex2f(-.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.94f,-1.0f);
glVertex2f(-.970f,-0.9f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.82f,-1.0f);
glVertex2f(-.850f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.84f,-1.0f);
glVertex2f(-.870f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.72f,-1.0f);
glVertex2f(-.750f,-0.9f);
glVertex2f(-.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.75f,-1.0f);
glVertex2f(-.770f,-0.9f);
glVertex2f(-.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.62f,-1.0f);
glVertex2f(-.650f,-0.9f);
glVertex2f(-.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.65f,-1.0f);
glVertex2f(-.670f,-0.9f);
glVertex2f(-.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.52f,-1.0f);
glVertex2f(-.550f,-0.9f);
glVertex2f(-.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.55f,-1.0f);
glVertex2f(-.570f,-0.9f);
glVertex2f(-.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.42f,-1.0f);
glVertex2f(-.450f,-0.9f);
glVertex2f(-.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.45f,-1.0f);
glVertex2f(-.470f,-0.9f);
glVertex2f(-.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.32f,-1.0f);
glVertex2f(-.350f,-0.9f);
glVertex2f(-.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.35f,-1.0f);
glVertex2f(-.370f,-0.9f);
glVertex2f(-.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.22f,-1.0f);
glVertex2f(-.250f,-0.9f);
glVertex2f(-.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.25f,-1.0f);
glVertex2f(-.270f,-0.9f);
glVertex2f(-.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.12f,-1.0f);
glVertex2f(-.150f,-0.9f);
glVertex2f(-.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.15f,-1.0f);
glVertex2f(-.170f,-0.9f);
glVertex2f(-.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.02f,-1.0f);
glVertex2f(-.050f,-0.9f);
glVertex2f(-.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.05f,-1.0f);
glVertex2f(-.070f,-0.9f);
glVertex2f(-.12f,-1.0f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.92f,-1.0f);
glVertex2f(.950f,-0.9f);
glVertex2f(.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.94f,-1.0f);
glVertex2f(.970f,-0.9f);
glVertex2f(1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.82f,-1.0f);
glVertex2f(.85f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.84f,-1.0f);
glVertex2f(.870f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.72f,-1.0f);
glVertex2f(.750f,-0.9f);
glVertex2f(.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(.75f,-1.0f);
glVertex2f(.770f,-0.9f);
glVertex2f(.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.62f,-1.0f);
glVertex2f(.650f,-0.9f);
glVertex2f(.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.65f,-1.0f);
glVertex2f(.670f,-0.9f);
glVertex2f(.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.52f,-1.0f);
glVertex2f(.550f,-0.9f);
glVertex2f(.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.55f,-1.0f);
glVertex2f(.570f,-0.9f);
glVertex2f(.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.42f,-1.0f);
glVertex2f(.450f,-0.9f);
glVertex2f(.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.45f,-1.0f);
glVertex2f(.470f,-0.9f);
glVertex2f(.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.32f,-1.0f);
glVertex2f(.350f,-0.9f);
glVertex2f(.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.35f,-1.0f);
glVertex2f(.370f,-0.9f);
glVertex2f(.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.22f,-1.0f);
glVertex2f(.250f,-0.9f);
glVertex2f(.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.25f,-1.0f);
glVertex2f(.270f,-0.9f);
glVertex2f(.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.12f,-1.0f);
glVertex2f(.150f,-0.9f);
glVertex2f(.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.15f,-1.0f);
glVertex2f(.170f,-0.9f);
glVertex2f(.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.02f,-1.0f);
glVertex2f(.050f,-0.9f);
glVertex2f(.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.05f,-1.0f);
glVertex2f(0.070f,-0.9f);
glVertex2f(.12f,-1.0f);
glEnd();

//boundary
//tree
glBegin(GL_QUADS); //1
glColor3ub(255, 254, 252);
glVertex2f(-.70f,-.50f);
glVertex2f(-0.725f,-0.5f);
glVertex2f(-0.725f,-0.41f);
glVertex2f(-.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.410f);
glVertex2f(-0.66f,-0.41f);
glVertex2f(-.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.4250f);
glVertex2f(-0.66f,-0.425f);
glVertex2f(-.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //2
glColor3ub(255, 254, 252);
glVertex2f(-.40f,-.50f);
glVertex2f(-0.425f,-0.5f);
glVertex2f(-0.425f,-0.41f);
glVertex2f(-.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.410f);
glVertex2f(-0.36f,-0.41f);
glVertex2f(-.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.4250f);
glVertex2f(-0.36f,-0.425f);
glVertex2f(-.4125f,-.35f);
glEnd();


glBegin(GL_QUADS); //3
glColor3ub(255, 254, 252);
glVertex2f(.70f,-.50f);
glVertex2f(0.725f,-0.5f);
glVertex2f(0.725f,-0.41f);
glVertex2f(.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.410f);
glVertex2f(0.66f,-0.41f);
glVertex2f(.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.4250f);
glVertex2f(0.66f,-0.425f);
glVertex2f(.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //4
glColor3ub(255, 254, 252);
glVertex2f(.40f,-.50f);
glVertex2f(0.425f,-0.5f);
glVertex2f(0.425f,-0.41f);
glVertex2f(.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.410f);
glVertex2f(0.36f,-0.41f);
glVertex2f(.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.4250f);
glVertex2f(0.36f,-0.425f);
glVertex2f(.4125f,-.35f);
glEnd();

// Boundary Light
//1
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.80f,-.50f);
glVertex2f(-0.825f,-0.5f);
glVertex2f(-0.825f,-0.41f);
glVertex2f(-.8f,-0.410f);
glEnd();

int i13;

	GLfloat x13=-.8125f; GLfloat y13=-.375f; GLfloat radius13 =.04f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x13, y13); // center of circle
		for(i13 = 0; i13<= triangleAmount13; i13++) {
			glVertex2f(
		            x13 + (radius13 * cos(i13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

//2
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.50f,-.50f);
glVertex2f(-0.525f,-0.5f);
glVertex2f(-0.525f,-0.41f);
glVertex2f(-.50f,-0.410f);
glEnd();

int i14;

	GLfloat x14=-.5125f; GLfloat y14=-.375f; GLfloat radius14 =.04f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x14, y14); // center of circle
		for(i14 = 0; i14<= triangleAmount14; i14++) {
			glVertex2f(
		            x14 + (radius14 * cos(i14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();














glBegin(GL_QUADS); //3
glColor3ub(15, 9, 9);
glVertex2f(.50f,-.50f);
glVertex2f(0.525f,-0.5f);
glVertex2f(0.525f,-0.41f);
glVertex2f(.50f,-0.410f);
glEnd();

int i11;

	GLfloat x11=.5125f; GLfloat y11=-.375f; GLfloat radius11 =.04f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11<= triangleAmount11;i11++) {
			glVertex2f(
		            x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
			);
		}
	glEnd();



//4
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(.80f,-.50f);
glVertex2f(0.825f,-0.5f);
glVertex2f(0.825f,-0.41f);
glVertex2f(.8f,-0.410f);
glEnd();

int i12;

	GLfloat x12=.8125f; GLfloat y12=-.375f; GLfloat radius12 =.04f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12<= triangleAmount12;i12++) {
			glVertex2f(
		            x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	//road
glBegin(GL_QUADS);
glColor3ub(107, 104, 96);
glVertex2f(-1.0f,-.50f);
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.5f);
glEnd();

// upper ground tree
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.92f,-.50f);
glVertex2f(-.950f,-0.43f);
glVertex2f(-.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.94f,-.50f);
glVertex2f(-.970f,-0.43f);
glVertex2f(-1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.82f,-.50f);
glVertex2f(-.850f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.84f,-.50f);
glVertex2f(-.870f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.72f,-.50f);
glVertex2f(-.750f,-0.43f);
glVertex2f(-.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.75f,-.50f);
glVertex2f(-.770f,-0.43f);
glVertex2f(-.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.62f,-.50f);
glVertex2f(-.650f,-0.43f);
glVertex2f(-.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.65f,-.50f);
glVertex2f(-.670f,-0.43f);
glVertex2f(-.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.52f,-.50f);
glVertex2f(-.550f,-0.43f);
glVertex2f(-.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.55f,-.50f);
glVertex2f(-.570f,-0.429f);
glVertex2f(-.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.42f,-.50f);
glVertex2f(-.450f,-0.43f);
glVertex2f(-.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.45f,-.50f);
glVertex2f(-.470f,-0.43f);
glVertex2f(-.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.32f,-.50f);
glVertex2f(-.350f,-0.43f);
glVertex2f(-.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.35f,-.50f);
glVertex2f(-.370f,-0.429f);
glVertex2f(-.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.22f,-.50f);
glVertex2f(-.250f,-0.429f);
glVertex2f(-.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.25f,-.50f);
glVertex2f(-.270f,-0.429f);
glVertex2f(-.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.12f,-.50f);
glVertex2f(-.150f,-0.429f);
glVertex2f(-.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.15f,-.50f);
glVertex2f(-.170f,-0.429f);
glVertex2f(-.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.02f,-.50f);
glVertex2f(-.050f,-0.429f);
glVertex2f(-.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.05f,-.50f);
glVertex2f(-.070f,-0.429f);
glVertex2f(-.12f,-.50f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.92f,-.50f);
glVertex2f(.950f,-0.43f);
glVertex2f(.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.94f,-.50f);
glVertex2f(.970f,-0.43f);
glVertex2f(1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.82f,-.50f);
glVertex2f(.850f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.84f,-.50f);
glVertex2f(.870f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.72f,-.50f);
glVertex2f(.750f,-0.43f);
glVertex2f(.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.75f,-.50f);
glVertex2f(.770f,-0.43f);
glVertex2f(.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.62f,-.50f);
glVertex2f(.650f,-0.43f);
glVertex2f(.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.65f,-.50f);
glVertex2f(.670f,-0.43f);
glVertex2f(.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.52f,-.50f);
glVertex2f(.550f,-0.43f);
glVertex2f(.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.55f,-.50f);
glVertex2f(.570f,-0.429f);
glVertex2f(.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.42f,-.50f);
glVertex2f(.450f,-0.43f);
glVertex2f(.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.45f,-.50f);
glVertex2f(.470f,-0.43f);
glVertex2f(.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.32f,-.50f);
glVertex2f(.350f,-0.43f);
glVertex2f(.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.35f,-.50f);
glVertex2f(.370f,-0.429f);
glVertex2f(.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.22f,-.50f);
glVertex2f(.250f,-0.429f);
glVertex2f(.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.25f,-.50f);
glVertex2f(.270f,-0.429f);
glVertex2f(.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.12f,-.50f);
glVertex2f(.150f,-0.429f);
glVertex2f(.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.15f,-.50f);
glVertex2f(.170f,-0.429f);
glVertex2f(.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.02f,-.50f);
glVertex2f(.050f,-0.429f);
glVertex2f(.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.05f,-.50f);
glVertex2f(.070f,-0.429f);
glVertex2f(.12f,-.50f);
glEnd();


//red part
glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.490f);
glVertex2f(-1.0f,-0.505f);
glVertex2f(1.0f,-0.505f);
glVertex2f(1.0f,-0.49f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.405f);
glVertex2f(-1.0f,-0.41f);
glVertex2f(1.0f,-0.41f);
glVertex2f(1.0f,-0.405f);
glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(150, 29, 29);
glVertex2f(-.980f,-.5f);
glVertex2f(-1.0f,-0.41f);

glVertex2f(-.890f,-.5f);
glVertex2f(-.90f,-0.41f);

glVertex2f(-.790f,-.5f);
glVertex2f(-.80f,-0.41f);

glVertex2f(-.690f,-.5f);
glVertex2f(-.70f,-0.41f);

glVertex2f(-.590f,-.5f);
glVertex2f(-.60f,-0.41f);

glVertex2f(-.490f,-.5f);
glVertex2f(-.50f,-0.41f);

glVertex2f(-.390f,-.5f);
glVertex2f(-.40f,-0.41f);

glVertex2f(-.290f,-.5f);
glVertex2f(-.30f,-0.41f);

glVertex2f(-.190f,-.5f);
glVertex2f(-.20f,-0.41f);

glVertex2f(-.090f,-.5f);
glVertex2f(-.10f,-0.41f);

glVertex2f(-.010f,-.5f);
glVertex2f(0.0f,-0.41f);



glVertex2f(.980f,-.5f);
glVertex2f(1.0f,-0.41f);

glVertex2f(.890f,-.5f);
glVertex2f(.90f,-0.41f);

glVertex2f(.790f,-.5f);
glVertex2f(.80f,-0.41f);

glVertex2f(.690f,-.5f);
glVertex2f(.70f,-0.41f);

glVertex2f(.590f,-.5f);
glVertex2f(.60f,-0.41f);

glVertex2f(.490f,-.5f);
glVertex2f(.50f,-0.41f);

glVertex2f(.390f,-.5f);
glVertex2f(.40f,-0.41f);

glVertex2f(.290f,-.5f);
glVertex2f(.30f,-0.41f);

glVertex2f(.190f,-.5f);
glVertex2f(.20f,-0.41f);

glVertex2f(.090f,-.5f);
glVertex2f(.10f,-0.41f);
glEnd();

glLoadIdentity();

glLineWidth(6);
glBegin(GL_LINES);
glColor3ub(255, 255,255);
glVertex2f(-1.0, -.7);
glVertex2f(-.955, -.7);

glVertex2f(-.9250, -.7);
glVertex2f(-.88, -.7);

glVertex2f(-.850, -.7);
glVertex2f(-.805, -.7);

glVertex2f(-.7750, -.7);
glVertex2f(-.73, -.7);

glVertex2f(-.70, -.7);
glVertex2f(-.655, -.7);

glVertex2f(-.6250, -.7);
glVertex2f(-.58, -.7);

glVertex2f(-.550, -.7);
glVertex2f(-.505, -.7);

glVertex2f(-.4750, -.7);
glVertex2f(-.43, -.7);


glVertex2f(-.40, -.7);
glVertex2f(-.355, -.7);

glVertex2f(-.3250, -.7);
glVertex2f(-.28, -.7);

glVertex2f(-.250, -.7);
glVertex2f(-.205, -.7);

glVertex2f(-.1750, -.7);
glVertex2f(-.13, -.7);

glVertex2f(-.10, -.7);
glVertex2f(-.055, -.7);

glVertex2f(-.025, -.7);
glVertex2f(.02, -.7);


//positive resigione

glVertex2f(1.0, -.7);
glVertex2f(.955, -.7);

glVertex2f(.9250, -.7);
glVertex2f(.88, -.7);

glVertex2f(.850, -.7);
glVertex2f(.805, -.7);

glVertex2f(.7750, -.7);
glVertex2f(.73, -.7);

glVertex2f(.70, -.7);
glVertex2f(.655, -.7);

glVertex2f(.6250, -.7);
glVertex2f(.58, -.7);

glVertex2f(.550, -.7);
glVertex2f(.505, -.7);

glVertex2f(.4750, -.7);
glVertex2f(.43, -.7);


glVertex2f(.40, -.7);
glVertex2f(.355, -.7);

glVertex2f(.3250, -.7);
glVertex2f(.28, -.7);

glVertex2f(.250, -.7);
glVertex2f(.205, -.7);

glVertex2f(.1750, -.7);
glVertex2f(.13, -.7);

glVertex2f(.10, -.7);
glVertex2f(.055, -.7);
glEnd();

glLoadIdentity();







	glFlush();
}

void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

 // glLineWidth(5);
 glBegin(GL_QUADS);//SKY
    glColor3ub(135,206,250);

    glVertex2f(-1,1);    // x, y
    glVertex2f(-1,0.0);
        // x, y
    glVertex2f(1,0.0);    // x, y
    glVertex2f(1,1);

    glEnd();
 glLoadIdentity();

 glPushMatrix();
       glTranslatef(position,0,0);
    	int j;//sun
    glColor3ub(255,102,0);
	GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.1f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


    glPushMatrix();
    glTranslatef(position1,0,0);
    int j1;//CLOUD 1
    glColor3ub(255,255,255);
	GLfloat x1=-0.8f; GLfloat y1=0.8f; GLfloat radius1 =0.2f;
	int triangleAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j1 = 0; j1 <= triangleAmount1;j1++) {
			glVertex2f(
		            x1 + (radius1 * cos(j1 *  twicePi / triangleAmount)),
			    y1+ (radius1 * sin(j1 * twicePi / triangleAmount))
			);
		}
	glEnd();

int j2;//CLOUD 2
    glColor3ub(255,255,255);
	GLfloat x2=-0.8f; GLfloat y2=0.9f; GLfloat radius2 =0.3f;
	int triangleAmount2 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x2 + (radius * cos(j *  twicePi / triangleAmount)),
			    y2+ (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j3;//CLOUD 3
    glColor3ub(255,255,255);
	GLfloat x3=-0.7f; GLfloat y3=0.9f; GLfloat radius3 =0.3f;
	int triangleAmount3 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x3 + (radius * cos(j *  twicePi / triangleAmount)),
			    y3+ (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j4;//CLOUD 4
    glColor3ub(255,255,255);
	GLfloat x4=-.4f; GLfloat y4=.9f; GLfloat radius4 =0.1f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x4 + (radius * cos(j *  twicePi / triangleAmount)),
			    y4 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();


int j5;//CLOUD 5
    glColor3ub(255,255,255);
	GLfloat x5=-.499f; GLfloat y5=.9f; GLfloat radius5 =0.1f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x5 + (radius * cos(j *  twicePi / triangleAmount)),
			    y5 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j6;//CLOUD 6
    glColor3ub(255,255,255);
	GLfloat x6=.499f; GLfloat y6=.9f; GLfloat radius6 =0.1f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x6 + (radius * cos(j *  twicePi / triangleAmount)),
			    y6 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j7;//CLOUD 7
    glColor3ub(255,255,255);
	GLfloat x7=.4f; GLfloat y7=.9f; GLfloat radius7 =0.1f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x7 + (radius * cos(j *  twicePi / triangleAmount)),
			    y7 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
	 glPopMatrix();

 /*   glPushMatrix();
    glTranslatef(position2,0,0);
    glBegin(GL_QUADS);   // BIRD 1
    glColor3ub(153, 53, 0);
    glVertex2f(-0.13,0.78);    // x, y
    glVertex2f(-0.13,0.7);
        // x, y
    glVertex2f(-0.13,0.7);    // x, y
    glVertex2f(-0.1,0.7);
        // x, y
    glVertex2f(-0.1,0.7);//
    glVertex2f(-0.1,0.78);
        // x, y
    glVertex2f(-0.1,0.78);    // x, y
    glVertex2f(-0.13,0.78);
    glEnd();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.1,0.84);    // x, y
    glVertex2f(-0.115, 0.75);    // x, y
    glEnd();
 glLoadIdentity();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.115,0.69999);    // x, y
    glVertex2f(-0.1, 0.65);    // x, y
    glEnd();
 glLoadIdentity();
 glBegin(GL_QUADS);   // BIRD 2
    glColor3ub(153, 53, 0);
    glVertex2f(-0.23,0.78);    // x, y
    glVertex2f(-0.23,0.7);
        // x, y
    glVertex2f(-0.23,0.7);    // x, y
    glVertex2f(-0.2,0.7);
        // x, y
    glVertex2f(-0.2,0.7);//
    glVertex2f(-0.2,0.78);
        // x, y
    glVertex2f(-0.2,0.78);    // x, y
    glVertex2f(-0.23,0.78);
    glEnd();

   // glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.2,0.84);    // x, y
    glVertex2f(-0.215, 0.75);    // x, y
    glEnd();

 glLoadIdentity();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.215,0.69999);    // x, y
    glVertex2f(-0.2, 0.65);    // x, y
    glEnd();


    glBegin(GL_QUADS);   // BIRD 3
    glColor3ub(153, 53, 0);
    glVertex2f(-0.33,0.78);    // x, y
    glVertex2f(-0.33,0.7);
        // x, y
    glVertex2f(-0.33,0.7);    // x, y
    glVertex2f(-0.3,0.7);
        // x, y
    glVertex2f(-0.3,0.7);//
    glVertex2f(-0.3,0.78);
        // x, y
    glVertex2f(-0.3,0.78);    // x, y
    glVertex2f(-0.33,0.78);
    glEnd();
 glLoadIdentity();
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.3,0.84);    // x, y
    glVertex2f(-0.315, 0.75);    // x, y
    glEnd();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.315,0.69999);    // x, y
    glVertex2f(-0.3, 0.65);    // x, y
    glEnd();


    glBegin(GL_QUADS);   // BIRD 4
    glColor3ub(153, 53, 0);
    glVertex2f(-0.43,0.78);    // x, y
    glVertex2f(-0.43,0.7);
        // x, y
    glVertex2f(-0.43,0.7);    // x, y
    glVertex2f(-0.4,0.7);
        // x, y
    glVertex2f(-0.4,0.7);//
    glVertex2f(-0.4,0.78);
        // x, y
    glVertex2f(-0.4,0.78);    // x, y
    glVertex2f(-0.43,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.4,0.84);    // x, y
    glVertex2f(-0.415, 0.75);    // x, y
    glEnd();
 glLoadIdentity();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.415,0.69999);    // x, y
    glVertex2f(-0.4, 0.65);    // x, y
    glEnd();
 glLoadIdentity();

  glBegin(GL_QUADS);   // BIRD 5
    glColor3ub(153, 53, 0);
    glVertex2f(-0.53,0.78);    // x, y
    glVertex2f(-0.53,0.7);
        // x, y
    glVertex2f(-0.53,0.7);    // x, y
    glVertex2f(-0.5,0.7);
        // x, y
    glVertex2f(-0.5,0.7);//
    glVertex2f(-0.5,0.78);
        // x, y
    glVertex2f(-0.5,0.78);    // x, y
    glVertex2f(-0.53,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.5,0.84);    // x, y
    glVertex2f(-0.515, 0.75);    // x, y
    glEnd();
 glLoadIdentity();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.515,0.69999);    // x, y
    glVertex2f(-0.5, 0.65);    // x, y
    glEnd();
 glLoadIdentity();

  glBegin(GL_QUADS);   // BIRD 6
    glColor3ub(153, 53, 0);
    glVertex2f(-0.63,0.78);    // x, y
    glVertex2f(-0.63,0.7);
        // x, y
    glVertex2f(-0.63,0.7);    // x, y
    glVertex2f(-0.6,0.7);
        // x, y
    glVertex2f(-0.6,0.7);//
    glVertex2f(-0.6,0.78);
        // x, y
    glVertex2f(-0.6,0.78);    // x, y
    glVertex2f(-0.63,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.6,0.84);    // x, y
    glVertex2f(-0.615, 0.75);    // x, y
    glEnd();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.615,0.69999);    // x, y
    glVertex2f(-0.6, 0.65);    // x, y
    glEnd();
 glLoadIdentity();
 glBegin(GL_QUADS);   // BIRD 7
    glColor3ub(153, 53, 0);
    glVertex2f(-0.73,0.78);    // x, y
    glVertex2f(-0.73,0.7);
        // x, y
    glVertex2f(-0.73,0.7);    // x, y
    glVertex2f(-0.7,0.7);
        // x, y
    glVertex2f(-0.7,0.7);//
    glVertex2f(-0.7,0.78);
        // x, y
    glVertex2f(-0.7,0.78);    // x, y
    glVertex2f(-0.73,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.7,0.84);    // x, y
    glVertex2f(-0.715, 0.75);    // x, y
    glEnd();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.715,0.69999);    // x, y
    glVertex2f(-0.7, 0.65);    // x, y
    glEnd();
    glPopMatrix();*/




    //plan //plan//plan//plan//plan //plan//plan//plan//plan //plan//plan//plan//plan //plan//plan//plan
    glPushMatrix();
    glTranslatef(position3,0.75,0);

    glScaled(0.55,0.55,0);
    {



        glBegin(GL_POLYGON);//plane
        glColor3ub(217, 197, 180);
        glVertex2f(-0.30f,-0.5f);
        glVertex2f(-0.90f,-0.5f);
        glVertex2f(-0.9f,-0.58f);
        glVertex2f(-0.7f,-0.65f);
        glVertex2f(-0.3f,-0.65f);
        glVertex2f(-0.15f,-0.65f);
        glEnd();

        glBegin(GL_TRIANGLES);//plane font window
        glColor3ub(0,0,0);
        glVertex2f(-0.17f,-0.64f);
        glVertex2f(-0.30f,-0.51f);
        glVertex2f(-0.30f,-0.64f);
        glEnd();

          glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.35f,-0.55f);
        glVertex2f(-0.33f,-0.55f);
        glVertex2f(-0.33f,-0.58f);
        glVertex2f(-0.35f,-0.58f);
        glEnd();

         glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.4f,-0.55f);
        glVertex2f(-0.38f,-0.55f);
        glVertex2f(-0.38f,-0.58f);
        glVertex2f(-0.4f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.45f,-0.55f);
        glVertex2f(-0.43f,-0.55f);
        glVertex2f(-0.43f,-0.58f);
        glVertex2f(-0.45f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.5f,-0.55f);
        glVertex2f(-0.48f,-0.55f);
        glVertex2f(-0.48f,-0.58f);
        glVertex2f(-0.5f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.55f,-0.55f);
        glVertex2f(-0.53f,-0.55f);
        glVertex2f(-0.53f,-0.58f);
        glVertex2f(-0.55f,-0.58f);
        glEnd();

         glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.6f,-0.55f);
        glVertex2f(-0.58f,-0.55f);
        glVertex2f(-0.58f,-0.58f);
        glVertex2f(-0.6f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.65f,-0.55f);
        glVertex2f(-0.63f,-0.55f);
        glVertex2f(-0.63f,-0.58f);
        glVertex2f(-0.65f,-0.58f);
        glEnd();



            j;//airplane tire
            glColor3ub(255,255,255);
            x1=-.32f; y1=-.7f;radius1 =0.02f;
            triangleAmount1 = 20; //# of triangles used to draw circle

            //GLfloat radius = 0.8f; //radius
            twicePi1 = 2.0f * PI;

            glBegin(GL_TRIANGLE_FAN);
                glVertex2f(x1, y1); // center of circle
                for(j = 0; j <= triangleAmount1;j++) {
                    glVertex2f(
                            x1 + (radius1 * cos( j*  twicePi1 / triangleAmount1)),
                        y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
                    );
                }
            glEnd();

            int k;//airplane tire
            glColor3ub(255,255,255);
            x2=-.68f;y2=-.7f;radius2 =.02f;
            triangleAmount2 = 20; //# of triangles used to draw circle

            //GLfloat radius = 0.8f; //radius
            twicePi2 = 2.0f * PI;

            glBegin(GL_TRIANGLE_FAN);
                glVertex2f(x2, y2); // center of circle
                for(k = 0; k <= triangleAmount2;k++) {
                    glVertex2f(
                            x2 + (radius2 * cos( k*  twicePi2 / triangleAmount2)),
                        y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
                    );
                }
            glEnd();




        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(-0.32f,-0.7f);
        glVertex2f(-0.32f,-0.65f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(-0.68f,-0.7f);
        glVertex2f(-0.68f,-0.65f);
        glEnd();



            glBegin(GL_QUADS);//plane back wings
        glColor3ub(217, 197, 180);
        glVertex2f(-0.80f,-0.5f);
        glVertex2f(-0.84f,-0.39f);
        glVertex2f(-0.9f,-0.39f);
        glVertex2f(-0.9f,-0.5f);
        glEnd();



        glBegin(GL_QUADS);//plane upper wings
        glColor3ub(131, 114, 99);
        glVertex2f(-0.5f,-0.5f);
        glVertex2f(-0.56f,-0.44f);
        glVertex2f(-0.62f,-0.44f);
        glVertex2f(-0.59f,-0.5f);
        glEnd();

        glBegin(GL_QUADS);//plane lower wings
        glColor3ub(131, 114, 99);
        glVertex2f(-0.48f,-0.6f);
        glVertex2f(-0.61f,-0.6f);
        glVertex2f(-0.68f,-0.72f);
        glVertex2f(-0.57f,-0.71f);
        glEnd();
        glPopMatrix();

 glLoadIdentity();



    //ankon part start
 glBegin(GL_QUADS);//green
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,0.0f);
glVertex2f(-1.0f,-0.5f);
glVertex2f(10.f,-0.5f);
glVertex2f(1.0f,0.0f);
glEnd();

glBegin(GL_QUADS);//fountain left
glColor3ub(198, 140, 83);
glVertex2f(-0.55f,-0.2f);
glVertex2f(-0.57f,-0.32f);
glVertex2f(-0.43f,-0.32f);
glVertex2f(-0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(-0.54f,-0.22f);
glVertex2f(-0.56f,-0.31f);
glVertex2f(-0.44f,-0.31f);
glVertex2f(-0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(-0.505f,-0.26f);
glVertex2f(-0.51f,-0.29f);
glVertex2f(-0.49f,-0.29f);
glVertex2f(-0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.538f,-0.23f);
glVertex2f(-0.5f,-0.26f);
glVertex2f(-0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.54f,-0.214f);
glVertex2f(-0.5f,-0.24f);
glVertex2f(-0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.5f,-0.195f);
glVertex2f(-0.51f,-0.214f);
glVertex2f(-0.49f,-0.214f);
glEnd();
//
glBegin(GL_QUADS);//fountain right
glColor3ub(198, 140, 83);
glVertex2f(0.55f,-0.2f);
glVertex2f(0.57f,-0.32f);
glVertex2f(0.43f,-0.32f);
glVertex2f(0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(0.54f,-0.22f);
glVertex2f(0.56f,-0.31f);
glVertex2f(0.44f,-0.31f);
glVertex2f(0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(0.505f,-0.26f);
glVertex2f(0.51f,-0.29f);
glVertex2f(0.49f,-0.29f);
glVertex2f(0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.538f,-0.23f);
glVertex2f(0.5f,-0.26f);
glVertex2f(0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.54f,-0.214f);
glVertex2f(0.5f,-0.24f);
glVertex2f(0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.5f,-0.195f);
glVertex2f(0.51f,-0.214f);
glVertex2f(0.49f,-0.214f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.25f);
glVertex2f(-.97f,-0.28f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.7f,0.00f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.1f);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.68f,0.1f);
glVertex2f(-0.7f,-0.17);
glVertex2f(-0.2f,-0.17f);
glVertex2f(-0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.3f);
glVertex2f(-0.942f,0.05f);
glVertex2f(-0.65f,0.05f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.93f,0.0f);
glVertex2f(-.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.72f,-0.25f);
glVertex2f(-0.72f,0.0f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,0.0f);
glVertex2f(-.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.05f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,0.0f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.835f,-0.05f);
glVertex2f(-.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.825f,-0.05f);
glVertex2f(-.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.25f,-0.19f);
glVertex2f(-0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.07f);
glVertex2f(-.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.665f,0.07f);
glVertex2f(-.665f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.575f,0.04f);
glVertex2f(-.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.565f,0.04f);
glVertex2f(-.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,0.07f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.07f);
glVertex2f(-0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.04f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,-0.14f);
glVertex2f(-0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,-0.14f);
glVertex2f(-0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.305f,-0.14f);
glVertex2f(-0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,0.07f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.07f);
glVertex2f(-0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.04f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,-0.14f);
glVertex2f(-0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.435f,-0.14f);
glVertex2f(-0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.445f,-0.14f);
glVertex2f(-0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.03f);
glVertex2f(-0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.06f);
glVertex2f(-0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.09f);
glVertex2f(-0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.12f);
glVertex2f(-0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.18f);
glVertex2f(-0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.21f);
glVertex2f(-0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.03f);
glVertex2f(-0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.06f);
glVertex2f(-0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.09f);
glVertex2f(-0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.12f);
glVertex2f(-0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.15f);
glVertex2f(-0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.18f);
glVertex2f(-0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.21f);
glVertex2f(-0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.28f,0.4f);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.24f,0.1f);
glVertex2f(-0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,0.1f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.1f);
glVertex2f(-0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.38f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.3f);
glVertex2f(-0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.3f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.27f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.13f);
glVertex2f(-0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.625f,0.13f);
glVertex2f(-0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.61f,0.13f);
glVertex2f(-0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.3f);
glVertex2f(-0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.3f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.27f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.13f);
glVertex2f(-0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.495f,0.13f);
glVertex2f(-0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.48f,0.13f);
glVertex2f(-0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.3f);
glVertex2f(-0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.3f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.27f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.1f);
glVertex2f(-0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.1f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.13f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,0.27f);
glVertex2f(-0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.335f,0.27f);
glVertex2f(-0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.935f,0.48f);
glVertex2f(-0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.935f,0.53f);
glVertex2f(-0.942f,0.48f);
glVertex2f(-0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.675f,0.48f);
glVertex2f(-0.675f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.676f,0.53f);
glVertex2f(-0.684f,0.48f);
glVertex2f(-0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.28f,0.36f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.95f,0.43f);
glVertex2f(-0.95f,0.35f);
glVertex2f(-0.92f,0.35f);
glVertex2f(-0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.69f,0.43f);
glVertex2f(-0.69f,0.35f);
glVertex2f(-0.66f,0.35f);
glVertex2f(-0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.88f,0.41f);
glVertex2f(-0.88f,0.34f);
glVertex2f(-0.85f,0.34f);
glVertex2f(-0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.82f,0.41f);
glVertex2f(-0.82f,0.34f);
glVertex2f(-0.79f,0.34f);
glVertex2f(-0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.41f);
glVertex2f(-0.76f,0.34f);
glVertex2f(-0.73f,0.34f);
glVertex2f(-0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.23f);
glVertex2f(-0.84f,0.23f);
glVertex2f(-0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.89f,0.21f);
glVertex2f(-0.89f,0.13f);
glVertex2f(-0.85f,0.13f);
glVertex2f(-0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.25f);
glVertex2f(-0.76f,0.23f);
glVertex2f(-0.68f,0.23f);
glVertex2f(-0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.74f,0.21f);
glVertex2f(-0.74f,0.13f);
glVertex2f(-0.7f,0.13f);
glVertex2f(-0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,-0.1f);
glVertex2f(-0.9f,-0.25f);
glVertex2f(-0.87f,-0.25f);
glVertex2f(-0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.78f,-0.1f);
glVertex2f(-0.78f,-0.25f);
glVertex2f(-0.75f,-0.25f);
glVertex2f(-0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.64f,-0.01f);
glVertex2f(-0.64f,-0.17f);
glVertex2f(-0.61f,-0.17f);
glVertex2f(-0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.52f,-0.01f);
glVertex2f(-0.52f,-0.17f);
glVertex2f(-0.49f,-0.17f);
glVertex2f(-0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.39f,-0.01f);
glVertex2f(-0.39f,-0.17f);
glVertex2f(-0.36f,-0.17f);
glVertex2f(-0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.57f,0.23f);
glVertex2f(-0.57f,0.1f);
glVertex2f(-0.54f,0.1f);
glVertex2f(-0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.43f,0.23f);
glVertex2f(-0.43f,0.1f);
glVertex2f(-0.4f,0.1f);
glVertex2f(-0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.38f);
glVertex2f(-0.24f,0.38f);
glVertex2f(-0.24f,0.1f);
glEnd();
//
glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.125f,0.48f);
glVertex2f(-0.125f,0.38f);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.24f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.38f);
glVertex2f(0.24f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.36f);
glVertex2f(0.24f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.05f,0.25f);
glVertex2f(-0.05f,0.1f);
glVertex2f(0.05f,0.1f);
glVertex2f(0.05f,0.25f);
glEnd();

int i;
    glColor3ub(135, 81, 19);
	GLfloat x=.0f; GLfloat y=.25f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	int j;
    glColor3ub(135, 81, 19);
	GLfloat x1=.0f; GLfloat y1=.38f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	int k1;
    glColor3ub(255, 172, 117);
	GLfloat x2=.0f; GLfloat y2=.5f; GLfloat radius2 =.15f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k1 = 0; k1 <= triangleAmount2;k1++) {
			glVertex2f(
		            x2 + (radius2 * cos(k1 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.36f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.36f);
glVertex2f(-0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.34f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.1f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.1f);
glVertex2f(-0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.12f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.12f,0.34f);
glVertex2f(-0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.13f,0.34f);
glVertex2f(-0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.2f,0.25f);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.17f,0.1f);
glVertex2f(-0.17f,0.25f);
glEnd();



glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.36f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.36f);
glVertex2f(0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.34f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.1f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.1f);
glVertex2f(0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.12f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.12f,0.34f);
glVertex2f(0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.13f,0.34f);
glVertex2f(0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.2f,0.25f);
glVertex2f(0.2f,0.1f);
glVertex2f(0.17f,0.1f);
glVertex2f(0.17f,0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.125f,0.38f);
glVertex2f(-0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.17f,0.5f);
glVertex2f(-0.17f,0.48f);
glVertex2f(0.17f,0.48f);
glVertex2f(0.17f,0.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(135, 81, 19);
glVertex2f(0.0f,0.68f);
glVertex2f(-0.02f,0.645f);
glVertex2f(0.02f,0.645f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.25f);
glVertex2f(0.97f,-0.28f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.00f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(.68f,0.1f);
glVertex2f(0.7f,-0.17);
glVertex2f(0.2f,-0.17f);
glVertex2f(0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.3f);
glVertex2f(0.942f,0.05f);
glVertex2f(0.65f,0.05f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.93f,0.0f);
glVertex2f(0.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.72f,-0.25f);
glVertex2f(0.72f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,0.0f);
glVertex2f(0.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.05f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,0.0f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.835f,-0.05f);
glVertex2f(0.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.825f,-0.05f);
glVertex2f(0.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.25f,-0.19f);
glVertex2f(0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.665f,0.07f);
glVertex2f(0.665f,-0.17f);
glEnd();//

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.575f,0.04f);
glVertex2f(0.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.565f,0.04f);
glVertex2f(0.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.58f,-0.17f);
glVertex2f(.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.56f,-0.17f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,0.07f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.07f);
glVertex2f(0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.04f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,-0.14f);
glVertex2f(0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,-0.14f);
glVertex2f(0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.305f,-0.14f);
glVertex2f(0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,0.07f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.07f);
glVertex2f(0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.04f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,-0.14f);
glVertex2f(0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.435f,-0.14f);
glVertex2f(0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.445f,-0.14f);
glVertex2f(0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.03f);
glVertex2f(0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.06f);
glVertex2f(0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.09f);
glVertex2f(0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.12f);
glVertex2f(0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.18f);
glVertex2f(0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.21f);
glVertex2f(0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.03f);
glVertex2f(0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.06f);
glVertex2f(0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.09f);
glVertex2f(0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.12f);
glVertex2f(0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.15f);
glVertex2f(0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.18f);
glVertex2f(0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.21f);
glVertex2f(0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.3f);
glVertex2f(0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.3f);
glVertex2f(0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.3f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.27f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.13f);
glVertex2f(0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.625f,0.13f);
glVertex2f(0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.61f,0.13f);
glVertex2f(0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.3f);
glVertex2f(0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.3f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.27f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.13f);
glVertex2f(0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.495f,0.13f);
glVertex2f(0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.48f,0.13f);
glVertex2f(0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.3f);
glVertex2f(0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.3f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.27f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.1f);
glVertex2f(0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.1f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.13f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,0.27f);
glVertex2f(0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.335f,0.27f);
glVertex2f(0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.935f,0.48f);
glVertex2f(0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.935f,0.53f);
glVertex2f(0.942f,0.48f);
glVertex2f(0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.677f,0.48f);
glVertex2f(0.677f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.676f,0.53f);
glVertex2f(0.684f,0.48f);
glVertex2f(0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.95f,0.43f);
glVertex2f(0.95f,0.35f);
glVertex2f(0.92f,0.35f);
glVertex2f(0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.69f,0.43f);
glVertex2f(0.69f,0.35f);
glVertex2f(0.66f,0.35f);
glVertex2f(0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.88f,0.41f);
glVertex2f(0.88f,0.34f);
glVertex2f(0.85f,0.34f);
glVertex2f(0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.82f,0.41f);
glVertex2f(0.82f,0.34f);
glVertex2f(0.79f,0.34f);
glVertex2f(0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.41f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.73f,0.34f);
glVertex2f(0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,0.25f);
glVertex2f(0.9f,0.23f);
glVertex2f(0.84f,0.23f);
glVertex2f(0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.89f,0.21f);
glVertex2f(0.89f,0.13f);
glVertex2f(0.85f,0.13f);
glVertex2f(0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.25f);
glVertex2f(0.76f,0.23f);
glVertex2f(0.68f,0.23f);
glVertex2f(0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.74f,0.21f);
glVertex2f(0.74f,0.13f);
glVertex2f(0.7f,0.13f);
glVertex2f(0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,-0.1f);
glVertex2f(0.9f,-0.25f);
glVertex2f(0.87f,-0.25f);
glVertex2f(0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.78f,-0.1f);
glVertex2f(0.78f,-0.25f);
glVertex2f(0.75f,-0.25f);
glVertex2f(0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.64f,-0.01f);
glVertex2f(0.64f,-0.17f);
glVertex2f(0.61f,-0.17f);
glVertex2f(0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.52f,-0.01f);
glVertex2f(0.52f,-0.17f);
glVertex2f(0.49f,-0.17f);
glVertex2f(0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.39f,-0.01f);
glVertex2f(0.39f,-0.17f);
glVertex2f(0.36f,-0.17f);
glVertex2f(0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.57f,0.23f);
glVertex2f(0.57f,0.1f);
glVertex2f(0.54f,0.1f);
glVertex2f(0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.43f,0.23f);
glVertex2f(0.43f,0.1f);
glVertex2f(0.4f,0.1f);
glVertex2f(0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.23f,0.11f);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(-0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.34f,-0.28f);
glVertex2f(-0.34f,-0.32f);
glVertex2f(-0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.23f,0.11f);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.34f,-0.28f);
glVertex2f(0.34f,-0.32f);
glVertex2f(0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.22f,0.1f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.22f,0.1f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.225f,0.08f);
glVertex2f(0.225f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.23f,0.06f);
glVertex2f(0.23f,0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.235f,0.04f);
glVertex2f(0.235f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.02f);
glVertex2f(0.24f,0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.245f,0.0f);
glVertex2f(0.245f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,-0.02f);
glVertex2f(0.25f,-0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.255f,-0.04f);
glVertex2f(0.255f,-0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.26f,-0.06f);
glVertex2f(0.26f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.265f,-0.08f);
glVertex2f(0.265f,-0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,-0.1f);
glVertex2f(0.27f,-0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.275f,-0.12f);
glVertex2f(0.275f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,-0.14f);
glVertex2f(0.28f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.284f,-0.16f);
glVertex2f(0.284f,-0.16f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.288f,-0.18f);
glVertex2f(0.288f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.291f,-0.2f);
glVertex2f(0.291f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.295f,-0.22f);
glVertex2f(0.295f,-0.22f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.299f,-0.24f);
glVertex2f(0.299f,-0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,-0.26f);
glVertex2f(0.31f,-0.26f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.314f,-0.28f);
glVertex2f(0.314f,-0.28f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.318f,-0.3f);
glVertex2f(0.318f,-0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.315f);
glVertex2f(0.32f,-0.315f);
glEnd();

//under

glBegin(GL_QUADS); //black part
glColor3ub(15, 12, 4);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-.90f);
glVertex2f(1.0f,-.90f);
glVertex2f(1.0f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.80f,-0.9650f);
glVertex2f(-.80f,-.90f);
glVertex2f(-.60f,-.90f);
glVertex2f(-.60f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.40f,-0.9650f);
glVertex2f(-.40f,-.90f);
glVertex2f(-.20f,-.90f);
glVertex2f(-.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.0f,-0.9650f);
glVertex2f(0.0f,-.90f);
glVertex2f(.20f,-.90f);
glVertex2f(.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.40f,-0.9650f);
glVertex2f(0.40f,-.90f);
glVertex2f(.60f,-.90f);
glVertex2f(.60f,-0.9650f);
glEnd();


glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(1.0f,-0.9650f);
glVertex2f(1.0f,-.90f);
glVertex2f(.80f,-.90f);
glVertex2f(.80f,-0.9650f);
glEnd();
//close
// under tree
glBegin(GL_QUADS);
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.9650f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.92f,-1.0f);
glVertex2f(-.950f,-0.9f);
glVertex2f(-.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.94f,-1.0f);
glVertex2f(-.970f,-0.9f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.82f,-1.0f);
glVertex2f(-.850f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.84f,-1.0f);
glVertex2f(-.870f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.72f,-1.0f);
glVertex2f(-.750f,-0.9f);
glVertex2f(-.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.75f,-1.0f);
glVertex2f(-.770f,-0.9f);
glVertex2f(-.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.62f,-1.0f);
glVertex2f(-.650f,-0.9f);
glVertex2f(-.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.65f,-1.0f);
glVertex2f(-.670f,-0.9f);
glVertex2f(-.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.52f,-1.0f);
glVertex2f(-.550f,-0.9f);
glVertex2f(-.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.55f,-1.0f);
glVertex2f(-.570f,-0.9f);
glVertex2f(-.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.42f,-1.0f);
glVertex2f(-.450f,-0.9f);
glVertex2f(-.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.45f,-1.0f);
glVertex2f(-.470f,-0.9f);
glVertex2f(-.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.32f,-1.0f);
glVertex2f(-.350f,-0.9f);
glVertex2f(-.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.35f,-1.0f);
glVertex2f(-.370f,-0.9f);
glVertex2f(-.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.22f,-1.0f);
glVertex2f(-.250f,-0.9f);
glVertex2f(-.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.25f,-1.0f);
glVertex2f(-.270f,-0.9f);
glVertex2f(-.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.12f,-1.0f);
glVertex2f(-.150f,-0.9f);
glVertex2f(-.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.15f,-1.0f);
glVertex2f(-.170f,-0.9f);
glVertex2f(-.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.02f,-1.0f);
glVertex2f(-.050f,-0.9f);
glVertex2f(-.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.05f,-1.0f);
glVertex2f(-.070f,-0.9f);
glVertex2f(-.12f,-1.0f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.92f,-1.0f);
glVertex2f(.950f,-0.9f);
glVertex2f(.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.94f,-1.0f);
glVertex2f(.970f,-0.9f);
glVertex2f(1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.82f,-1.0f);
glVertex2f(.85f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.84f,-1.0f);
glVertex2f(.870f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.72f,-1.0f);
glVertex2f(.750f,-0.9f);
glVertex2f(.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(.75f,-1.0f);
glVertex2f(.770f,-0.9f);
glVertex2f(.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.62f,-1.0f);
glVertex2f(.650f,-0.9f);
glVertex2f(.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.65f,-1.0f);
glVertex2f(.670f,-0.9f);
glVertex2f(.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.52f,-1.0f);
glVertex2f(.550f,-0.9f);
glVertex2f(.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.55f,-1.0f);
glVertex2f(.570f,-0.9f);
glVertex2f(.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.42f,-1.0f);
glVertex2f(.450f,-0.9f);
glVertex2f(.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.45f,-1.0f);
glVertex2f(.470f,-0.9f);
glVertex2f(.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.32f,-1.0f);
glVertex2f(.350f,-0.9f);
glVertex2f(.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.35f,-1.0f);
glVertex2f(.370f,-0.9f);
glVertex2f(.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.22f,-1.0f);
glVertex2f(.250f,-0.9f);
glVertex2f(.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.25f,-1.0f);
glVertex2f(.270f,-0.9f);
glVertex2f(.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.12f,-1.0f);
glVertex2f(.150f,-0.9f);
glVertex2f(.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.15f,-1.0f);
glVertex2f(.170f,-0.9f);
glVertex2f(.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.02f,-1.0f);
glVertex2f(.050f,-0.9f);
glVertex2f(.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.05f,-1.0f);
glVertex2f(0.070f,-0.9f);
glVertex2f(.12f,-1.0f);
glEnd();

//boundary
//tree
glBegin(GL_QUADS); //1
glColor3ub(255, 254, 252);
glVertex2f(-.70f,-.50f);
glVertex2f(-0.725f,-0.5f);
glVertex2f(-0.725f,-0.41f);
glVertex2f(-.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.410f);
glVertex2f(-0.66f,-0.41f);
glVertex2f(-.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.4250f);
glVertex2f(-0.66f,-0.425f);
glVertex2f(-.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //2
glColor3ub(255, 254, 252);
glVertex2f(-.40f,-.50f);
glVertex2f(-0.425f,-0.5f);
glVertex2f(-0.425f,-0.41f);
glVertex2f(-.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.410f);
glVertex2f(-0.36f,-0.41f);
glVertex2f(-.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.4250f);
glVertex2f(-0.36f,-0.425f);
glVertex2f(-.4125f,-.35f);
glEnd();


glBegin(GL_QUADS); //3
glColor3ub(255, 254, 252);
glVertex2f(.70f,-.50f);
glVertex2f(0.725f,-0.5f);
glVertex2f(0.725f,-0.41f);
glVertex2f(.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.410f);
glVertex2f(0.66f,-0.41f);
glVertex2f(.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.4250f);
glVertex2f(0.66f,-0.425f);
glVertex2f(.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //4
glColor3ub(255, 254, 252);
glVertex2f(.40f,-.50f);
glVertex2f(0.425f,-0.5f);
glVertex2f(0.425f,-0.41f);
glVertex2f(.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.410f);
glVertex2f(0.36f,-0.41f);
glVertex2f(.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.4250f);
glVertex2f(0.36f,-0.425f);
glVertex2f(.4125f,-.35f);
glEnd();

// Boundary Light
//1
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.80f,-.50f);
glVertex2f(-0.825f,-0.5f);
glVertex2f(-0.825f,-0.41f);
glVertex2f(-.8f,-0.410f);
glEnd();

int i13;

	GLfloat x13=-.8125f; GLfloat y13=-.375f; GLfloat radius13 =.04f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x13, y13); // center of circle
		for(i13 = 0; i13<= triangleAmount13; i13++) {
			glVertex2f(
		            x13 + (radius13 * cos(i13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

//2
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.50f,-.50f);
glVertex2f(-0.525f,-0.5f);
glVertex2f(-0.525f,-0.41f);
glVertex2f(-.50f,-0.410f);
glEnd();

int i14;

	GLfloat x14=-.5125f; GLfloat y14=-.375f; GLfloat radius14 =.04f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x14, y14); // center of circle
		for(i14 = 0; i14<= triangleAmount14; i14++) {
			glVertex2f(
		            x14 + (radius14 * cos(i14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();














glBegin(GL_QUADS); //3
glColor3ub(15, 9, 9);
glVertex2f(.50f,-.50f);
glVertex2f(0.525f,-0.5f);
glVertex2f(0.525f,-0.41f);
glVertex2f(.50f,-0.410f);
glEnd();

int i11;

	GLfloat x11=.5125f; GLfloat y11=-.375f; GLfloat radius11 =.04f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11<= triangleAmount11;i11++) {
			glVertex2f(
		            x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
			);
		}
	glEnd();



//4
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(.80f,-.50f);
glVertex2f(0.825f,-0.5f);
glVertex2f(0.825f,-0.41f);
glVertex2f(.8f,-0.410f);
glEnd();

int i12;

	GLfloat x12=.8125f; GLfloat y12=-.375f; GLfloat radius12 =.04f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12<= triangleAmount12;i12++) {
			glVertex2f(
		            x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	//road
glBegin(GL_QUADS);
glColor3ub(107, 104, 96);
glVertex2f(-1.0f,-.50f);
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.5f);
glEnd();

// upper ground tree
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.92f,-.50f);
glVertex2f(-.950f,-0.43f);
glVertex2f(-.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.94f,-.50f);
glVertex2f(-.970f,-0.43f);
glVertex2f(-1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.82f,-.50f);
glVertex2f(-.850f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.84f,-.50f);
glVertex2f(-.870f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.72f,-.50f);
glVertex2f(-.750f,-0.43f);
glVertex2f(-.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.75f,-.50f);
glVertex2f(-.770f,-0.43f);
glVertex2f(-.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.62f,-.50f);
glVertex2f(-.650f,-0.43f);
glVertex2f(-.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.65f,-.50f);
glVertex2f(-.670f,-0.43f);
glVertex2f(-.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.52f,-.50f);
glVertex2f(-.550f,-0.43f);
glVertex2f(-.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.55f,-.50f);
glVertex2f(-.570f,-0.429f);
glVertex2f(-.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.42f,-.50f);
glVertex2f(-.450f,-0.43f);
glVertex2f(-.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.45f,-.50f);
glVertex2f(-.470f,-0.43f);
glVertex2f(-.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.32f,-.50f);
glVertex2f(-.350f,-0.43f);
glVertex2f(-.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.35f,-.50f);
glVertex2f(-.370f,-0.429f);
glVertex2f(-.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.22f,-.50f);
glVertex2f(-.250f,-0.429f);
glVertex2f(-.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.25f,-.50f);
glVertex2f(-.270f,-0.429f);
glVertex2f(-.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.12f,-.50f);
glVertex2f(-.150f,-0.429f);
glVertex2f(-.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.15f,-.50f);
glVertex2f(-.170f,-0.429f);
glVertex2f(-.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.02f,-.50f);
glVertex2f(-.050f,-0.429f);
glVertex2f(-.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.05f,-.50f);
glVertex2f(-.070f,-0.429f);
glVertex2f(-.12f,-.50f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.92f,-.50f);
glVertex2f(.950f,-0.43f);
glVertex2f(.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.94f,-.50f);
glVertex2f(.970f,-0.43f);
glVertex2f(1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.82f,-.50f);
glVertex2f(.850f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.84f,-.50f);
glVertex2f(.870f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.72f,-.50f);
glVertex2f(.750f,-0.43f);
glVertex2f(.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.75f,-.50f);
glVertex2f(.770f,-0.43f);
glVertex2f(.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.62f,-.50f);
glVertex2f(.650f,-0.43f);
glVertex2f(.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.65f,-.50f);
glVertex2f(.670f,-0.43f);
glVertex2f(.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.52f,-.50f);
glVertex2f(.550f,-0.43f);
glVertex2f(.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.55f,-.50f);
glVertex2f(.570f,-0.429f);
glVertex2f(.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.42f,-.50f);
glVertex2f(.450f,-0.43f);
glVertex2f(.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.45f,-.50f);
glVertex2f(.470f,-0.43f);
glVertex2f(.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.32f,-.50f);
glVertex2f(.350f,-0.43f);
glVertex2f(.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.35f,-.50f);
glVertex2f(.370f,-0.429f);
glVertex2f(.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.22f,-.50f);
glVertex2f(.250f,-0.429f);
glVertex2f(.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.25f,-.50f);
glVertex2f(.270f,-0.429f);
glVertex2f(.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.12f,-.50f);
glVertex2f(.150f,-0.429f);
glVertex2f(.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.15f,-.50f);
glVertex2f(.170f,-0.429f);
glVertex2f(.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.02f,-.50f);
glVertex2f(.050f,-0.429f);
glVertex2f(.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.05f,-.50f);
glVertex2f(.070f,-0.429f);
glVertex2f(.12f,-.50f);
glEnd();


//red part
glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.490f);
glVertex2f(-1.0f,-0.505f);
glVertex2f(1.0f,-0.505f);
glVertex2f(1.0f,-0.49f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.405f);
glVertex2f(-1.0f,-0.41f);
glVertex2f(1.0f,-0.41f);
glVertex2f(1.0f,-0.405f);
glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(150, 29, 29);
glVertex2f(-.980f,-.5f);
glVertex2f(-1.0f,-0.41f);

glVertex2f(-.890f,-.5f);
glVertex2f(-.90f,-0.41f);

glVertex2f(-.790f,-.5f);
glVertex2f(-.80f,-0.41f);

glVertex2f(-.690f,-.5f);
glVertex2f(-.70f,-0.41f);

glVertex2f(-.590f,-.5f);
glVertex2f(-.60f,-0.41f);

glVertex2f(-.490f,-.5f);
glVertex2f(-.50f,-0.41f);

glVertex2f(-.390f,-.5f);
glVertex2f(-.40f,-0.41f);

glVertex2f(-.290f,-.5f);
glVertex2f(-.30f,-0.41f);

glVertex2f(-.190f,-.5f);
glVertex2f(-.20f,-0.41f);

glVertex2f(-.090f,-.5f);
glVertex2f(-.10f,-0.41f);

glVertex2f(-.010f,-.5f);
glVertex2f(0.0f,-0.41f);



glVertex2f(.980f,-.5f);
glVertex2f(1.0f,-0.41f);

glVertex2f(.890f,-.5f);
glVertex2f(.90f,-0.41f);

glVertex2f(.790f,-.5f);
glVertex2f(.80f,-0.41f);

glVertex2f(.690f,-.5f);
glVertex2f(.70f,-0.41f);

glVertex2f(.590f,-.5f);
glVertex2f(.60f,-0.41f);

glVertex2f(.490f,-.5f);
glVertex2f(.50f,-0.41f);

glVertex2f(.390f,-.5f);
glVertex2f(.40f,-0.41f);

glVertex2f(.290f,-.5f);
glVertex2f(.30f,-0.41f);

glVertex2f(.190f,-.5f);
glVertex2f(.20f,-0.41f);

glVertex2f(.090f,-.5f);
glVertex2f(.10f,-0.41f);
glEnd();

glLoadIdentity();

glLineWidth(6);
glBegin(GL_LINES);
glColor3ub(255, 255,255);
glVertex2f(-1.0, -.7);
glVertex2f(-.955, -.7);

glVertex2f(-.9250, -.7);
glVertex2f(-.88, -.7);

glVertex2f(-.850, -.7);
glVertex2f(-.805, -.7);

glVertex2f(-.7750, -.7);
glVertex2f(-.73, -.7);

glVertex2f(-.70, -.7);
glVertex2f(-.655, -.7);

glVertex2f(-.6250, -.7);
glVertex2f(-.58, -.7);

glVertex2f(-.550, -.7);
glVertex2f(-.505, -.7);

glVertex2f(-.4750, -.7);
glVertex2f(-.43, -.7);


glVertex2f(-.40, -.7);
glVertex2f(-.355, -.7);

glVertex2f(-.3250, -.7);
glVertex2f(-.28, -.7);

glVertex2f(-.250, -.7);
glVertex2f(-.205, -.7);

glVertex2f(-.1750, -.7);
glVertex2f(-.13, -.7);

glVertex2f(-.10, -.7);
glVertex2f(-.055, -.7);

glVertex2f(-.025, -.7);
glVertex2f(.02, -.7);


//positive resigione

glVertex2f(1.0, -.7);
glVertex2f(.955, -.7);

glVertex2f(.9250, -.7);
glVertex2f(.88, -.7);

glVertex2f(.850, -.7);
glVertex2f(.805, -.7);

glVertex2f(.7750, -.7);
glVertex2f(.73, -.7);

glVertex2f(.70, -.7);
glVertex2f(.655, -.7);

glVertex2f(.6250, -.7);
glVertex2f(.58, -.7);

glVertex2f(.550, -.7);
glVertex2f(.505, -.7);

glVertex2f(.4750, -.7);
glVertex2f(.43, -.7);


glVertex2f(.40, -.7);
glVertex2f(.355, -.7);

glVertex2f(.3250, -.7);
glVertex2f(.28, -.7);

glVertex2f(.250, -.7);
glVertex2f(.205, -.7);

glVertex2f(.1750, -.7);
glVertex2f(.13, -.7);

glVertex2f(.10, -.7);
glVertex2f(.055, -.7);
glEnd();

glLoadIdentity();

//car
glPushMatrix();
glTranslatef(position3,0,0);
glBegin(GL_POLYGON); // green car
glColor3ub(191, 217, 132);
glVertex2f(-.702, -.853);
glVertex2f(-.702, -.787);
glVertex2f(-.794, -.787);
glVertex2f(-.847, -.731);
glVertex2f(-.934, -.731);
glVertex2f(-.982, -.7855);
glVertex2f(-.982, -.853);
glVertex2f(-.602, -.853);
glEnd();



glBegin(GL_QUADS);
glColor3ub(28, 24, 24);

glVertex2f(-.799, -.787);
glVertex2f(-.847, -.735);
glVertex2f(-.934, -.735);
glVertex2f(-.979, -.787);
glEnd();


int i15;

	GLfloat x15=-.782f; GLfloat y15=-.845f; GLfloat radius15 =.025f;
	int triangleAmount15 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x15, y15); // center of circle
		for(i15 = 0; i15<= triangleAmount12;i15++) {
			glVertex2f(
		            x15 + (radius15 * cos(i15 *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15))
			);
		}
	glEnd();

	int i16;

	GLfloat x16=-.937f; GLfloat y16=-.845f; GLfloat radius16 =.025f;
	int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x16, y16); // center of circle
		for(i16 = 0; i16<= triangleAmount16;i16++) {
			glVertex2f(
		            x16 + (radius16 * cos(i16 *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(i16 * twicePi16 / triangleAmount16))
			);
		}
	glEnd();

glPopMatrix();
//
glPushMatrix();
glTranslatef(position3,0,0);

glBegin(GL_POLYGON);
glColor3ub(144, 105, 179);
glVertex2f(-.402, -.653);
glVertex2f(-.402, -.587);
glVertex2f(-.494, -.587);
glVertex2f(-.547, -.531);
glVertex2f(-.634, -.531);
glVertex2f(-.682, -.5855);
glVertex2f(-.682, -.653);
glVertex2f(-.302, -.653);
glEnd();

glBegin(GL_QUADS);
glColor3ub(28, 24, 24);

glVertex2f(-.499, -.587);
glVertex2f(-.547, -.535);
glVertex2f(-.634, -.535);
glVertex2f(-.679, -.587);
glEnd();


int i17;

	GLfloat x17=-.482f; GLfloat y17=-.645f; GLfloat radius17 =.025f;
	int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x17, y17); // center of circle
		for(i17 = 0; i17<= triangleAmount12; i17++) {
			glVertex2f(
		            x17 + (radius17 * cos(i17 *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(i17 * twicePi17 / triangleAmount17))
			);
		}
	glEnd();

	int i18;

	GLfloat x18=-.637f; GLfloat y18=-.645f; GLfloat radius18 =.025f;
	int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x18, y18); // center of circle
		for(i18 = 0; i18<= triangleAmount16;i18++) {
			glVertex2f(
		            x18 + (radius18 * cos(i18 *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(i18 * twicePi18 / triangleAmount18))
			);
		}
	glEnd();


glPopMatrix();

//

glPushMatrix();
glTranslatef(position3,0,0);
glBegin(GL_POLYGON); // white car
glColor3ub(255, 255, 255);
glVertex2f(-1.202, -.853);
glVertex2f(-1.202, -.787);
glVertex2f(-1.294, -.787);
glVertex2f(-1.347, -.731);
glVertex2f(-1.434, -.731);
glVertex2f(-1.482, -.7855);
glVertex2f(-1.482, -.853);
glVertex2f(-1.102, -.853);
glEnd();



glBegin(GL_QUADS);
glColor3ub(28, 24, 24);

glVertex2f(-1.299, -.787);
glVertex2f(-1.347, -.735);
glVertex2f(-1.434, -.735);
glVertex2f(-1.479, -.787);
glEnd();



int i19;

	GLfloat x19=-1.282f; GLfloat y19=-.845f; GLfloat radius19 =.025f;
	int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x19, y19); // center of circle
		for(i19 = 0; i19<= triangleAmount19; i19++) {
			glVertex2f(
		            x19 + (radius19 * cos(i19 *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(i19 * twicePi19 / triangleAmount19))
			);
		}
	glEnd();

	int i20;

	GLfloat x20=-1.437f; GLfloat y20=-.845f; GLfloat radius20 = .025f;
	int triangleAmount20= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x20, y20); // center of circle
		for(i20 = 0; i20<= triangleAmount20;i20++) {
			glVertex2f(
		            x20 + (radius20 * cos(i20 *  twicePi20 / triangleAmount20)),
			    y20 + (radius20 * sin(i20* twicePi20 / triangleAmount20))
			);
		}
	glEnd();


glPopMatrix();



	glFlush();
}

}
void evening() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

 // glLineWidth(5);
 glBegin(GL_QUADS);//SKY
    glColor3ub(199, 210, 237);

    glVertex2f(-1,1);    // x, y
    glVertex2f(-1,0.0);
        // x, y
    glVertex2f(1,0.0);    // x, y
    glVertex2f(1,1);

    glEnd();
 glLoadIdentity();


 glPushMatrix();
       glTranslatef(position,0,0);
    	int j;//sun
    glColor3ub(255,102,0);
	GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.1f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


    glPushMatrix();
    glTranslatef(position1,0,0);
    int j1;//CLOUD 1
    glColor3ub(255,255,255);
	GLfloat x1=-0.8f; GLfloat y1=0.8f; GLfloat radius1 =0.2f;
	int triangleAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j1 = 0; j1 <= triangleAmount1;j1++) {
			glVertex2f(
		            x1 + (radius1 * cos(j1 *  twicePi / triangleAmount)),
			    y1+ (radius1 * sin(j1 * twicePi / triangleAmount))
			);
		}
	glEnd();

int j2;//CLOUD 2
    glColor3ub(255,255,255);
	GLfloat x2=-0.8f; GLfloat y2=0.9f; GLfloat radius2 =0.3f;
	int triangleAmount2 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x2 + (radius * cos(j *  twicePi / triangleAmount)),
			    y2+ (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j3;//CLOUD 3
    glColor3ub(255,255,255);
	GLfloat x3=-0.7f; GLfloat y3=0.9f; GLfloat radius3 =0.3f;
	int triangleAmount3 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x3 + (radius * cos(j *  twicePi / triangleAmount)),
			    y3+ (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j4;//CLOUD 4
    glColor3ub(255,255,255);
	GLfloat x4=-.4f; GLfloat y4=.9f; GLfloat radius4 =0.1f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x4 + (radius * cos(j *  twicePi / triangleAmount)),
			    y4 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();


int j5;//CLOUD 5
    glColor3ub(255,255,255);
	GLfloat x5=-.499f; GLfloat y5=.9f; GLfloat radius5 =0.1f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x5 + (radius * cos(j *  twicePi / triangleAmount)),
			    y5 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j6;//CLOUD 6
    glColor3ub(255,255,255);
	GLfloat x6=.499f; GLfloat y6=.9f; GLfloat radius6 =0.1f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x6 + (radius * cos(j *  twicePi / triangleAmount)),
			    y6 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();

int j7;//CLOUD 7
    glColor3ub(255,255,255);
	GLfloat x7=.4f; GLfloat y7=.9f; GLfloat radius7 =0.1f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 5.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x7, y7); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x7 + (radius * cos(j *  twicePi / triangleAmount)),
			    y7 + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();
	 glPopMatrix();

 /*   glPushMatrix();
    glTranslatef(position2,0,0);
    glBegin(GL_QUADS);   // BIRD 1
    glColor3ub(153, 53, 0);
    glVertex2f(-0.13,0.78);    // x, y
    glVertex2f(-0.13,0.7);
        // x, y
    glVertex2f(-0.13,0.7);    // x, y
    glVertex2f(-0.1,0.7);
        // x, y
    glVertex2f(-0.1,0.7);//
    glVertex2f(-0.1,0.78);
        // x, y
    glVertex2f(-0.1,0.78);    // x, y
    glVertex2f(-0.13,0.78);
    glEnd();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.1,0.84);    // x, y
    glVertex2f(-0.115, 0.75);    // x, y
    glEnd();
 glLoadIdentity();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.115,0.69999);    // x, y
    glVertex2f(-0.1, 0.65);    // x, y
    glEnd();
 glLoadIdentity();
 glBegin(GL_QUADS);   // BIRD 2
    glColor3ub(153, 53, 0);
    glVertex2f(-0.23,0.78);    // x, y
    glVertex2f(-0.23,0.7);
        // x, y
    glVertex2f(-0.23,0.7);    // x, y
    glVertex2f(-0.2,0.7);
        // x, y
    glVertex2f(-0.2,0.7);//
    glVertex2f(-0.2,0.78);
        // x, y
    glVertex2f(-0.2,0.78);    // x, y
    glVertex2f(-0.23,0.78);
    glEnd();

   // glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.2,0.84);    // x, y
    glVertex2f(-0.215, 0.75);    // x, y
    glEnd();

 glLoadIdentity();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.215,0.69999);    // x, y
    glVertex2f(-0.2, 0.65);    // x, y
    glEnd();


    glBegin(GL_QUADS);   // BIRD 3
    glColor3ub(153, 53, 0);
    glVertex2f(-0.33,0.78);    // x, y
    glVertex2f(-0.33,0.7);
        // x, y
    glVertex2f(-0.33,0.7);    // x, y
    glVertex2f(-0.3,0.7);
        // x, y
    glVertex2f(-0.3,0.7);//
    glVertex2f(-0.3,0.78);
        // x, y
    glVertex2f(-0.3,0.78);    // x, y
    glVertex2f(-0.33,0.78);
    glEnd();
 glLoadIdentity();
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.3,0.84);    // x, y
    glVertex2f(-0.315, 0.75);    // x, y
    glEnd();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.315,0.69999);    // x, y
    glVertex2f(-0.3, 0.65);    // x, y
    glEnd();


    glBegin(GL_QUADS);   // BIRD 4
    glColor3ub(153, 53, 0);
    glVertex2f(-0.43,0.78);    // x, y
    glVertex2f(-0.43,0.7);
        // x, y
    glVertex2f(-0.43,0.7);    // x, y
    glVertex2f(-0.4,0.7);
        // x, y
    glVertex2f(-0.4,0.7);//
    glVertex2f(-0.4,0.78);
        // x, y
    glVertex2f(-0.4,0.78);    // x, y
    glVertex2f(-0.43,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.4,0.84);    // x, y
    glVertex2f(-0.415, 0.75);    // x, y
    glEnd();
 glLoadIdentity();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.415,0.69999);    // x, y
    glVertex2f(-0.4, 0.65);    // x, y
    glEnd();
 glLoadIdentity();

  glBegin(GL_QUADS);   // BIRD 5
    glColor3ub(153, 53, 0);
    glVertex2f(-0.53,0.78);    // x, y
    glVertex2f(-0.53,0.7);
        // x, y
    glVertex2f(-0.53,0.7);    // x, y
    glVertex2f(-0.5,0.7);
        // x, y
    glVertex2f(-0.5,0.7);//
    glVertex2f(-0.5,0.78);
        // x, y
    glVertex2f(-0.5,0.78);    // x, y
    glVertex2f(-0.53,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.5,0.84);    // x, y
    glVertex2f(-0.515, 0.75);    // x, y
    glEnd();
 glLoadIdentity();
//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.515,0.69999);    // x, y
    glVertex2f(-0.5, 0.65);    // x, y
    glEnd();
 glLoadIdentity();

  glBegin(GL_QUADS);   // BIRD 6
    glColor3ub(153, 53, 0);
    glVertex2f(-0.63,0.78);    // x, y
    glVertex2f(-0.63,0.7);
        // x, y
    glVertex2f(-0.63,0.7);    // x, y
    glVertex2f(-0.6,0.7);
        // x, y
    glVertex2f(-0.6,0.7);//
    glVertex2f(-0.6,0.78);
        // x, y
    glVertex2f(-0.6,0.78);    // x, y
    glVertex2f(-0.63,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.6,0.84);    // x, y
    glVertex2f(-0.615, 0.75);    // x, y
    glEnd();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.615,0.69999);    // x, y
    glVertex2f(-0.6, 0.65);    // x, y
    glEnd();
 glLoadIdentity();
 glBegin(GL_QUADS);   // BIRD 7
    glColor3ub(153, 53, 0);
    glVertex2f(-0.73,0.78);    // x, y
    glVertex2f(-0.73,0.7);
        // x, y
    glVertex2f(-0.73,0.7);    // x, y
    glVertex2f(-0.7,0.7);
        // x, y
    glVertex2f(-0.7,0.7);//
    glVertex2f(-0.7,0.78);
        // x, y
    glVertex2f(-0.7,0.78);    // x, y
    glVertex2f(-0.73,0.78);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.7,0.84);    // x, y
    glVertex2f(-0.715, 0.75);    // x, y
    glEnd();

//glLineWidth(15);
glBegin(GL_LINES);
    glColor3ub(153,51,0);
    glVertex2f(-0.715,0.69999);    // x, y
    glVertex2f(-0.7, 0.65);    // x, y
    glEnd();
    glPopMatrix();*/




    //plan //plan//plan//plan//plan //plan//plan//plan//plan //plan//plan//plan//plan //plan//plan//plan
    glPushMatrix();
    glTranslatef(position3,0.75,0);

    glScaled(0.55,0.55,0);
    {



        glBegin(GL_POLYGON);//plane
        glColor3ub(217, 197, 180);
        glVertex2f(-0.30f,-0.5f);
        glVertex2f(-0.90f,-0.5f);
        glVertex2f(-0.9f,-0.58f);
        glVertex2f(-0.7f,-0.65f);
        glVertex2f(-0.3f,-0.65f);
        glVertex2f(-0.15f,-0.65f);
        glEnd();

        glBegin(GL_TRIANGLES);//plane font window
        glColor3ub(0,0,0);
        glVertex2f(-0.17f,-0.64f);
        glVertex2f(-0.30f,-0.51f);
        glVertex2f(-0.30f,-0.64f);
        glEnd();

          glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.35f,-0.55f);
        glVertex2f(-0.33f,-0.55f);
        glVertex2f(-0.33f,-0.58f);
        glVertex2f(-0.35f,-0.58f);
        glEnd();

         glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.4f,-0.55f);
        glVertex2f(-0.38f,-0.55f);
        glVertex2f(-0.38f,-0.58f);
        glVertex2f(-0.4f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.45f,-0.55f);
        glVertex2f(-0.43f,-0.55f);
        glVertex2f(-0.43f,-0.58f);
        glVertex2f(-0.45f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.5f,-0.55f);
        glVertex2f(-0.48f,-0.55f);
        glVertex2f(-0.48f,-0.58f);
        glVertex2f(-0.5f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.55f,-0.55f);
        glVertex2f(-0.53f,-0.55f);
        glVertex2f(-0.53f,-0.58f);
        glVertex2f(-0.55f,-0.58f);
        glEnd();

         glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.6f,-0.55f);
        glVertex2f(-0.58f,-0.55f);
        glVertex2f(-0.58f,-0.58f);
        glVertex2f(-0.6f,-0.58f);
        glEnd();

        glBegin(GL_QUADS);//plane window
        glColor3ub(0,0,0);
        glVertex2f(-0.65f,-0.55f);
        glVertex2f(-0.63f,-0.55f);
        glVertex2f(-0.63f,-0.58f);
        glVertex2f(-0.65f,-0.58f);
        glEnd();



            j;//airplane tire
            glColor3ub(255,255,255);
            x1=-.32f; y1=-.7f;radius1 =0.02f;
            triangleAmount1 = 20; //# of triangles used to draw circle

            //GLfloat radius = 0.8f; //radius
            twicePi1 = 2.0f * PI;

            glBegin(GL_TRIANGLE_FAN);
                glVertex2f(x1, y1); // center of circle
                for(j = 0; j <= triangleAmount1;j++) {
                    glVertex2f(
                            x1 + (radius1 * cos( j*  twicePi1 / triangleAmount1)),
                        y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
                    );
                }
            glEnd();

            int k;//airplane tire
            glColor3ub(255,255,255);
            x2=-.68f;y2=-.7f;radius2 =.02f;
            triangleAmount2 = 20; //# of triangles used to draw circle

            //GLfloat radius = 0.8f; //radius
            twicePi2 = 2.0f * PI;

            glBegin(GL_TRIANGLE_FAN);
                glVertex2f(x2, y2); // center of circle
                for(k = 0; k <= triangleAmount2;k++) {
                    glVertex2f(
                            x2 + (radius2 * cos( k*  twicePi2 / triangleAmount2)),
                        y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
                    );
                }
            glEnd();




        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(-0.32f,-0.7f);
        glVertex2f(-0.32f,-0.65f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(-0.68f,-0.7f);
        glVertex2f(-0.68f,-0.65f);
        glEnd();



            glBegin(GL_QUADS);//plane back wings
        glColor3ub(217, 197, 180);
        glVertex2f(-0.80f,-0.5f);
        glVertex2f(-0.84f,-0.39f);
        glVertex2f(-0.9f,-0.39f);
        glVertex2f(-0.9f,-0.5f);
        glEnd();



        glBegin(GL_QUADS);//plane upper wings
        glColor3ub(131, 114, 99);
        glVertex2f(-0.5f,-0.5f);
        glVertex2f(-0.56f,-0.44f);
        glVertex2f(-0.62f,-0.44f);
        glVertex2f(-0.59f,-0.5f);
        glEnd();

        glBegin(GL_QUADS);//plane lower wings
        glColor3ub(131, 114, 99);
        glVertex2f(-0.48f,-0.6f);
        glVertex2f(-0.61f,-0.6f);
        glVertex2f(-0.68f,-0.72f);
        glVertex2f(-0.57f,-0.71f);
        glEnd();
        glPopMatrix();

 glLoadIdentity();



    //ankon part start
 glBegin(GL_QUADS);//green
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,0.0f);
glVertex2f(-1.0f,-0.5f);
glVertex2f(10.f,-0.5f);
glVertex2f(1.0f,0.0f);
glEnd();

glBegin(GL_QUADS);//fountain left
glColor3ub(198, 140, 83);
glVertex2f(-0.55f,-0.2f);
glVertex2f(-0.57f,-0.32f);
glVertex2f(-0.43f,-0.32f);
glVertex2f(-0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(-0.54f,-0.22f);
glVertex2f(-0.56f,-0.31f);
glVertex2f(-0.44f,-0.31f);
glVertex2f(-0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(-0.505f,-0.26f);
glVertex2f(-0.51f,-0.29f);
glVertex2f(-0.49f,-0.29f);
glVertex2f(-0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.538f,-0.23f);
glVertex2f(-0.5f,-0.26f);
glVertex2f(-0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.54f,-0.214f);
glVertex2f(-0.5f,-0.24f);
glVertex2f(-0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.5f,-0.195f);
glVertex2f(-0.51f,-0.214f);
glVertex2f(-0.49f,-0.214f);
glEnd();
//
glBegin(GL_QUADS);//fountain right
glColor3ub(198, 140, 83);
glVertex2f(0.55f,-0.2f);
glVertex2f(0.57f,-0.32f);
glVertex2f(0.43f,-0.32f);
glVertex2f(0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(0.54f,-0.22f);
glVertex2f(0.56f,-0.31f);
glVertex2f(0.44f,-0.31f);
glVertex2f(0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(0.505f,-0.26f);
glVertex2f(0.51f,-0.29f);
glVertex2f(0.49f,-0.29f);
glVertex2f(0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.538f,-0.23f);
glVertex2f(0.5f,-0.26f);
glVertex2f(0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.54f,-0.214f);
glVertex2f(0.5f,-0.24f);
glVertex2f(0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.5f,-0.195f);
glVertex2f(0.51f,-0.214f);
glVertex2f(0.49f,-0.214f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.25f);
glVertex2f(-.97f,-0.28f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.7f,0.00f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.1f);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.68f,0.1f);
glVertex2f(-0.7f,-0.17);
glVertex2f(-0.2f,-0.17f);
glVertex2f(-0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.3f);
glVertex2f(-0.942f,0.05f);
glVertex2f(-0.65f,0.05f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.93f,0.0f);
glVertex2f(-.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.72f,-0.25f);
glVertex2f(-0.72f,0.0f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,0.0f);
glVertex2f(-.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.05f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,0.0f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.835f,-0.05f);
glVertex2f(-.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.825f,-0.05f);
glVertex2f(-.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.25f,-0.19f);
glVertex2f(-0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.07f);
glVertex2f(-.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.665f,0.07f);
glVertex2f(-.665f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.575f,0.04f);
glVertex2f(-.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.565f,0.04f);
glVertex2f(-.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,0.07f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.07f);
glVertex2f(-0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.04f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,-0.14f);
glVertex2f(-0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,-0.14f);
glVertex2f(-0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.305f,-0.14f);
glVertex2f(-0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,0.07f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.07f);
glVertex2f(-0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.04f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,-0.14f);
glVertex2f(-0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.435f,-0.14f);
glVertex2f(-0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.445f,-0.14f);
glVertex2f(-0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.03f);
glVertex2f(-0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.06f);
glVertex2f(-0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.09f);
glVertex2f(-0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.12f);
glVertex2f(-0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.18f);
glVertex2f(-0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.21f);
glVertex2f(-0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.03f);
glVertex2f(-0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.06f);
glVertex2f(-0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.09f);
glVertex2f(-0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.12f);
glVertex2f(-0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.15f);
glVertex2f(-0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.18f);
glVertex2f(-0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.21f);
glVertex2f(-0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.28f,0.4f);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.24f,0.1f);
glVertex2f(-0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,0.1f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.1f);
glVertex2f(-0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.38f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.3f);
glVertex2f(-0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.3f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.27f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.13f);
glVertex2f(-0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.625f,0.13f);
glVertex2f(-0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.61f,0.13f);
glVertex2f(-0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.3f);
glVertex2f(-0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.3f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.27f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.13f);
glVertex2f(-0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.495f,0.13f);
glVertex2f(-0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.48f,0.13f);
glVertex2f(-0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.3f);
glVertex2f(-0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.3f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.27f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.1f);
glVertex2f(-0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.1f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.13f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,0.27f);
glVertex2f(-0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.335f,0.27f);
glVertex2f(-0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.935f,0.48f);
glVertex2f(-0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.935f,0.53f);
glVertex2f(-0.942f,0.48f);
glVertex2f(-0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.675f,0.48f);
glVertex2f(-0.675f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.676f,0.53f);
glVertex2f(-0.684f,0.48f);
glVertex2f(-0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.28f,0.36f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.95f,0.43f);
glVertex2f(-0.95f,0.35f);
glVertex2f(-0.92f,0.35f);
glVertex2f(-0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.69f,0.43f);
glVertex2f(-0.69f,0.35f);
glVertex2f(-0.66f,0.35f);
glVertex2f(-0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.88f,0.41f);
glVertex2f(-0.88f,0.34f);
glVertex2f(-0.85f,0.34f);
glVertex2f(-0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.82f,0.41f);
glVertex2f(-0.82f,0.34f);
glVertex2f(-0.79f,0.34f);
glVertex2f(-0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.41f);
glVertex2f(-0.76f,0.34f);
glVertex2f(-0.73f,0.34f);
glVertex2f(-0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.23f);
glVertex2f(-0.84f,0.23f);
glVertex2f(-0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.89f,0.21f);
glVertex2f(-0.89f,0.13f);
glVertex2f(-0.85f,0.13f);
glVertex2f(-0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.25f);
glVertex2f(-0.76f,0.23f);
glVertex2f(-0.68f,0.23f);
glVertex2f(-0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.74f,0.21f);
glVertex2f(-0.74f,0.13f);
glVertex2f(-0.7f,0.13f);
glVertex2f(-0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,-0.1f);
glVertex2f(-0.9f,-0.25f);
glVertex2f(-0.87f,-0.25f);
glVertex2f(-0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.78f,-0.1f);
glVertex2f(-0.78f,-0.25f);
glVertex2f(-0.75f,-0.25f);
glVertex2f(-0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.64f,-0.01f);
glVertex2f(-0.64f,-0.17f);
glVertex2f(-0.61f,-0.17f);
glVertex2f(-0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.52f,-0.01f);
glVertex2f(-0.52f,-0.17f);
glVertex2f(-0.49f,-0.17f);
glVertex2f(-0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.39f,-0.01f);
glVertex2f(-0.39f,-0.17f);
glVertex2f(-0.36f,-0.17f);
glVertex2f(-0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.57f,0.23f);
glVertex2f(-0.57f,0.1f);
glVertex2f(-0.54f,0.1f);
glVertex2f(-0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.43f,0.23f);
glVertex2f(-0.43f,0.1f);
glVertex2f(-0.4f,0.1f);
glVertex2f(-0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.38f);
glVertex2f(-0.24f,0.38f);
glVertex2f(-0.24f,0.1f);
glEnd();
//
glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.125f,0.48f);
glVertex2f(-0.125f,0.38f);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.24f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.38f);
glVertex2f(0.24f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.36f);
glVertex2f(0.24f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.05f,0.25f);
glVertex2f(-0.05f,0.1f);
glVertex2f(0.05f,0.1f);
glVertex2f(0.05f,0.25f);
glEnd();

int i;
    glColor3ub(135, 81, 19);
	GLfloat x=.0f; GLfloat y=.25f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	int j;
    glColor3ub(135, 81, 19);
	GLfloat x1=.0f; GLfloat y1=.38f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	int k1;
    glColor3ub(255, 172, 117);
	GLfloat x2=.0f; GLfloat y2=.5f; GLfloat radius2 =.15f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k1 = 0; k1 <= triangleAmount2;k1++) {
			glVertex2f(
		            x2 + (radius2 * cos(k1 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.36f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.36f);
glVertex2f(-0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.34f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.1f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.1f);
glVertex2f(-0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.12f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.12f,0.34f);
glVertex2f(-0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.13f,0.34f);
glVertex2f(-0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.2f,0.25f);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.17f,0.1f);
glVertex2f(-0.17f,0.25f);
glEnd();



glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.36f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.36f);
glVertex2f(0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.34f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.1f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.1f);
glVertex2f(0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.12f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.12f,0.34f);
glVertex2f(0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.13f,0.34f);
glVertex2f(0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.2f,0.25f);
glVertex2f(0.2f,0.1f);
glVertex2f(0.17f,0.1f);
glVertex2f(0.17f,0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.125f,0.38f);
glVertex2f(-0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.17f,0.5f);
glVertex2f(-0.17f,0.48f);
glVertex2f(0.17f,0.48f);
glVertex2f(0.17f,0.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(135, 81, 19);
glVertex2f(0.0f,0.68f);
glVertex2f(-0.02f,0.645f);
glVertex2f(0.02f,0.645f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.25f);
glVertex2f(0.97f,-0.28f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.00f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(.68f,0.1f);
glVertex2f(0.7f,-0.17);
glVertex2f(0.2f,-0.17f);
glVertex2f(0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.3f);
glVertex2f(0.942f,0.05f);
glVertex2f(0.65f,0.05f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.93f,0.0f);
glVertex2f(0.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.72f,-0.25f);
glVertex2f(0.72f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,0.0f);
glVertex2f(0.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.05f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,0.0f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.835f,-0.05f);
glVertex2f(0.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.825f,-0.05f);
glVertex2f(0.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.25f,-0.19f);
glVertex2f(0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.665f,0.07f);
glVertex2f(0.665f,-0.17f);
glEnd();//

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.575f,0.04f);
glVertex2f(0.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.565f,0.04f);
glVertex2f(0.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.58f,-0.17f);
glVertex2f(.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.56f,-0.17f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,0.07f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.07f);
glVertex2f(0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.04f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,-0.14f);
glVertex2f(0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,-0.14f);
glVertex2f(0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.305f,-0.14f);
glVertex2f(0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,0.07f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.07f);
glVertex2f(0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.04f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,-0.14f);
glVertex2f(0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.435f,-0.14f);
glVertex2f(0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.445f,-0.14f);
glVertex2f(0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.03f);
glVertex2f(0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.06f);
glVertex2f(0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.09f);
glVertex2f(0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.12f);
glVertex2f(0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.18f);
glVertex2f(0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.21f);
glVertex2f(0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.03f);
glVertex2f(0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.06f);
glVertex2f(0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.09f);
glVertex2f(0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.12f);
glVertex2f(0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.15f);
glVertex2f(0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.18f);
glVertex2f(0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.21f);
glVertex2f(0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.3f);
glVertex2f(0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.3f);
glVertex2f(0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.3f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.27f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.13f);
glVertex2f(0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.625f,0.13f);
glVertex2f(0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.61f,0.13f);
glVertex2f(0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.3f);
glVertex2f(0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.3f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.27f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.13f);
glVertex2f(0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.495f,0.13f);
glVertex2f(0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.48f,0.13f);
glVertex2f(0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.3f);
glVertex2f(0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.3f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.27f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.1f);
glVertex2f(0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.1f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.13f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,0.27f);
glVertex2f(0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.335f,0.27f);
glVertex2f(0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.935f,0.48f);
glVertex2f(0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.935f,0.53f);
glVertex2f(0.942f,0.48f);
glVertex2f(0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.677f,0.48f);
glVertex2f(0.677f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.676f,0.53f);
glVertex2f(0.684f,0.48f);
glVertex2f(0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.95f,0.43f);
glVertex2f(0.95f,0.35f);
glVertex2f(0.92f,0.35f);
glVertex2f(0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.69f,0.43f);
glVertex2f(0.69f,0.35f);
glVertex2f(0.66f,0.35f);
glVertex2f(0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.88f,0.41f);
glVertex2f(0.88f,0.34f);
glVertex2f(0.85f,0.34f);
glVertex2f(0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.82f,0.41f);
glVertex2f(0.82f,0.34f);
glVertex2f(0.79f,0.34f);
glVertex2f(0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.41f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.73f,0.34f);
glVertex2f(0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,0.25f);
glVertex2f(0.9f,0.23f);
glVertex2f(0.84f,0.23f);
glVertex2f(0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.89f,0.21f);
glVertex2f(0.89f,0.13f);
glVertex2f(0.85f,0.13f);
glVertex2f(0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.25f);
glVertex2f(0.76f,0.23f);
glVertex2f(0.68f,0.23f);
glVertex2f(0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.74f,0.21f);
glVertex2f(0.74f,0.13f);
glVertex2f(0.7f,0.13f);
glVertex2f(0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,-0.1f);
glVertex2f(0.9f,-0.25f);
glVertex2f(0.87f,-0.25f);
glVertex2f(0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.78f,-0.1f);
glVertex2f(0.78f,-0.25f);
glVertex2f(0.75f,-0.25f);
glVertex2f(0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.64f,-0.01f);
glVertex2f(0.64f,-0.17f);
glVertex2f(0.61f,-0.17f);
glVertex2f(0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.52f,-0.01f);
glVertex2f(0.52f,-0.17f);
glVertex2f(0.49f,-0.17f);
glVertex2f(0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.39f,-0.01f);
glVertex2f(0.39f,-0.17f);
glVertex2f(0.36f,-0.17f);
glVertex2f(0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.57f,0.23f);
glVertex2f(0.57f,0.1f);
glVertex2f(0.54f,0.1f);
glVertex2f(0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.43f,0.23f);
glVertex2f(0.43f,0.1f);
glVertex2f(0.4f,0.1f);
glVertex2f(0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.23f,0.11f);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(-0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.34f,-0.28f);
glVertex2f(-0.34f,-0.32f);
glVertex2f(-0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.23f,0.11f);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.34f,-0.28f);
glVertex2f(0.34f,-0.32f);
glVertex2f(0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.22f,0.1f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.22f,0.1f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.225f,0.08f);
glVertex2f(0.225f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.23f,0.06f);
glVertex2f(0.23f,0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.235f,0.04f);
glVertex2f(0.235f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.02f);
glVertex2f(0.24f,0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.245f,0.0f);
glVertex2f(0.245f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,-0.02f);
glVertex2f(0.25f,-0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.255f,-0.04f);
glVertex2f(0.255f,-0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.26f,-0.06f);
glVertex2f(0.26f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.265f,-0.08f);
glVertex2f(0.265f,-0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,-0.1f);
glVertex2f(0.27f,-0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.275f,-0.12f);
glVertex2f(0.275f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,-0.14f);
glVertex2f(0.28f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.284f,-0.16f);
glVertex2f(0.284f,-0.16f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.288f,-0.18f);
glVertex2f(0.288f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.291f,-0.2f);
glVertex2f(0.291f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.295f,-0.22f);
glVertex2f(0.295f,-0.22f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.299f,-0.24f);
glVertex2f(0.299f,-0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,-0.26f);
glVertex2f(0.31f,-0.26f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.314f,-0.28f);
glVertex2f(0.314f,-0.28f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.318f,-0.3f);
glVertex2f(0.318f,-0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.315f);
glVertex2f(0.32f,-0.315f);
glEnd();

//under

glBegin(GL_QUADS); //black part
glColor3ub(15, 12, 4);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-.90f);
glVertex2f(1.0f,-.90f);
glVertex2f(1.0f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.80f,-0.9650f);
glVertex2f(-.80f,-.90f);
glVertex2f(-.60f,-.90f);
glVertex2f(-.60f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.40f,-0.9650f);
glVertex2f(-.40f,-.90f);
glVertex2f(-.20f,-.90f);
glVertex2f(-.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.0f,-0.9650f);
glVertex2f(0.0f,-.90f);
glVertex2f(.20f,-.90f);
glVertex2f(.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.40f,-0.9650f);
glVertex2f(0.40f,-.90f);
glVertex2f(.60f,-.90f);
glVertex2f(.60f,-0.9650f);
glEnd();


glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(1.0f,-0.9650f);
glVertex2f(1.0f,-.90f);
glVertex2f(.80f,-.90f);
glVertex2f(.80f,-0.9650f);
glEnd();
//close
// under tree
glBegin(GL_QUADS);
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.9650f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.92f,-1.0f);
glVertex2f(-.950f,-0.9f);
glVertex2f(-.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.94f,-1.0f);
glVertex2f(-.970f,-0.9f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.82f,-1.0f);
glVertex2f(-.850f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.84f,-1.0f);
glVertex2f(-.870f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.72f,-1.0f);
glVertex2f(-.750f,-0.9f);
glVertex2f(-.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.75f,-1.0f);
glVertex2f(-.770f,-0.9f);
glVertex2f(-.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.62f,-1.0f);
glVertex2f(-.650f,-0.9f);
glVertex2f(-.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.65f,-1.0f);
glVertex2f(-.670f,-0.9f);
glVertex2f(-.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.52f,-1.0f);
glVertex2f(-.550f,-0.9f);
glVertex2f(-.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.55f,-1.0f);
glVertex2f(-.570f,-0.9f);
glVertex2f(-.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.42f,-1.0f);
glVertex2f(-.450f,-0.9f);
glVertex2f(-.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.45f,-1.0f);
glVertex2f(-.470f,-0.9f);
glVertex2f(-.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.32f,-1.0f);
glVertex2f(-.350f,-0.9f);
glVertex2f(-.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.35f,-1.0f);
glVertex2f(-.370f,-0.9f);
glVertex2f(-.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.22f,-1.0f);
glVertex2f(-.250f,-0.9f);
glVertex2f(-.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.25f,-1.0f);
glVertex2f(-.270f,-0.9f);
glVertex2f(-.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.12f,-1.0f);
glVertex2f(-.150f,-0.9f);
glVertex2f(-.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.15f,-1.0f);
glVertex2f(-.170f,-0.9f);
glVertex2f(-.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.02f,-1.0f);
glVertex2f(-.050f,-0.9f);
glVertex2f(-.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.05f,-1.0f);
glVertex2f(-.070f,-0.9f);
glVertex2f(-.12f,-1.0f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.92f,-1.0f);
glVertex2f(.950f,-0.9f);
glVertex2f(.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.94f,-1.0f);
glVertex2f(.970f,-0.9f);
glVertex2f(1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.82f,-1.0f);
glVertex2f(.85f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.84f,-1.0f);
glVertex2f(.870f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.72f,-1.0f);
glVertex2f(.750f,-0.9f);
glVertex2f(.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(.75f,-1.0f);
glVertex2f(.770f,-0.9f);
glVertex2f(.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.62f,-1.0f);
glVertex2f(.650f,-0.9f);
glVertex2f(.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.65f,-1.0f);
glVertex2f(.670f,-0.9f);
glVertex2f(.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.52f,-1.0f);
glVertex2f(.550f,-0.9f);
glVertex2f(.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.55f,-1.0f);
glVertex2f(.570f,-0.9f);
glVertex2f(.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.42f,-1.0f);
glVertex2f(.450f,-0.9f);
glVertex2f(.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.45f,-1.0f);
glVertex2f(.470f,-0.9f);
glVertex2f(.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.32f,-1.0f);
glVertex2f(.350f,-0.9f);
glVertex2f(.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.35f,-1.0f);
glVertex2f(.370f,-0.9f);
glVertex2f(.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.22f,-1.0f);
glVertex2f(.250f,-0.9f);
glVertex2f(.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.25f,-1.0f);
glVertex2f(.270f,-0.9f);
glVertex2f(.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.12f,-1.0f);
glVertex2f(.150f,-0.9f);
glVertex2f(.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.15f,-1.0f);
glVertex2f(.170f,-0.9f);
glVertex2f(.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.02f,-1.0f);
glVertex2f(.050f,-0.9f);
glVertex2f(.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.05f,-1.0f);
glVertex2f(0.070f,-0.9f);
glVertex2f(.12f,-1.0f);
glEnd();

//boundary
//tree
glBegin(GL_QUADS); //1
glColor3ub(255, 254, 252);
glVertex2f(-.70f,-.50f);
glVertex2f(-0.725f,-0.5f);
glVertex2f(-0.725f,-0.41f);
glVertex2f(-.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.410f);
glVertex2f(-0.66f,-0.41f);
glVertex2f(-.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.4250f);
glVertex2f(-0.66f,-0.425f);
glVertex2f(-.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //2
glColor3ub(255, 254, 252);
glVertex2f(-.40f,-.50f);
glVertex2f(-0.425f,-0.5f);
glVertex2f(-0.425f,-0.41f);
glVertex2f(-.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.410f);
glVertex2f(-0.36f,-0.41f);
glVertex2f(-.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.4250f);
glVertex2f(-0.36f,-0.425f);
glVertex2f(-.4125f,-.35f);
glEnd();


glBegin(GL_QUADS); //3
glColor3ub(255, 254, 252);
glVertex2f(.70f,-.50f);
glVertex2f(0.725f,-0.5f);
glVertex2f(0.725f,-0.41f);
glVertex2f(.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.410f);
glVertex2f(0.66f,-0.41f);
glVertex2f(.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.4250f);
glVertex2f(0.66f,-0.425f);
glVertex2f(.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //4
glColor3ub(255, 254, 252);
glVertex2f(.40f,-.50f);
glVertex2f(0.425f,-0.5f);
glVertex2f(0.425f,-0.41f);
glVertex2f(.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.410f);
glVertex2f(0.36f,-0.41f);
glVertex2f(.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.4250f);
glVertex2f(0.36f,-0.425f);
glVertex2f(.4125f,-.35f);
glEnd();

// Boundary Light
//1
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.80f,-.50f);
glVertex2f(-0.825f,-0.5f);
glVertex2f(-0.825f,-0.41f);
glVertex2f(-.8f,-0.410f);
glEnd();

int i13;

	GLfloat x13=-.8125f; GLfloat y13=-.375f; GLfloat radius13 =.04f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x13, y13); // center of circle
		for(i13 = 0; i13<= triangleAmount13; i13++) {
			glVertex2f(
		            x13 + (radius13 * cos(i13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

//2
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.50f,-.50f);
glVertex2f(-0.525f,-0.5f);
glVertex2f(-0.525f,-0.41f);
glVertex2f(-.50f,-0.410f);
glEnd();

int i14;

	GLfloat x14=-.5125f; GLfloat y14=-.375f; GLfloat radius14 =.04f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x14, y14); // center of circle
		for(i14 = 0; i14<= triangleAmount14; i14++) {
			glVertex2f(
		            x14 + (radius14 * cos(i14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();














glBegin(GL_QUADS); //3
glColor3ub(15, 9, 9);
glVertex2f(.50f,-.50f);
glVertex2f(0.525f,-0.5f);
glVertex2f(0.525f,-0.41f);
glVertex2f(.50f,-0.410f);
glEnd();

int i11;

	GLfloat x11=.5125f; GLfloat y11=-.375f; GLfloat radius11 =.04f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11<= triangleAmount11;i11++) {
			glVertex2f(
		            x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
			);
		}
	glEnd();



//4
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(.80f,-.50f);
glVertex2f(0.825f,-0.5f);
glVertex2f(0.825f,-0.41f);
glVertex2f(.8f,-0.410f);
glEnd();

int i12;

	GLfloat x12=.8125f; GLfloat y12=-.375f; GLfloat radius12 =.04f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(112, 111, 108);
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12<= triangleAmount12;i12++) {
			glVertex2f(
		            x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	//road
glBegin(GL_QUADS);
glColor3ub(107, 104, 96);
glVertex2f(-1.0f,-.50f);
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.5f);
glEnd();

// upper ground tree
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.92f,-.50f);
glVertex2f(-.950f,-0.43f);
glVertex2f(-.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.94f,-.50f);
glVertex2f(-.970f,-0.43f);
glVertex2f(-1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.82f,-.50f);
glVertex2f(-.850f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.84f,-.50f);
glVertex2f(-.870f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.72f,-.50f);
glVertex2f(-.750f,-0.43f);
glVertex2f(-.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.75f,-.50f);
glVertex2f(-.770f,-0.43f);
glVertex2f(-.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.62f,-.50f);
glVertex2f(-.650f,-0.43f);
glVertex2f(-.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.65f,-.50f);
glVertex2f(-.670f,-0.43f);
glVertex2f(-.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.52f,-.50f);
glVertex2f(-.550f,-0.43f);
glVertex2f(-.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.55f,-.50f);
glVertex2f(-.570f,-0.429f);
glVertex2f(-.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.42f,-.50f);
glVertex2f(-.450f,-0.43f);
glVertex2f(-.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.45f,-.50f);
glVertex2f(-.470f,-0.43f);
glVertex2f(-.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.32f,-.50f);
glVertex2f(-.350f,-0.43f);
glVertex2f(-.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.35f,-.50f);
glVertex2f(-.370f,-0.429f);
glVertex2f(-.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.22f,-.50f);
glVertex2f(-.250f,-0.429f);
glVertex2f(-.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.25f,-.50f);
glVertex2f(-.270f,-0.429f);
glVertex2f(-.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.12f,-.50f);
glVertex2f(-.150f,-0.429f);
glVertex2f(-.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.15f,-.50f);
glVertex2f(-.170f,-0.429f);
glVertex2f(-.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.02f,-.50f);
glVertex2f(-.050f,-0.429f);
glVertex2f(-.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.05f,-.50f);
glVertex2f(-.070f,-0.429f);
glVertex2f(-.12f,-.50f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.92f,-.50f);
glVertex2f(.950f,-0.43f);
glVertex2f(.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.94f,-.50f);
glVertex2f(.970f,-0.43f);
glVertex2f(1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.82f,-.50f);
glVertex2f(.850f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.84f,-.50f);
glVertex2f(.870f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.72f,-.50f);
glVertex2f(.750f,-0.43f);
glVertex2f(.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.75f,-.50f);
glVertex2f(.770f,-0.43f);
glVertex2f(.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.62f,-.50f);
glVertex2f(.650f,-0.43f);
glVertex2f(.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.65f,-.50f);
glVertex2f(.670f,-0.43f);
glVertex2f(.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.52f,-.50f);
glVertex2f(.550f,-0.43f);
glVertex2f(.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.55f,-.50f);
glVertex2f(.570f,-0.429f);
glVertex2f(.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.42f,-.50f);
glVertex2f(.450f,-0.43f);
glVertex2f(.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.45f,-.50f);
glVertex2f(.470f,-0.43f);
glVertex2f(.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.32f,-.50f);
glVertex2f(.350f,-0.43f);
glVertex2f(.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.35f,-.50f);
glVertex2f(.370f,-0.429f);
glVertex2f(.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.22f,-.50f);
glVertex2f(.250f,-0.429f);
glVertex2f(.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.25f,-.50f);
glVertex2f(.270f,-0.429f);
glVertex2f(.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.12f,-.50f);
glVertex2f(.150f,-0.429f);
glVertex2f(.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.15f,-.50f);
glVertex2f(.170f,-0.429f);
glVertex2f(.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.02f,-.50f);
glVertex2f(.050f,-0.429f);
glVertex2f(.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.05f,-.50f);
glVertex2f(.070f,-0.429f);
glVertex2f(.12f,-.50f);
glEnd();


//red part
glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.490f);
glVertex2f(-1.0f,-0.505f);
glVertex2f(1.0f,-0.505f);
glVertex2f(1.0f,-0.49f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.405f);
glVertex2f(-1.0f,-0.41f);
glVertex2f(1.0f,-0.41f);
glVertex2f(1.0f,-0.405f);
glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(150, 29, 29);
glVertex2f(-.980f,-.5f);
glVertex2f(-1.0f,-0.41f);

glVertex2f(-.890f,-.5f);
glVertex2f(-.90f,-0.41f);

glVertex2f(-.790f,-.5f);
glVertex2f(-.80f,-0.41f);

glVertex2f(-.690f,-.5f);
glVertex2f(-.70f,-0.41f);

glVertex2f(-.590f,-.5f);
glVertex2f(-.60f,-0.41f);

glVertex2f(-.490f,-.5f);
glVertex2f(-.50f,-0.41f);

glVertex2f(-.390f,-.5f);
glVertex2f(-.40f,-0.41f);

glVertex2f(-.290f,-.5f);
glVertex2f(-.30f,-0.41f);

glVertex2f(-.190f,-.5f);
glVertex2f(-.20f,-0.41f);

glVertex2f(-.090f,-.5f);
glVertex2f(-.10f,-0.41f);

glVertex2f(-.010f,-.5f);
glVertex2f(0.0f,-0.41f);



glVertex2f(.980f,-.5f);
glVertex2f(1.0f,-0.41f);

glVertex2f(.890f,-.5f);
glVertex2f(.90f,-0.41f);

glVertex2f(.790f,-.5f);
glVertex2f(.80f,-0.41f);

glVertex2f(.690f,-.5f);
glVertex2f(.70f,-0.41f);

glVertex2f(.590f,-.5f);
glVertex2f(.60f,-0.41f);

glVertex2f(.490f,-.5f);
glVertex2f(.50f,-0.41f);

glVertex2f(.390f,-.5f);
glVertex2f(.40f,-0.41f);

glVertex2f(.290f,-.5f);
glVertex2f(.30f,-0.41f);

glVertex2f(.190f,-.5f);
glVertex2f(.20f,-0.41f);

glVertex2f(.090f,-.5f);
glVertex2f(.10f,-0.41f);
glEnd();

glLoadIdentity();

glLineWidth(6);
glBegin(GL_LINES);
glColor3ub(255, 255,255);
glVertex2f(-1.0, -.7);
glVertex2f(-.955, -.7);

glVertex2f(-.9250, -.7);
glVertex2f(-.88, -.7);

glVertex2f(-.850, -.7);
glVertex2f(-.805, -.7);

glVertex2f(-.7750, -.7);
glVertex2f(-.73, -.7);

glVertex2f(-.70, -.7);
glVertex2f(-.655, -.7);

glVertex2f(-.6250, -.7);
glVertex2f(-.58, -.7);

glVertex2f(-.550, -.7);
glVertex2f(-.505, -.7);

glVertex2f(-.4750, -.7);
glVertex2f(-.43, -.7);


glVertex2f(-.40, -.7);
glVertex2f(-.355, -.7);

glVertex2f(-.3250, -.7);
glVertex2f(-.28, -.7);

glVertex2f(-.250, -.7);
glVertex2f(-.205, -.7);

glVertex2f(-.1750, -.7);
glVertex2f(-.13, -.7);

glVertex2f(-.10, -.7);
glVertex2f(-.055, -.7);

glVertex2f(-.025, -.7);
glVertex2f(.02, -.7);


//positive resigione

glVertex2f(1.0, -.7);
glVertex2f(.955, -.7);

glVertex2f(.9250, -.7);
glVertex2f(.88, -.7);

glVertex2f(.850, -.7);
glVertex2f(.805, -.7);

glVertex2f(.7750, -.7);
glVertex2f(.73, -.7);

glVertex2f(.70, -.7);
glVertex2f(.655, -.7);

glVertex2f(.6250, -.7);
glVertex2f(.58, -.7);

glVertex2f(.550, -.7);
glVertex2f(.505, -.7);

glVertex2f(.4750, -.7);
glVertex2f(.43, -.7);


glVertex2f(.40, -.7);
glVertex2f(.355, -.7);

glVertex2f(.3250, -.7);
glVertex2f(.28, -.7);

glVertex2f(.250, -.7);
glVertex2f(.205, -.7);

glVertex2f(.1750, -.7);
glVertex2f(.13, -.7);

glVertex2f(.10, -.7);
glVertex2f(.055, -.7);
glEnd();

glLoadIdentity();

//car
glBegin(GL_POLYGON); // white car
glColor3ub(255, 255, 255);
glVertex2f(-.702, -.853);
glVertex2f(-.702, -.787);
glVertex2f(-.794, -.787);
glVertex2f(-.847, -.731);
glVertex2f(-.934, -.731);
glVertex2f(-.982, -.7855);
glVertex2f(-.982, -.853);
glVertex2f(-.602, -.853);
glEnd();



glBegin(GL_QUADS);
glColor3ub(28, 24, 24);

glVertex2f(-.799, -.787);
glVertex2f(-.847, -.735);
glVertex2f(-.934, -.735);
glVertex2f(-.979, -.787);
glEnd();

glLineWidth(3);
glBegin(GL_LINE);
glColor3ub(255, 255, 255);
glVertex2f(.889, -.735);
glVertex2f(.889, -.787);
glEnd();

int i15;

	GLfloat x15=-.782f; GLfloat y15=-.845f; GLfloat radius15 =.025f;
	int triangleAmount15 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x15, y15); // center of circle
		for(i15 = 0; i15<= triangleAmount12;i15++) {
			glVertex2f(
		            x15 + (radius15 * cos(i15 *  twicePi15 / triangleAmount15)),
			    y15 + (radius15 * sin(i15 * twicePi15 / triangleAmount15))
			);
		}
	glEnd();

	int i16;

	GLfloat x16=-.937f; GLfloat y16=-.845f; GLfloat radius16 =.025f;
	int triangleAmount16 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi16 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x16, y16); // center of circle
		for(i16 = 0; i16<= triangleAmount16;i16++) {
			glVertex2f(
		            x16 + (radius16 * cos(i16 *  twicePi16 / triangleAmount16)),
			    y16 + (radius16 * sin(i16 * twicePi16 / triangleAmount16))
			);
		}
	glEnd();


//
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glVertex2f(-.402, -.653);
glVertex2f(-.402, -.587);
glVertex2f(-.494, -.587);
glVertex2f(-.547, -.531);
glVertex2f(-.634, -.531);
glVertex2f(-.682, -.5855);
glVertex2f(-.682, -.653);
glVertex2f(-.302, -.653);
glEnd();

glBegin(GL_QUADS);
glColor3ub(28, 24, 24);

glVertex2f(-.499, -.587);
glVertex2f(-.547, -.535);
glVertex2f(-.634, -.535);
glVertex2f(-.679, -.587);
glEnd();


int i17;

	GLfloat x17=-.482f; GLfloat y17=-.645f; GLfloat radius17 =.025f;
	int triangleAmount17 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi17 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x17, y17); // center of circle
		for(i17 = 0; i17<= triangleAmount12; i17++) {
			glVertex2f(
		            x17 + (radius17 * cos(i17 *  twicePi17 / triangleAmount17)),
			    y17 + (radius17 * sin(i17 * twicePi17 / triangleAmount17))
			);
		}
	glEnd();

	int i18;

	GLfloat x18=-.637f; GLfloat y18=-.645f; GLfloat radius18 =.025f;
	int triangleAmount18 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi18= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x18, y18); // center of circle
		for(i18 = 0; i18<= triangleAmount16;i18++) {
			glVertex2f(
		            x18 + (radius18 * cos(i18 *  twicePi18 / triangleAmount18)),
			    y18 + (radius18 * sin(i18 * twicePi18 / triangleAmount18))
			);
		}
	glEnd();

//


glBegin(GL_POLYGON); // white car
glColor3ub(255, 255, 255);
glVertex2f(-1.202, -.853);
glVertex2f(-1.202, -.787);
glVertex2f(-1.294, -.787);
glVertex2f(-1.347, -.731);
glVertex2f(-1.434, -.731);
glVertex2f(-1.482, -.7855);
glVertex2f(-1.482, -.853);
glVertex2f(-1.102, -.853);
glEnd();



glBegin(GL_QUADS);
glColor3ub(28, 24, 24);

glVertex2f(-1.299, -.787);
glVertex2f(-1.347, -.735);
glVertex2f(-1.434, -.735);
glVertex2f(-1.479, -.787);
glEnd();



int i19;

	GLfloat x19=-1.282f; GLfloat y19=-1.345f; GLfloat radius19 =.025f;
	int triangleAmount19 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi19 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x19, y19); // center of circle
		for(i19 = 0; i19<= triangleAmount19; i19++) {
			glVertex2f(
		            x19 + (radius19 * cos(i19 *  twicePi19 / triangleAmount19)),
			    y19 + (radius19 * sin(i19 * twicePi19 / triangleAmount19))
			);
		}
	glEnd();

	int i20;

	GLfloat x20=-1.437f; GLfloat y20=-1.345f; GLfloat radius20 = .025f;
	int triangleAmount20= 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi20 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(28, 24, 24);
		glVertex2f(x20, y20); // center of circle
		for(i20 = 0; i20<= triangleAmount20;i20++) {
			glVertex2f(
		            x20 + (radius20 * cos(i20 *  twicePi20 / triangleAmount20)),
			    y20 + (radius20 * sin(i20* twicePi20 / triangleAmount20))
			);
		}
	glEnd();





	glFlush();
}
}

void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

 // glLineWidth(5);
 glBegin(GL_QUADS);//SKY
    glColor3ub(20, 30, 33);

    glVertex2f(-1,1);    // x, y
    glVertex2f(-1,0.0);
        // x, y
    glVertex2f(1,0.0);    // x, y
    glVertex2f(1,1);

    glEnd();
 glLoadIdentity();


 glPointSize(4);
glBegin(GL_POINTS);
glColor3ub(242, 242, 240);
glVertex2f(-.9f,0.9f);
glVertex2f(-.9f,0.8f);;
glVertex2f(-.85f,.9f);
glVertex2f(-.8f,.8f);
glVertex2f(.9f,0.9f);
glVertex2f(.9f,0.8f);;
glVertex2f(.85f,.9f);
glVertex2f(.8f,.8f);
glVertex2f(-.7f,0.9f);
glVertex2f(-.7f,0.8f);;
glVertex2f(-.75f,.9f);
glVertex2f(-.67f,.8f);
glVertex2f(.6f,0.9f);
glVertex2f(.5f,0.8f);;
glVertex2f(.4f,.9f);
glVertex2f(.3f,.8f);
glVertex2f(-.57f,0.9f);
glVertex2f(-.5f,0.8f);;
glVertex2f(-.47f,.9f);
glVertex2f(-.42f,.8f);
glVertex2f(.57f,0.9f);
glVertex2f(.43f,0.8f);;
glVertex2f(.42f,.9f);
glVertex2f(.3f,.8f);
glEnd();

//Moon
 int j22;
 GLfloat x22= .85f;
  GLfloat y22= .825f;
   GLfloat radius22= .125f;

 int triangleAmount22 =21;

 GLfloat twicePi22 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN); //sun
glColor3ub(240, 242, 235);
glVertex2f(x22,y22);

for(j22=0; j22<=triangleAmount22; j22++){
    glVertex2f(
    x22+(radius22* cos(j22*twicePi22 /triangleAmount22)),
    y22+(radius22* sin(j22*twicePi22 /triangleAmount22))
               );
}
glEnd();



    //ankon part start
 glBegin(GL_QUADS);//green
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,0.0f);
glVertex2f(-1.0f,-0.5f);
glVertex2f(10.f,-0.5f);
glVertex2f(1.0f,0.0f);
glEnd();

glBegin(GL_QUADS);//fountain left
glColor3ub(198, 140, 83);
glVertex2f(-0.55f,-0.2f);
glVertex2f(-0.57f,-0.32f);
glVertex2f(-0.43f,-0.32f);
glVertex2f(-0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(-0.54f,-0.22f);
glVertex2f(-0.56f,-0.31f);
glVertex2f(-0.44f,-0.31f);
glVertex2f(-0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(-0.505f,-0.26f);
glVertex2f(-0.51f,-0.29f);
glVertex2f(-0.49f,-0.29f);
glVertex2f(-0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.538f,-0.23f);
glVertex2f(-0.5f,-0.26f);
glVertex2f(-0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.54f,-0.214f);
glVertex2f(-0.5f,-0.24f);
glVertex2f(-0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(-0.5f,-0.195f);
glVertex2f(-0.51f,-0.214f);
glVertex2f(-0.49f,-0.214f);
glEnd();
//
glBegin(GL_QUADS);//fountain right
glColor3ub(198, 140, 83);
glVertex2f(0.55f,-0.2f);
glVertex2f(0.57f,-0.32f);
glVertex2f(0.43f,-0.32f);
glVertex2f(0.45f,-0.2f);
glEnd();

glBegin(GL_QUADS);//fountain blue
glColor3ub(102, 194, 255);
glVertex2f(0.54f,-0.22f);
glVertex2f(0.56f,-0.31f);
glVertex2f(0.44f,-0.31f);
glVertex2f(0.46f,-0.22f);
glEnd();

glBegin(GL_QUADS);//fountain
glColor3ub(0, 0, 0);
glVertex2f(0.505f,-0.26f);
glVertex2f(0.51f,-0.29f);
glVertex2f(0.49f,-0.29f);
glVertex2f(0.495f,-0.26f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.538f,-0.23f);
glVertex2f(0.5f,-0.26f);
glVertex2f(0.462f,-0.23f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.54f,-0.214f);
glVertex2f(0.5f,-0.24f);
glVertex2f(0.46f,-0.214f);
glEnd();

glBegin(GL_TRIANGLES);//fountain water
glColor3ub(204, 255, 255);
glVertex2f(0.5f,-0.195f);
glVertex2f(0.51f,-0.214f);
glVertex2f(0.49f,-0.214f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(-0.97f,-0.25f);
glVertex2f(-.97f,-0.28f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.7f,0.00f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.1f);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-.68f,0.1f);
glVertex2f(-0.7f,-0.17);
glVertex2f(-0.2f,-0.17f);
glVertex2f(-0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.3f);
glVertex2f(-0.942f,0.05f);
glVertex2f(-0.65f,0.05f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.97f,0.0f);
glVertex2f(-0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.0f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.97f,0.05f);
glVertex2f(-0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.95f,-0.25f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.25f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.0f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.93f,0.0f);
glVertex2f(-.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.72f,-0.25f);
glVertex2f(-0.72f,0.0f);
glEnd();


glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,0.0f);
glVertex2f(-.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.05f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,0.0f);
glVertex2f(-.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.84f,-0.2f);
glVertex2f(-.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.82f,-0.2f);
glVertex2f(-.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.835f,-0.05f);
glVertex2f(-.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.825f,-0.05f);
glVertex2f(-.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.25f,-0.19f);
glVertex2f(-0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(-0.68f,-0.17f);
glVertex2f(-.68f,-0.19f);
glVertex2f(-0.7f,-0.28f);
glVertex2f(-0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.68f,0.07f);
glVertex2f(-0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.07f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.1f);
glVertex2f(-0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.68f,0.07f);
glVertex2f(-.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.665f,0.07f);
glVertex2f(-.665f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,0.04f);
glVertex2f(-.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,0.04f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,0.07f);
glVertex2f(-.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.575f,0.04f);
glVertex2f(-.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.565f,0.04f);
glVertex2f(-.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.58f,-0.17f);
glVertex2f(-.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-.56f,-0.17f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.58f,-0.14f);
glVertex2f(-.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,0.07f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.07f);
glVertex2f(-0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,0.04f);
glVertex2f(-0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.3f,-0.14f);
glVertex2f(-0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.14f);
glVertex2f(-0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,-0.14f);
glVertex2f(-0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.305f,-0.14f);
glVertex2f(-0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,0.07f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.07f);
glVertex2f(-0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,0.04f);
glVertex2f(-0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.43f,-0.14f);
glVertex2f(-0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.45f,-0.14f);
glVertex2f(-0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.435f,-0.14f);
glVertex2f(-0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.445f,-0.14f);
glVertex2f(-0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.03f);
glVertex2f(-0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.06f);
glVertex2f(-0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.09f);
glVertex2f(-0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.12f);
glVertex2f(-0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.15f);
glVertex2f(-0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.18f);
glVertex2f(-0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,-0.21f);
glVertex2f(-0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.03f);
glVertex2f(-0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.06f);
glVertex2f(-0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.09f);
glVertex2f(-0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.12f);
glVertex2f(-0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.15f);
glVertex2f(-0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.18f);
glVertex2f(-0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,-0.21f);
glVertex2f(-0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.28f,0.4f);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.24f,0.1f);
glVertex2f(-0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,0.1f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.1f);
glVertex2f(-0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,0.38f);
glVertex2f(-0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.3f);
glVertex2f(-0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.3f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.98f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.27f);
glVertex2f(-0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.27f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.3f);
glVertex2f(-0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.3f);
glVertex2f(-0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.24f);
glVertex2f(-0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.24f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.27f);
glVertex2f(-0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.05f);
glVertex2f(-0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.92f,0.05f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.95f,0.08f);
glVertex2f(-0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.942f,0.24f);
glVertex2f(-0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.928f,0.08f);
glVertex2f(-0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.05f);
glVertex2f(-0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.05f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.08f);
glVertex2f(-0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.24f);
glVertex2f(-0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.78f,0.24f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.81f,0.27f);
glVertex2f(-0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.24f);
glVertex2f(-0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.787f,0.08f);
glVertex2f(-0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.3f);
glVertex2f(-0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.3f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.27f);
glVertex2f(-0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.63f,0.13f);
glVertex2f(-0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.6f,0.13f);
glVertex2f(-0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.625f,0.13f);
glVertex2f(-0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.61f,0.13f);
glVertex2f(-0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.3f);
glVertex2f(-0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.3f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.27f);
glVertex2f(-0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.47f,0.13f);
glVertex2f(-0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.5f,0.13f);
glVertex2f(-0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.495f,0.13f);
glVertex2f(-0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.48f,0.13f);
glVertex2f(-0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.3f);
glVertex2f(-0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.3f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.27f);
glVertex2f(-0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.1f);
glVertex2f(-0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.34f,0.1f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,0.13f);
glVertex2f(-0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.315f,0.27f);
glVertex2f(-0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.335f,0.27f);
glVertex2f(-0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.33f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.96f,0.45f);
glVertex2f(-0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.45f);
glVertex2f(-0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.33f);
glVertex2f(-0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.7f,0.33f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.91f,0.42f);
glVertex2f(-0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.5f);
glVertex2f(-0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.805f,0.47f);
glVertex2f(-0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.935f,0.48f);
glVertex2f(-0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.935f,0.53f);
glVertex2f(-0.942f,0.48f);
glVertex2f(-0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.675f,0.48f);
glVertex2f(-0.675f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(-0.676f,0.53f);
glVertex2f(-0.684f,0.48f);
glVertex2f(-0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.33f);
glVertex2f(-0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.33f);
glVertex2f(-0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.65f,0.36f);
glVertex2f(-0.28f,0.36f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.95f,0.43f);
glVertex2f(-0.95f,0.35f);
glVertex2f(-0.92f,0.35f);
glVertex2f(-0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.69f,0.43f);
glVertex2f(-0.69f,0.35f);
glVertex2f(-0.66f,0.35f);
glVertex2f(-0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.88f,0.41f);
glVertex2f(-0.88f,0.34f);
glVertex2f(-0.85f,0.34f);
glVertex2f(-0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.82f,0.41f);
glVertex2f(-0.82f,0.34f);
glVertex2f(-0.79f,0.34f);
glVertex2f(-0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.41f);
glVertex2f(-0.76f,0.34f);
glVertex2f(-0.73f,0.34f);
glVertex2f(-0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.23f);
glVertex2f(-0.84f,0.23f);
glVertex2f(-0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.89f,0.21f);
glVertex2f(-0.89f,0.13f);
glVertex2f(-0.85f,0.13f);
glVertex2f(-0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.76f,0.25f);
glVertex2f(-0.76f,0.23f);
glVertex2f(-0.68f,0.23f);
glVertex2f(-0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.74f,0.21f);
glVertex2f(-0.74f,0.13f);
glVertex2f(-0.7f,0.13f);
glVertex2f(-0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.9f,-0.1f);
glVertex2f(-0.9f,-0.25f);
glVertex2f(-0.87f,-0.25f);
glVertex2f(-0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.78f,-0.1f);
glVertex2f(-0.78f,-0.25f);
glVertex2f(-0.75f,-0.25f);
glVertex2f(-0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.64f,-0.01f);
glVertex2f(-0.64f,-0.17f);
glVertex2f(-0.61f,-0.17f);
glVertex2f(-0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.52f,-0.01f);
glVertex2f(-0.52f,-0.17f);
glVertex2f(-0.49f,-0.17f);
glVertex2f(-0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.39f,-0.01f);
glVertex2f(-0.39f,-0.17f);
glVertex2f(-0.36f,-0.17f);
glVertex2f(-0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.57f,0.23f);
glVertex2f(-0.57f,0.1f);
glVertex2f(-0.54f,0.1f);
glVertex2f(-0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.43f,0.23f);
glVertex2f(-0.43f,0.1f);
glVertex2f(-0.4f,0.1f);
glVertex2f(-0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.38f);
glVertex2f(-0.24f,0.38f);
glVertex2f(-0.24f,0.1f);
glEnd();
//
glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.125f,0.48f);
glVertex2f(-0.125f,0.38f);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.4f);
glVertex2f(-0.24f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.38f);
glVertex2f(0.24f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.36f);
glVertex2f(0.24f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.05f,0.25f);
glVertex2f(-0.05f,0.1f);
glVertex2f(0.05f,0.1f);
glVertex2f(0.05f,0.25f);
glEnd();

int i;
    glColor3ub(135, 81, 19);
	GLfloat x=.0f; GLfloat y=.25f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	int j;
    glColor3ub(135, 81, 19);
	GLfloat x1=.0f; GLfloat y1=.38f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	int k1;
    glColor3ub(255, 172, 117);
	GLfloat x2=.0f; GLfloat y2=.5f; GLfloat radius2 =.15f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 1.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(k1 = 0; k1 <= triangleAmount2;k1++) {
			glVertex2f(
		            x2 + (radius2 * cos(k1 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k1 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.36f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.36f);
glVertex2f(-0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.34f);
glVertex2f(-0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.11f,0.1f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.1f);
glVertex2f(-0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.14f,0.12f);
glVertex2f(-0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.12f,0.34f);
glVertex2f(-0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.13f,0.34f);
glVertex2f(-0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.2f,0.25f);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.17f,0.1f);
glVertex2f(-0.17f,0.25f);
glEnd();



glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.36f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.36f);
glVertex2f(0.14f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.34f);
glVertex2f(0.11f,0.34f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.11f,0.1f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.1f);
glVertex2f(0.14f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.14f,0.12f);
glVertex2f(0.11f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.12f,0.34f);
glVertex2f(0.12f,0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.13f,0.34f);
glVertex2f(0.13f,0.12f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.2f,0.25f);
glVertex2f(0.2f,0.1f);
glVertex2f(0.17f,0.1f);
glVertex2f(0.17f,0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.125f,0.38f);
glVertex2f(0.125f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.125f,0.38f);
glVertex2f(-0.125f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.17f,0.5f);
glVertex2f(-0.17f,0.48f);
glVertex2f(0.17f,0.48f);
glVertex2f(0.17f,0.5f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(135, 81, 19);
glVertex2f(0.0f,0.68f);
glVertex2f(-0.02f,0.645f);
glVertex2f(0.02f,0.645f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.97f,-0.25f);
glVertex2f(0.97f,-0.28f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.00f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(.68f,0.1f);
glVertex2f(0.7f,-0.17);
glVertex2f(0.2f,-0.17f);
glVertex2f(0.2f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.3f);
glVertex2f(0.942f,0.05f);
glVertex2f(0.65f,0.05f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.0f);
glVertex2f(0.68f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.0f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.97f,0.05f);
glVertex2f(0.68f,0.05f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.95f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.95f,-0.25f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.25f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.0f);
glVertex2f(0.7f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.93f,0.0f);
glVertex2f(0.93f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.72f,-0.25f);
glVertex2f(0.72f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,0.0f);
glVertex2f(0.84f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.05f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,0.0f);
glVertex2f(0.82f,-0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.84f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.84f,-0.2f);
glVertex2f(0.82f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.82f,-0.2f);
glVertex2f(0.82f,-0.25f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.835f,-0.05f);
glVertex2f(0.835f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.825f,-0.05f);
glVertex2f(0.825f,-0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.25f,-0.19f);
glVertex2f(0.25f,-0.17f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(0.68f,-0.17f);
glVertex2f(0.68f,-0.19f);
glVertex2f(0.7f,-0.28f);
glVertex2f(0.7f,-0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.68f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.28f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.07f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.68f,0.07f);
glVertex2f(0.68f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.665f,0.07f);
glVertex2f(0.665f,-0.17f);
glEnd();//

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.58f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.04f);
glVertex2f(0.56f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.56f,0.04f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,0.07f);
glVertex2f(0.56f,0.07f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.575f,0.04f);
glVertex2f(0.575f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.565f,0.04f);
glVertex2f(0.565f,-0.14f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glVertex2f(0.56f,-0.17f);
glVertex2f(0.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(0.58f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.58f,-0.17f);
glVertex2f(.56f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(.56f,-0.17f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.58f,-0.14f);
glVertex2f(.56f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,0.07f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.07f);
glVertex2f(0.32f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,0.04f);
glVertex2f(0.3f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.3f,-0.14f);
glVertex2f(0.3f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.32f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.32f,-0.14f);
glVertex2f(0.3f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,-0.14f);
glVertex2f(0.315f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.305f,-0.14f);
glVertex2f(0.305f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,0.07f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.07f);
glVertex2f(0.45f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,0.04f);
glVertex2f(0.43f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.43f,-0.14f);
glVertex2f(0.43f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.45f,-0.17f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.45f,-0.14f);
glVertex2f(0.43f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.435f,-0.14f);
glVertex2f(0.435f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.445f,-0.14f);
glVertex2f(0.445f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.03f);
glVertex2f(0.93f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.06f);
glVertex2f(0.93f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.09f);
glVertex2f(0.93f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.12f);
glVertex2f(0.93f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.15f);
glVertex2f(0.93f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.18f);
glVertex2f(0.93f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,-0.21f);
glVertex2f(0.93f,-0.21f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.03f);
glVertex2f(0.72f,-0.03f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.06f);
glVertex2f(0.72f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.09f);
glVertex2f(0.72f,-0.09f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.12f);
glVertex2f(0.72f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.15f);
glVertex2f(0.72f,-0.15f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.18f);
glVertex2f(0.72f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,-0.21f);
glVertex2f(0.72f,-0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.28f,0.4f);
glVertex2f(0.28f,0.1f);
glVertex2f(0.24f,0.1f);
glVertex2f(0.24f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,0.1f);
glVertex2f(0.28f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.1f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.1f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.1f);
glVertex2f(0.25f,0.38f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.24f,0.4f);
glVertex2f(0.28f,0.4f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.25f,0.38f);
glVertex2f(0.27f,0.38f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.98f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.3f);
glVertex2f(0.28f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.3f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.98f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.96f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.27f);
glVertex2f(0.65f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.27f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.3f);
glVertex2f(0.65f,0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.3f);
glVertex2f(0.65f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.95f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.24f);
glVertex2f(0.92f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.24f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.27f);
glVertex2f(0.92f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.95f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.05f);
glVertex2f(0.92f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.92f,0.05f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.95f,0.08f);
glVertex2f(0.92f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.942f,0.24f);
glVertex2f(0.942f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.928f,0.08f);
glVertex2f(0.928f,0.24f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.78f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.05f);
glVertex2f(0.81f,0.05f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.05f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.08f);
glVertex2f(0.81f,0.08f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.81f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.24f);
glVertex2f(0.78f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.78f,0.24f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.81f,0.27f);
glVertex2f(0.78f,0.27f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.24f);
glVertex2f(0.805f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.787f,0.08f);
glVertex2f(0.787f,0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.3f);
glVertex2f(0.63f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.3f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.27f);
glVertex2f(0.6f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.63f,0.13f);
glVertex2f(0.63f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.6f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.6f,0.13f);
glVertex2f(0.63f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.625f,0.13f);
glVertex2f(0.625f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.61f,0.13f);
glVertex2f(0.61f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.3f);
glVertex2f(0.5f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.3f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.27f);
glVertex2f(0.47f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.5f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.47f,0.13f);
glVertex2f(0.47f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.5f,0.13f);
glVertex2f(0.47f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.495f,0.13f);
glVertex2f(0.495f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.48f,0.13f);
glVertex2f(0.48f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.3f);
glVertex2f(0.31f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.3f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.27f);
glVertex2f(0.34f,0.27f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.1f);
glVertex2f(0.31f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.34f,0.1f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.31f,0.13f);
glVertex2f(0.34f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.315f,0.27f);
glVertex2f(0.315f,0.13f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.335f,0.27f);
glVertex2f(0.335f,0.13f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.96f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.33f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.96f,0.45f);
glVertex2f(0.91f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.45f);
glVertex2f(0.65f,0.45f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.91f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.33f);
glVertex2f(0.7f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.7f,0.33f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.91f,0.42f);
glVertex2f(0.7f,0.42f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 172, 117);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.88f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.5f);
glVertex2f(0.73f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.85f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.805f,0.47f);
glVertex2f(0.76f,0.42f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.935f,0.48f);
glVertex2f(0.935f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.935f,0.53f);
glVertex2f(0.942f,0.48f);
glVertex2f(0.928f,0.48f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.677f,0.48f);
glVertex2f(0.677f,0.45f);
glEnd();

glBegin(GL_TRIANGLES);//building light
glColor3ub(255, 247, 0);
glVertex2f(0.676f,0.53f);
glVertex2f(0.684f,0.48f);
glVertex2f(0.669f,0.48f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.65f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.33f);
glVertex2f(0.28f,0.33f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.28f,0.33f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(0.65f,0.36f);
glVertex2f(0.28f,0.36f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.95f,0.43f);
glVertex2f(0.95f,0.35f);
glVertex2f(0.92f,0.35f);
glVertex2f(0.92f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.69f,0.43f);
glVertex2f(0.69f,0.35f);
glVertex2f(0.66f,0.35f);
glVertex2f(0.66f,0.43f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.88f,0.41f);
glVertex2f(0.88f,0.34f);
glVertex2f(0.85f,0.34f);
glVertex2f(0.85f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.82f,0.41f);
glVertex2f(0.82f,0.34f);
glVertex2f(0.79f,0.34f);
glVertex2f(0.79f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.41f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.73f,0.34f);
glVertex2f(0.73f,0.41f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,0.25f);
glVertex2f(0.9f,0.23f);
glVertex2f(0.84f,0.23f);
glVertex2f(0.84f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.89f,0.21f);
glVertex2f(0.89f,0.13f);
glVertex2f(0.85f,0.13f);
glVertex2f(0.85f,0.21f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.76f,0.25f);
glVertex2f(0.76f,0.23f);
glVertex2f(0.68f,0.23f);
glVertex2f(0.68f,0.25f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.74f,0.21f);
glVertex2f(0.74f,0.13f);
glVertex2f(0.7f,0.13f);
glVertex2f(0.7f,0.21f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.9f,-0.1f);
glVertex2f(0.9f,-0.25f);
glVertex2f(0.87f,-0.25f);
glVertex2f(0.87f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.78f,-0.1f);
glVertex2f(0.78f,-0.25f);
glVertex2f(0.75f,-0.25f);
glVertex2f(0.75f,-0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.64f,-0.01f);
glVertex2f(0.64f,-0.17f);
glVertex2f(0.61f,-0.17f);
glVertex2f(0.61f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.52f,-0.01f);
glVertex2f(0.52f,-0.17f);
glVertex2f(0.49f,-0.17f);
glVertex2f(0.49f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.39f,-0.01f);
glVertex2f(0.39f,-0.17f);
glVertex2f(0.36f,-0.17f);
glVertex2f(0.36f,-0.01f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.57f,0.23f);
glVertex2f(0.57f,0.1f);
glVertex2f(0.54f,0.1f);
glVertex2f(0.54f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.43f,0.23f);
glVertex2f(0.43f,0.1f);
glVertex2f(0.4f,0.1f);
glVertex2f(0.4f,0.23f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.23f,0.11f);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(-0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(-0.32f,-0.28f);
glVertex2f(-0.34f,-0.28f);
glVertex2f(-0.34f,-0.32f);
glVertex2f(-0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.23f,0.11f);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(135, 81, 19);
glVertex2f(0.32f,-0.28f);
glVertex2f(0.34f,-0.28f);
glVertex2f(0.34f,-0.32f);
glVertex2f(0.31f,-0.32f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 172, 117);
glVertex2f(-0.22f,0.1f);
glVertex2f(-0.31f,-0.32f);
glVertex2f(0.31f,-0.32f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.22f,0.1f);
glVertex2f(0.22f,0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.225f,0.08f);
glVertex2f(0.225f,0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.23f,0.06f);
glVertex2f(0.23f,0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.235f,0.04f);
glVertex2f(0.235f,0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.24f,0.02f);
glVertex2f(0.24f,0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.245f,0.0f);
glVertex2f(0.245f,0.0f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.25f,-0.02f);
glVertex2f(0.25f,-0.02f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.255f,-0.04f);
glVertex2f(0.255f,-0.04f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.26f,-0.06f);
glVertex2f(0.26f,-0.06f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.265f,-0.08f);
glVertex2f(0.265f,-0.08f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.27f,-0.1f);
glVertex2f(0.27f,-0.1f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.275f,-0.12f);
glVertex2f(0.275f,-0.12f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.28f,-0.14f);
glVertex2f(0.28f,-0.14f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.284f,-0.16f);
glVertex2f(0.284f,-0.16f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.288f,-0.18f);
glVertex2f(0.288f,-0.18f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.291f,-0.2f);
glVertex2f(0.291f,-0.2f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.295f,-0.22f);
glVertex2f(0.295f,-0.22f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.299f,-0.24f);
glVertex2f(0.299f,-0.24f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.31f,-0.26f);
glVertex2f(0.31f,-0.26f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.314f,-0.28f);
glVertex2f(0.314f,-0.28f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.318f,-0.3f);
glVertex2f(0.318f,-0.3f);
glEnd();

glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(-0.32f,-0.315f);
glVertex2f(0.32f,-0.315f);
glEnd();

//under

glBegin(GL_QUADS); //black part
glColor3ub(15, 12, 4);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-.90f);
glVertex2f(1.0f,-.90f);
glVertex2f(1.0f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.80f,-0.9650f);
glVertex2f(-.80f,-.90f);
glVertex2f(-.60f,-.90f);
glVertex2f(-.60f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(-.40f,-0.9650f);
glVertex2f(-.40f,-.90f);
glVertex2f(-.20f,-.90f);
glVertex2f(-.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.0f,-0.9650f);
glVertex2f(0.0f,-.90f);
glVertex2f(.20f,-.90f);
glVertex2f(.20f,-0.9650f);
glEnd();

glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(0.40f,-0.9650f);
glVertex2f(0.40f,-.90f);
glVertex2f(.60f,-.90f);
glVertex2f(.60f,-0.9650f);
glEnd();


glBegin(GL_QUADS); // white part
glColor3ub(255, 255,255);
glVertex2f(1.0f,-0.9650f);
glVertex2f(1.0f,-.90f);
glVertex2f(.80f,-.90f);
glVertex2f(.80f,-0.9650f);
glEnd();
//close
// under tree
glBegin(GL_QUADS);
glColor3ub(83, 224, 52);
glVertex2f(-1.0f,-0.9650f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.9650f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.92f,-1.0f);
glVertex2f(-.950f,-0.9f);
glVertex2f(-.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.94f,-1.0f);
glVertex2f(-.970f,-0.9f);
glVertex2f(-1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.82f,-1.0f);
glVertex2f(-.850f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.84f,-1.0f);
glVertex2f(-.870f,-0.9f);
glVertex2f(-.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.72f,-1.0f);
glVertex2f(-.750f,-0.9f);
glVertex2f(-.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.75f,-1.0f);
glVertex2f(-.770f,-0.9f);
glVertex2f(-.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.62f,-1.0f);
glVertex2f(-.650f,-0.9f);
glVertex2f(-.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.65f,-1.0f);
glVertex2f(-.670f,-0.9f);
glVertex2f(-.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.52f,-1.0f);
glVertex2f(-.550f,-0.9f);
glVertex2f(-.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.55f,-1.0f);
glVertex2f(-.570f,-0.9f);
glVertex2f(-.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.42f,-1.0f);
glVertex2f(-.450f,-0.9f);
glVertex2f(-.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.45f,-1.0f);
glVertex2f(-.470f,-0.9f);
glVertex2f(-.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.32f,-1.0f);
glVertex2f(-.350f,-0.9f);
glVertex2f(-.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.35f,-1.0f);
glVertex2f(-.370f,-0.9f);
glVertex2f(-.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.22f,-1.0f);
glVertex2f(-.250f,-0.9f);
glVertex2f(-.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.25f,-1.0f);
glVertex2f(-.270f,-0.9f);
glVertex2f(-.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.12f,-1.0f);
glVertex2f(-.150f,-0.9f);
glVertex2f(-.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.15f,-1.0f);
glVertex2f(-.170f,-0.9f);
glVertex2f(-.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.02f,-1.0f);
glVertex2f(-.050f,-0.9f);
glVertex2f(-.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(-0.05f,-1.0f);
glVertex2f(-.070f,-0.9f);
glVertex2f(-.12f,-1.0f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.92f,-1.0f);
glVertex2f(.950f,-0.9f);
glVertex2f(.990f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.94f,-1.0f);
glVertex2f(.970f,-0.9f);
glVertex2f(1.0f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.82f,-1.0f);
glVertex2f(.85f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.84f,-1.0f);
glVertex2f(.870f,-0.9f);
glVertex2f(.90f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.72f,-1.0f);
glVertex2f(.750f,-0.9f);
glVertex2f(.80f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(.75f,-1.0f);
glVertex2f(.770f,-0.9f);
glVertex2f(.82f,-1.0f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.62f,-1.0f);
glVertex2f(.650f,-0.9f);
glVertex2f(.70f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.65f,-1.0f);
glVertex2f(.670f,-0.9f);
glVertex2f(.72f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.52f,-1.0f);
glVertex2f(.550f,-0.9f);
glVertex2f(.60f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.55f,-1.0f);
glVertex2f(.570f,-0.9f);
glVertex2f(.62f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.42f,-1.0f);
glVertex2f(.450f,-0.9f);
glVertex2f(.50f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.45f,-1.0f);
glVertex2f(.470f,-0.9f);
glVertex2f(.52f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.32f,-1.0f);
glVertex2f(.350f,-0.9f);
glVertex2f(.40f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.35f,-1.0f);
glVertex2f(.370f,-0.9f);
glVertex2f(.42f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.22f,-1.0f);
glVertex2f(.250f,-0.9f);
glVertex2f(.30f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.25f,-1.0f);
glVertex2f(.270f,-0.9f);
glVertex2f(.32f,-1.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.12f,-1.0f);
glVertex2f(.150f,-0.9f);
glVertex2f(.20f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.15f,-1.0f);
glVertex2f(.170f,-0.9f);
glVertex2f(.22f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.02f,-1.0f);
glVertex2f(.050f,-0.9f);
glVertex2f(.10f,-1.0f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(83, 224, 52);
glVertex2f(0.05f,-1.0f);
glVertex2f(0.070f,-0.9f);
glVertex2f(.12f,-1.0f);
glEnd();

//boundary
//tree
glBegin(GL_QUADS); //1
glColor3ub(255, 254, 252);
glVertex2f(-.70f,-.50f);
glVertex2f(-0.725f,-0.5f);
glVertex2f(-0.725f,-0.41f);
glVertex2f(-.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.410f);
glVertex2f(-0.66f,-0.41f);
glVertex2f(-.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.765f,-.4250f);
glVertex2f(-0.66f,-0.425f);
glVertex2f(-.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //2
glColor3ub(255, 254, 252);
glVertex2f(-.40f,-.50f);
glVertex2f(-0.425f,-0.5f);
glVertex2f(-0.425f,-0.41f);
glVertex2f(-.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.410f);
glVertex2f(-0.36f,-0.41f);
glVertex2f(-.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(-0.465f,-.4250f);
glVertex2f(-0.36f,-0.425f);
glVertex2f(-.4125f,-.35f);
glEnd();


glBegin(GL_QUADS); //3
glColor3ub(255, 254, 252);
glVertex2f(.70f,-.50f);
glVertex2f(0.725f,-0.5f);
glVertex2f(0.725f,-0.41f);
glVertex2f(.7f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.410f);
glVertex2f(0.66f,-0.41f);
glVertex2f(.7125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.765f,-.4250f);
glVertex2f(0.66f,-0.425f);
glVertex2f(.7125f,-.35f);
glEnd();

glBegin(GL_QUADS); //4
glColor3ub(255, 254, 252);
glVertex2f(.40f,-.50f);
glVertex2f(0.425f,-0.5f);
glVertex2f(0.425f,-0.41f);
glVertex2f(.40f,-0.410f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.410f);
glVertex2f(0.36f,-0.41f);
glVertex2f(.4125f,-.32f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(29, 107, 5);
glVertex2f(0.465f,-.4250f);
glVertex2f(0.36f,-0.425f);
glVertex2f(.4125f,-.35f);
glEnd();

// Boundary Light
//1
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.80f,-.50f);
glVertex2f(-0.825f,-0.5f);
glVertex2f(-0.825f,-0.41f);
glVertex2f(-.8f,-0.410f);
glEnd();

int i13;

	GLfloat x13=-.8125f; GLfloat y13=-.375f; GLfloat radius13 =.04f;
	int triangleAmount13 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 202, 46);
		glVertex2f(x13, y13); // center of circle
		for(i13 = 0; i13<= triangleAmount13; i13++) {
			glVertex2f(
		            x13 + (radius13 * cos(i13 *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(i13 * twicePi13 / triangleAmount13))
			);
		}
	glEnd();

//2
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(-.50f,-.50f);
glVertex2f(-0.525f,-0.5f);
glVertex2f(-0.525f,-0.41f);
glVertex2f(-.50f,-0.410f);
glEnd();

int i14;

	GLfloat x14=-.5125f; GLfloat y14=-.375f; GLfloat radius14 =.04f;
	int triangleAmount14 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 202, 46);
		glVertex2f(x14, y14); // center of circle
		for(i14 = 0; i14<= triangleAmount14; i14++) {
			glVertex2f(
		            x14 + (radius14 * cos(i14 *  twicePi14 / triangleAmount14)),
			    y14 + (radius14 * sin(i14 * twicePi14 / triangleAmount14))
			);
		}
	glEnd();














glBegin(GL_QUADS); //3
glColor3ub(15, 9, 9);
glVertex2f(.50f,-.50f);
glVertex2f(0.525f,-0.5f);
glVertex2f(0.525f,-0.41f);
glVertex2f(.50f,-0.410f);
glEnd();

int i11;

	GLfloat x11=.5125f; GLfloat y11=-.375f; GLfloat radius11 =.04f;
	int triangleAmount11 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 202, 46);
		glVertex2f(x11, y11); // center of circle
		for(i11 = 0; i11<= triangleAmount11;i11++) {
			glVertex2f(
		            x11 + (radius11 * cos(i11 *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11))
			);
		}
	glEnd();



//4
glBegin(GL_QUADS);
glColor3ub(15, 9, 9);
glVertex2f(.80f,-.50f);
glVertex2f(0.825f,-0.5f);
glVertex2f(0.825f,-0.41f);
glVertex2f(.8f,-0.410f);
glEnd();

int i12;

	GLfloat x12=.8125f; GLfloat y12=-.375f; GLfloat radius12 =.04f;
	int triangleAmount12 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 202, 46);
		glVertex2f(x12, y12); // center of circle
		for(i12 = 0; i12<= triangleAmount12;i12++) {
			glVertex2f(
		            x12 + (radius12 * cos(i12 *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12))
			);
		}
	glEnd();


	//road
glBegin(GL_QUADS);
glColor3ub(107, 104, 96);
glVertex2f(-1.0f,-.50f);
glVertex2f(-1.0f,-0.9f);
glVertex2f(1.0f,-0.9f);
glVertex2f(1.0f,-0.5f);
glEnd();

// upper ground tree
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.92f,-.50f);
glVertex2f(-.950f,-0.43f);
glVertex2f(-.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.94f,-.50f);
glVertex2f(-.970f,-0.43f);
glVertex2f(-1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.82f,-.50f);
glVertex2f(-.850f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.84f,-.50f);
glVertex2f(-.870f,-0.43f);
glVertex2f(-.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.72f,-.50f);
glVertex2f(-.750f,-0.43f);
glVertex2f(-.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.75f,-.50f);
glVertex2f(-.770f,-0.43f);
glVertex2f(-.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.62f,-.50f);
glVertex2f(-.650f,-0.43f);
glVertex2f(-.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.65f,-.50f);
glVertex2f(-.670f,-0.43f);
glVertex2f(-.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.52f,-.50f);
glVertex2f(-.550f,-0.43f);
glVertex2f(-.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.55f,-.50f);
glVertex2f(-.570f,-0.429f);
glVertex2f(-.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.42f,-.50f);
glVertex2f(-.450f,-0.43f);
glVertex2f(-.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.45f,-.50f);
glVertex2f(-.470f,-0.43f);
glVertex2f(-.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.32f,-.50f);
glVertex2f(-.350f,-0.43f);
glVertex2f(-.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.35f,-.50f);
glVertex2f(-.370f,-0.429f);
glVertex2f(-.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.22f,-.50f);
glVertex2f(-.250f,-0.429f);
glVertex2f(-.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.25f,-.50f);
glVertex2f(-.270f,-0.429f);
glVertex2f(-.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.12f,-.50f);
glVertex2f(-.150f,-0.429f);
glVertex2f(-.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.15f,-.50f);
glVertex2f(-.170f,-0.429f);
glVertex2f(-.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.02f,-.50f);
glVertex2f(-.050f,-0.429f);
glVertex2f(-.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(-0.05f,-.50f);
glVertex2f(-.070f,-0.429f);
glVertex2f(-.12f,-.50f);
glEnd();

// positive under region
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.92f,-.50f);
glVertex2f(.950f,-0.43f);
glVertex2f(.990f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.94f,-.50f);
glVertex2f(.970f,-0.43f);
glVertex2f(1.0f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.82f,-.50f);
glVertex2f(.850f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.84f,-.50f);
glVertex2f(.870f,-0.43f);
glVertex2f(.90f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.72f,-.50f);
glVertex2f(.750f,-0.43f);
glVertex2f(.80f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.75f,-.50f);
glVertex2f(.770f,-0.43f);
glVertex2f(.82f,-.50f);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.62f,-.50f);
glVertex2f(.650f,-0.43f);
glVertex2f(.70f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.65f,-.50f);
glVertex2f(.670f,-0.43f);
glVertex2f(.72f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.52f,-.50f);
glVertex2f(.550f,-0.43f);
glVertex2f(.60f,-.5f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.55f,-.50f);
glVertex2f(.570f,-0.429f);
glVertex2f(.62f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.42f,-.50f);
glVertex2f(.450f,-0.43f);
glVertex2f(.50f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.45f,-.50f);
glVertex2f(.470f,-0.43f);
glVertex2f(.52f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.32f,-.50f);
glVertex2f(.350f,-0.43f);
glVertex2f(.40f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.35f,-.50f);
glVertex2f(.370f,-0.429f);
glVertex2f(.42f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.22f,-.50f);
glVertex2f(.250f,-0.429f);
glVertex2f(.30f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.25f,-.50f);
glVertex2f(.270f,-0.429f);
glVertex2f(.32f,-.50f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.12f,-.50f);
glVertex2f(.150f,-0.429f);
glVertex2f(.20f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.15f,-.50f);
glVertex2f(.170f,-0.429f);
glVertex2f(.22f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.02f,-.50f);
glVertex2f(.050f,-0.429f);
glVertex2f(.10f,-.50f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(74, 122, 26);
glVertex2f(0.05f,-.50f);
glVertex2f(.070f,-0.429f);
glVertex2f(.12f,-.50f);
glEnd();


//red part
glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.490f);
glVertex2f(-1.0f,-0.505f);
glVertex2f(1.0f,-0.505f);
glVertex2f(1.0f,-0.49f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(150, 29, 29);
glVertex2f(-1.0f,-.405f);
glVertex2f(-1.0f,-0.41f);
glVertex2f(1.0f,-0.41f);
glVertex2f(1.0f,-0.405f);
glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(150, 29, 29);
glVertex2f(-.980f,-.5f);
glVertex2f(-1.0f,-0.41f);

glVertex2f(-.890f,-.5f);
glVertex2f(-.90f,-0.41f);

glVertex2f(-.790f,-.5f);
glVertex2f(-.80f,-0.41f);

glVertex2f(-.690f,-.5f);
glVertex2f(-.70f,-0.41f);

glVertex2f(-.590f,-.5f);
glVertex2f(-.60f,-0.41f);

glVertex2f(-.490f,-.5f);
glVertex2f(-.50f,-0.41f);

glVertex2f(-.390f,-.5f);
glVertex2f(-.40f,-0.41f);

glVertex2f(-.290f,-.5f);
glVertex2f(-.30f,-0.41f);

glVertex2f(-.190f,-.5f);
glVertex2f(-.20f,-0.41f);

glVertex2f(-.090f,-.5f);
glVertex2f(-.10f,-0.41f);

glVertex2f(-.010f,-.5f);
glVertex2f(0.0f,-0.41f);



glVertex2f(.980f,-.5f);
glVertex2f(1.0f,-0.41f);

glVertex2f(.890f,-.5f);
glVertex2f(.90f,-0.41f);

glVertex2f(.790f,-.5f);
glVertex2f(.80f,-0.41f);

glVertex2f(.690f,-.5f);
glVertex2f(.70f,-0.41f);

glVertex2f(.590f,-.5f);
glVertex2f(.60f,-0.41f);

glVertex2f(.490f,-.5f);
glVertex2f(.50f,-0.41f);

glVertex2f(.390f,-.5f);
glVertex2f(.40f,-0.41f);

glVertex2f(.290f,-.5f);
glVertex2f(.30f,-0.41f);

glVertex2f(.190f,-.5f);
glVertex2f(.20f,-0.41f);

glVertex2f(.090f,-.5f);
glVertex2f(.10f,-0.41f);
glEnd();

glLoadIdentity();

glLineWidth(6);
glBegin(GL_LINES);
glColor3ub(255, 255,255);
glVertex2f(-1.0, -.7);
glVertex2f(-.955, -.7);

glVertex2f(-.9250, -.7);
glVertex2f(-.88, -.7);

glVertex2f(-.850, -.7);
glVertex2f(-.805, -.7);

glVertex2f(-.7750, -.7);
glVertex2f(-.73, -.7);

glVertex2f(-.70, -.7);
glVertex2f(-.655, -.7);

glVertex2f(-.6250, -.7);
glVertex2f(-.58, -.7);

glVertex2f(-.550, -.7);
glVertex2f(-.505, -.7);

glVertex2f(-.4750, -.7);
glVertex2f(-.43, -.7);


glVertex2f(-.40, -.7);
glVertex2f(-.355, -.7);

glVertex2f(-.3250, -.7);
glVertex2f(-.28, -.7);

glVertex2f(-.250, -.7);
glVertex2f(-.205, -.7);

glVertex2f(-.1750, -.7);
glVertex2f(-.13, -.7);

glVertex2f(-.10, -.7);
glVertex2f(-.055, -.7);

glVertex2f(-.025, -.7);
glVertex2f(.02, -.7);


//positive resigione

glVertex2f(1.0, -.7);
glVertex2f(.955, -.7);

glVertex2f(.9250, -.7);
glVertex2f(.88, -.7);

glVertex2f(.850, -.7);
glVertex2f(.805, -.7);

glVertex2f(.7750, -.7);
glVertex2f(.73, -.7);

glVertex2f(.70, -.7);
glVertex2f(.655, -.7);

glVertex2f(.6250, -.7);
glVertex2f(.58, -.7);

glVertex2f(.550, -.7);
glVertex2f(.505, -.7);

glVertex2f(.4750, -.7);
glVertex2f(.43, -.7);


glVertex2f(.40, -.7);
glVertex2f(.355, -.7);

glVertex2f(.3250, -.7);
glVertex2f(.28, -.7);

glVertex2f(.250, -.7);
glVertex2f(.205, -.7);

glVertex2f(.1750, -.7);
glVertex2f(.13, -.7);

glVertex2f(.10, -.7);
glVertex2f(.055, -.7);
glEnd();

glLoadIdentity();







	glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'm': // morning


   glutDisplayFunc(morning);
   glutPostRedisplay();

    break;


case 'd':  //day


   glutDisplayFunc(day);
   glutPostRedisplay();

    break;
case 'e': // evening
   glutDisplayFunc(evening);
glutPostRedisplay();
    break;

case 'n':   // night
   glutDisplayFunc(night);
glutPostRedisplay();
    break;


	}
}

void handleKeypress1(unsigned char key, int x, int y) {
	switch (key) {
case 'p':  //pause
    speed3 = 0.0f;
    break;
case 'f': // fast
    speed3 = 1.0f;
    break;
glutPostRedisplay();
	}

}

int main(int argc, char** argv) {



	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(morning);
	 init();
    glutKeyboardFunc(handleKeypress);
	glutTimerFunc(100,update,0);
	glutTimerFunc(100,update1,0);
	glutTimerFunc(100,update2,0);
	glutTimerFunc(100,update3,0);
	glutTimerFunc(100, update4, 0);// car speed
	glutIdleFunc(Idle);

	glutMainLoop();
	return 0;
}



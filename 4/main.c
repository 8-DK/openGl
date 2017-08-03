#include <GL/glut.h>


#define P_x 3.0f
#define P_y 3.0f
#define P_z 3.0f

#define OrigineShiftX  -1.5f
#define OrigineShiftY  -1.5f
#define OrigineShiftZ  -1.5f

#define V_origine {0.0f+OrigineShiftX,0.0f+OrigineShiftY,0.0f+OrigineShiftZ}
#define  V_xyz {P_x+OrigineShiftX, P_y+OrigineShiftY, P_z+OrigineShiftZ}
#define V_x  {P_x+OrigineShiftX, 0.0f+OrigineShiftY, 0.0f+OrigineShiftZ}  
#define V_xy  {P_z+OrigineShiftX, P_y+OrigineShiftY, 0.0f+OrigineShiftZ}  
#define V_xz  {P_x+OrigineShiftX, 0.0f+OrigineShiftY, P_z+OrigineShiftZ}
#define V_y  {0.0f+OrigineShiftX, P_y+OrigineShiftY, 0.0f+OrigineShiftZ}  
#define V_yz {0.0f+OrigineShiftX, P_y+OrigineShiftY, P_z+OrigineShiftZ}
#define V_z  {0.0f+OrigineShiftX, 0.0f+OrigineShiftY, P_z+OrigineShiftZ} 
  
GLfloat main_Cube_Top[4][3] =  { V_z , V_xz , V_xyz ,V_yz };
GLfloat main_Cube_Bottom[4][3] =  { V_origine , V_x ,V_xy ,V_y };
GLfloat main_Cube_Front[4][3] =  { V_xz , V_xyz, V_xy, V_x};
GLfloat main_Cube_Back[4][3] =  { V_z, V_yz, V_y, V_origine };
GLfloat main_Cube_Left[4][3] =  { V_z, V_xz , V_x , V_origine };
GLfloat main_Cube_Right[4][3] =  { V_y, V_yz, V_xyz, V_xy};

GLfloat xRotated, yRotated, zRotated;


void DrawCube(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    
    glMatrixMode(GL_MODELVIEW);
    
    // clear the drawing buffer.
    //glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0,0.0,-10.5);
    
    // rotation about x axis
    glRotatef(xRotated,1.0,0.0,0.0);
    
    // rotation about Y axis
    glRotatef(yRotated,0.0,1.0,0.0);
    
    // rotation about Z axis
    glRotatef(zRotated,0.0,0.0,1.0);

    glBegin(GL_QUADS);        // Draw The Cube Using quads
		glColor3f(0.0f,1.0f,0.0f);    // Color Blue
		glVertex3f( main_Cube_Top[0][0], main_Cube_Top[0][1] , main_Cube_Top[0][2]);    // Top Right Of The Quad (Top)
		glColor3f( 1.0, 0.0, 0.0 ); 
		glVertex3f( main_Cube_Top[1][0], main_Cube_Top[1][1] , main_Cube_Top[1][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Top[2][0], main_Cube_Top[2][1] , main_Cube_Top[2][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Top[3][0], main_Cube_Top[3][1] , main_Cube_Top[3][2]);    // Top Right Of The Quad (Top)
    glEnd();            // End Drawing The Cube
    
    glBegin(GL_QUADS);        // Draw The Cube Using quads
		glColor3f(1.0f,1.0f,0.0f);    // Color Blue
		glVertex3f( main_Cube_Bottom[0][0], main_Cube_Bottom[0][1] , main_Cube_Bottom[0][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Bottom[1][0], main_Cube_Bottom[1][1] , main_Cube_Bottom[1][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Bottom[2][0], main_Cube_Bottom[2][1] , main_Cube_Bottom[2][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Bottom[3][0], main_Cube_Bottom[3][1] , main_Cube_Bottom[3][2]);    // Top Right Of The Quad (Top)
    glEnd();            // End Drawing The Cube
    
    glBegin(GL_QUADS);        // Draw The Cube Using quads
		glColor3f(0.3f,4.0f,1.0f);    // Color Blue
		glVertex3f( main_Cube_Front[0][0], main_Cube_Front[0][1] , main_Cube_Front[0][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Front[1][0], main_Cube_Front[1][1] , main_Cube_Front[1][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Front[2][0], main_Cube_Front[2][1] , main_Cube_Front[2][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Front[3][0], main_Cube_Front[3][1] , main_Cube_Front[3][2]);    // Top Right Of The Quad (Top)
    glEnd();            // End Drawing The Cube
    
    glBegin(GL_QUADS);        // Draw The Cube Using quads
		glColor3f(1.0f,0.0f,1.0f);    // Color Blue
		glVertex3f( main_Cube_Back[0][0], main_Cube_Back[0][1] , main_Cube_Back[0][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Back[1][0], main_Cube_Back[1][1] , main_Cube_Back[1][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Back[2][0], main_Cube_Back[2][1] , main_Cube_Back[2][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Back[3][0], main_Cube_Back[3][1] , main_Cube_Back[3][2]);    // Top Right Of The Quad (Top)
    glEnd();            // End Drawing The Cube
    
    glBegin(GL_QUADS);        // Draw The Cube Using quads
		glColor3f(0.3f,1.0f,5.0f);    // Color Blue
		glVertex3f( main_Cube_Left[0][0], main_Cube_Left[0][1] , main_Cube_Left[0][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Left[1][0], main_Cube_Left[1][1] , main_Cube_Left[1][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Left[2][0], main_Cube_Left[2][1] , main_Cube_Left[2][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Left[3][0], main_Cube_Left[3][1] , main_Cube_Left[3][2]);    // Top Right Of The Quad (Top)
    glEnd();            // End Drawing The Cube
    
    glBegin(GL_QUADS);        // Draw The Cube Using quads
		glColor3f(2.0f,2.0f,1.0f);    // Color Blue
		glVertex3f( main_Cube_Right[0][0], main_Cube_Right[0][1] , main_Cube_Right[0][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Right[1][0], main_Cube_Right[1][1] , main_Cube_Right[1][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Right[2][0], main_Cube_Right[2][1] , main_Cube_Right[2][2]);    // Top Right Of The Quad (Top)
		glVertex3f( main_Cube_Right[3][0], main_Cube_Right[3][1] , main_Cube_Right[3][2]);    // Top Right Of The Quad (Top)
    glEnd();            // End Drawing The Cube
    
    
    

/*    glPointSize(10.0f);
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex3f(0.0f,0.0f,0.1f);
    glVertex3f(0.0f,1.0f,0.1f);
    glVertex3f(1.0f,0.0f,0.1f);
    glVertex3f(1.0f,1.0f,0.1f);
    glEnd();
 */
    glFlush();

}


void animation(void)
{

    xRotated += 0.6;
    yRotated += 0.6;
//zRotated+=0.5;
    DrawCube();
}


void reshape(int x, int y)
{
    if (y == 0 || x == 0) return;  //Nothing is visible then, so return
    //Set a new projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //Angle of view:40 degrees
    //Near clipping plane distance: 0.5
    //Far clipping plane distance: 20.0

    gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,20.0);
    glMatrixMode(GL_MODELVIEW);
    glViewport(0,0,x,y);  //Use the whole window for rendering
}

void specialKeys( int key, int x, int y ) {
 
	//  Right arrow - increase rotation by 5 degree
	if (key == GLUT_KEY_RIGHT)
	  yRotated += 5;
	 
	//  Left arrow - decrease rotation by 5 degree
	else if (key == GLUT_KEY_LEFT)
	  yRotated -= 5;
	 
	else if (key == GLUT_KEY_UP)
	  xRotated += 5;
	 
	else if (key == GLUT_KEY_DOWN)
	  xRotated -= 5;
	 
	//  Request display update
	glutPostRedisplay();
 
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    
//we initizlilze the glut. functions
    //glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    
    glutInitWindowPosition(100, 100);
    
    glutCreateWindow(argv[0]);
    
    glEnable(GL_DEPTH_TEST);
    
    glutSpecialFunc(specialKeys);
    
    glClearColor(0,0,0,0);
    
    glutDisplayFunc(DrawCube);
    
    glutReshapeFunc(reshape);
    
//Set the function for the animation.
    glutIdleFunc(animation);
    glutMainLoop();
    return 0;
}

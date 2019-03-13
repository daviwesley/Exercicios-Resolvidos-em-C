#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>

static GLfloat spin=0.0;		
void init(){
	glClearColor(1.0,0.5,1.0,1.0);
}
void spinDisplay(){
	spin +=2.0;
	if(spin > 360.0) spin -=360.0;

	glutPostRedisplay();
}
void reshape(int w, int h){
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50.0,50.0,-50.0,50.0,-1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}
void mouse(int button, int state, int x, int y){
	switch(button){
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_DOWN){
				glutIdleFunc(spinDisplay);

			}
			break;
		case GLUT_RIGHT_BUTTON:
			if(state == GLUT_DOWN){
				glutIdleFunc(NULL);
			}
			break;
		default:
			break;
	}
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glRotatef(spin,0.0,0.0,1.0);
	glColor3f(1.0,0.5,1.0);
	//meu desnho
	glPopMatrix();
	glutSwapBuffers();
}
void main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Girar");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutMainLoop();
}

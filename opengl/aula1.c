#include <GL/glut.h>
// gcc main.c -lGL -lglut -o fortinite
void initGL(){
	glClearColor(1.0, 0.5, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-40, 40, -30, 30, 10, 10);
	glMatrixMode(GL_MODELVIEW);
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Olá OPENGL!");
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}

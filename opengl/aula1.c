#include <GL/glut.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define X 0
#define Y 1

// gcc main.c -lGL -lglut -o fortinite
float vertices[3][2] = {{-25, -25},
							{25, -25 },
							{0.0, 0.0}};
void initGL(){
	glClearColor(0.0, 0.5, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-40, 40, -30, 30, 10, -10);
	glMatrixMode(GL_MODELVIEW);
}

float ponto[2] = {0.0, 0.0};

void calcularMedia(){
	int i = 0;
	for(i; i < 500000; i++){
		int a = rand() % 3;
		//printf("%i", a);
		ponto[X] = (ponto[X] + vertices[a][X]) / 2.0;
		ponto[Y] = (ponto[Y] + vertices[a][Y]) / 2.0;
		glVertex2f(ponto[X], ponto[Y]);
	}
	
}
void triangulo(){
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2fv(vertices[0]);
	glVertex2fv(vertices[1]);
	glVertex2fv(vertices[2]);
	calcularMedia();

	// Escolher aleatoriamente um dos vertices (vertices[0] ou vertices[1] ou vertices[2])
	// calcular o ponto médio entre ponto e o vértice escolhido
	// ponto recebe ponto médio
	// pinta ponto

	glEnd();
}


void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	triangulo();
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

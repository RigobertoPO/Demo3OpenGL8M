#include<gl/glut.h>
void DibujarLineas() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2i(100, 450);
	glVertex2i(400, 450);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(100, 200);
	glVertex2i(400, 200);
	glVertex2i(400, 450);
	glVertex2i(250, 550);
	glVertex2i(100, 450);
	glVertex2i(100, 200);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(250, 300);
	glVertex2i(350, 300);
	glVertex2i(350, 400);
	glVertex2i(250, 400);
	glVertex2i(250, 300);
	glEnd();
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(450, 200);
	glVertex2i(750, 200);
	glVertex2i(750, 450);
	glVertex2i(450, 450);
	glEnd();
	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(1, 0, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo 3 lineas");
	glutDisplayFunc(DibujarLineas);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
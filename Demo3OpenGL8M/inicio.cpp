#include<gl/glut.h>
void DibujarLineas() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(1, 0, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(4.0);
	glOrtho(800, 0, 600, 0, 1, -1);
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
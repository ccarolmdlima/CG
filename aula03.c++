#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f);
	glPointSize(10.0f);
	glBegin(GL_POINTS);
		glVertex2f(-8, -5);
		glVertex2f(8, 5);
	
		glVertex2f(-8, 0);
		glVertex2f(8, 0);
	
		glVertex2f(-8, 5);
		glVertex2f(8, -5);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f);
	glLineWidth(5);
	//glPointSize(10.0f);
	glBegin(GL_LINES);
		glVertex2f(-8, -5);
		glVertex2f(8, -5);

		glVertex2f(-8, 0);
		glVertex2f(8, 0);

		glVertex2f(-8, 5);
		glVertex2f(8, 5);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f);
	glLineWidth(5);
	//glPointSize(10.0f);
	glBegin(GL_LINE_STRIP);
		glVertex2f(-8, -5);
		glVertex2f(8, -5);

		glVertex2f(-8, 0);
		glVertex2f(8, 0);

		glVertex2f(-8, 5);
		glVertex2f(8, 5);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f);
	glLineWidth(5);
	//glPointSize(10.0f);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-8, -5);
		glVertex2f(8, -5);

		glVertex2f(-8, 0);
		glVertex2f(8, 0);

		glVertex2f(-8, 5);
		glVertex2f(8, 5);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glut.h>

void desenho()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0f, 0.0f, 0.0f);
	glLineWidth(5);
	//glPointSize(10.0f);
	glBegin(GL_TRIANGLES);
		glVertex2f(-8, -5);
		glVertex2f(8, -5);

		glVertex2f(-8, 0);
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex2f(8, 0);

		glVertex2f(-8, 5);
		glVertex2f(8, 5);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(10, 20);
	glutCreateWindow("Primitivas");
	glutDisplayFunc(desenho);
	gluOrtho2D(-10, 10, -10, 10);
	glClearColor(256.0 / 256.0, 256.0 / 256.0, 256.0 / 256.0, 0);
	glutMainLoop();
	return 0;
}

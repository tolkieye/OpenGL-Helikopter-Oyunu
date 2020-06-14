#include"glew.h" //Kütüphaneler
#include"freeglut.h"
#include <string> 
#include<iostream>
#include<stdlib.h>
#include<glut.h>
#include< cstdlib >  
using namespace std;
int hak = 3;
int skor = 0;
float xr = 0, yr = 0;			
int x1 = rand() % 430;
int x2 = rand() % 190;
int xb = 200;
int yb = 200;
std::string cikti = "";
float hareket1 = 240;
float hareket2 = 240;
float hareket3 = 240; 
float hareket4 = 240;
GLint randomInt()
{
	return (GLint)rand() % 2;
}
int helikopter1 = randomInt();
int helikopter2 = randomInt();
int helikopter3 = randomInt();
int helikopter4 = randomInt();
GLfloat randomFloat()     // 0 1 arasý random float üretiyor
{
	return (GLfloat)rand() / RAND_MAX;
}
float randomFloat1 = randomFloat(); // helikopterin alacaðý RGB deðerlerinden Kýrmýzý deðeri 0 ile 1 arasý
float randomFloat2 = randomFloat(); // helikopterin alacaðý RGB deðerlerinden Yeþil   deðeri 0 ile 1 arasý
float randomFloat3 = randomFloat(); // helikopterin alacaðý RGB deðerlerinden Mavi    deðeri 0 ile 1 arasý
float randomFloat4 = randomFloat(); // helikopterin hýzý için üretilen deðer 0 ile 1 arasý
float randomFloat5 = randomFloat(); // hleikopter 2nin alacaðý R deðeri
float randomFloat6 = randomFloat(); // helikopter 2 G
float randomFloat7 = randomFloat(); // helikopter 2 B
float randomFloat8 = randomFloat(); // helikopter 3 R
float randomFloat9 = randomFloat(); // helikopter 3 G
float randomFloat10 = randomFloat();// helikopter 3 B
float randomFloat11 = randomFloat();// helikopter 4 R
float randomFloat12 = randomFloat();// helikopter 4 G
float randomFloat13 = randomFloat();// helikopter 4 B
float randomFloat15 = randomFloat();// helikopter 3 hýzý
float randomFloat16 = randomFloat();// helikopter 4 hýzý
float randomFloat17 = randomFloat();// helikopter 2 hýzý
void skorbord()
{
	glColor3f(1.0, 0.0, 0.0);
	std::string message = "Puan:" + std::to_string(skor) + "   Kalan Hak:" + std::to_string(hak);
	glRasterPos2i(300, 610);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)message.c_str());
}
void text(std::string message)
{
	cikti = message;
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(50.0, 320);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)message.c_str());
}
void hareket(void)
{
	if (hareket1 <= 240 && hareket1 > -240)
		hareket1 = hareket1 - randomFloat4/3;  // random float çaðýrýyoruz ki random hýzda gelsin 
	else hareket1 = 240;
	if (hareket2 <= 240 && hareket2 > -240)
		hareket2 = hareket2 - randomFloat17/3;  // random float çaðýrýyoruz ki random hýzda gelsin 
	else hareket2 = 240;
	if (hareket3 <= 240 && hareket3 > -240)
		hareket3 = hareket3 - randomFloat15/3;  // random float çaðýrýyoruz ki random hýzda gelsin 
	else hareket3 = 240;
	if (hareket4 <= 240 && hareket4 > -240)
		hareket4 = hareket4 - randomFloat16/3;  // random float çaðýrýyoruz ki random hýzda gelsin 
	else hareket4 = 240;
	glutPostRedisplay();				   
}


void ucak()               
{
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1 + 20 + xr, x2 + 00 + yr);
	glVertex2f(x1 + 30 + xr, x2 + 00 + yr);
	glVertex2f(x1 + 30 + xr, x2 + 10 + yr);
	glVertex2f(x1 + 45 + xr, x2 + 10 + yr);
	glVertex2f(x1 + 45 + xr, x2 + 20 + yr);
	glVertex2f(x1 + 30 + xr, x2 + 20 + yr);
	glVertex2f(x1 + 30 + xr, x2 + 30 + yr);
	glVertex2f(x1 + 50 + xr, x2 + 30 + yr);
	glVertex2f(x1 + 50 + xr, x2 + 40 + yr);
	glVertex2f(x1 + 30 + xr, x2 + 40 + yr);
	glVertex2f(x1 + 30 + xr, x2 + 50 + yr);
	glVertex2f(x1 + 20 + xr, x2 + 50 + yr);
	glVertex2f(x1 + 20 + xr, x2 + 40 + yr);
	glVertex2f(x1 + 00 + xr, x2 + 40 + yr);
	glVertex2f(x1 + 00 + xr, x2 + 30 + yr);
	glVertex2f(x1 + 20 + xr, x2 + 30 + yr);
	glVertex2f(x1 + 20 + xr, x2 + 20 + yr);
	glVertex2f(x1 + 05 + xr, x2 + 20 + yr);
	glVertex2f(x1 + 05 + xr, x2 + 10 + yr);
	glVertex2f(x1 + 20 + xr, x2 + 10 + yr);
	glVertex2f(x1 + 20 + xr, x2 + 00 + yr);
	glEnd();
	if (yr + x2 > 640)
	{
		x1 = rand() % 430;
		x2 = rand() % 190;

		yr = 0;
		xr = 0;
		randomFloat1 = randomFloat();
		randomFloat2 = randomFloat();
		randomFloat3 = randomFloat();
		randomFloat5 = randomFloat();
		randomFloat6 = randomFloat();
		randomFloat7 = randomFloat();
		randomFloat8 = randomFloat();
		randomFloat9 = randomFloat();
		randomFloat10 = randomFloat();
		randomFloat11 = randomFloat();
		randomFloat12 = randomFloat();
		randomFloat13 = randomFloat();
		helikopter1 = randomInt();
		helikopter2 = randomInt();
		helikopter3 = randomInt();
		helikopter4 = randomInt();
		hareket1 = 240;
		hareket2 = 240;
		hareket3 = 240;
		hareket4 = 240;
		randomFloat4 = randomFloat4 + 0.05;
		randomFloat17 = randomFloat17 + 0.05;
		randomFloat15 = randomFloat15 + 0.05;
		randomFloat16 = randomFloat16 + 0.05;
		skor = skor + 10;
	}
	if (yr + x2 >= 210 && yr + x2 <= 310)
	{
		if (helikopter1 == 1)
		{
			if (x1 + xr > (190 - hareket1) && x1 + xr < (290 - hareket1))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1;
				cout << "Kalan Hak = " << hak;

			}

		}
		if (helikopter1 == 0)
		{
			if (x1 + xr > (190 + hareket1) && x1 + xr < (290 + hareket1))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1; 

			}
		}
	}
	if (yr + x2 > 310 && yr + x2 <= 410)
	{
		if (helikopter2 == 1)
		{
			if (x1 + xr > (190 - hareket2) && x1 + xr < (290 - hareket2))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1;

			}

		}
		if (helikopter2 == 0)
		{
			if (x1 + xr > (190 + hareket2) && x1 + xr < (290 + hareket2))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1;

			}
		}
	}
	if (yr + x2 > 410 && yr + x2 <= 510)
	{
		if (helikopter3 == 1)
		{
			if (x1 + xr > (190 - hareket3) && x1 + xr < (290 - hareket3))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1; 

			}
		}
		if (helikopter3 == 0)
		{
			if (x1 + xr > (190 + hareket3) && x1 + xr < (290 + hareket3))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1;

			}
		}
	}
	if (yr + x2 > 510 && yr + x2 <= 610)
	{
		if (helikopter4 == 1)
		{
			if (x1 + xr > (190 - hareket4) && x1 + xr < (290 - hareket4))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1;

			}
		}
		if (helikopter4 == 0)
		{
			if (x1 + xr > (190 + hareket4) && x1 + xr < (290 + hareket4))
			{
				x1 = rand() % 430;
				x2 = rand() % 190;

				yr = 0;
				xr = 0;
				randomFloat1 = randomFloat();
				randomFloat2 = randomFloat();
				randomFloat3 = randomFloat();
				randomFloat5 = randomFloat();
				randomFloat6 = randomFloat();
				randomFloat7 = randomFloat();
				randomFloat8 = randomFloat();
				randomFloat9 = randomFloat();
				randomFloat10 = randomFloat();
				randomFloat11 = randomFloat();
				randomFloat12 = randomFloat();
				randomFloat13 = randomFloat();
				helikopter1 = randomInt();
				helikopter2 = randomInt();
				helikopter3 = randomInt();
				helikopter4 = randomInt();

				hareket1 = 240;
				hareket2 = 240;
				hareket3 = 240;
				hareket4 = 240;
				hak = hak - 1;

			}
		}
	}	
}
void heli1()
{
	if (helikopter1 == 1)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(-hareket1, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 310);
		glVertex2i(290, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 295);
		glVertex2i(290, 310);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat1, randomFloat2, randomFloat3);
		glVertex2i(274, 302);
		glVertex2i(276, 302);
		glVertex2i(276, 295);
		glVertex2i(274, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat1, randomFloat2, randomFloat3);
		glVertex2i(265, 270);
		glVertex2i(285, 270);
		glVertex2i(285, 295);
		glVertex2i(265, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat1, randomFloat2, randomFloat3);
		glVertex2i(245, 280);
		glVertex2i(265, 280);
		glVertex2i(265, 290);
		glVertex2i(245, 290);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 285);
		glVertex2i(250, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 295);
		glVertex2i(250, 285);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(270, 273);
		glVertex2i(272, 273);
		glVertex2i(272, 260);
		glVertex2i(270, 260);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(278, 273);
		glVertex2i(280, 273);
		glVertex2i(280, 260);
		glVertex2i(278, 260);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(265, 260);
		glVertex2i(285, 260);
		glVertex2i(285, 262);
		glVertex2i(265, 262);
		glEnd();
	}
	if (helikopter1 == 0)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(hareket1, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 310);
		glVertex2i(270, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 295);
		glVertex2i(270, 310);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat1, randomFloat2, randomFloat3);
		glVertex2i(254, 302);
		glVertex2i(256, 302);
		glVertex2i(256, 295);
		glVertex2i(254, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat1, randomFloat2, randomFloat3);
		glVertex2i(245, 270);
		glVertex2i(265, 270);
		glVertex2i(265, 295);
		glVertex2i(245, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat1, randomFloat2, randomFloat3);
		glVertex2i(265, 280);
		glVertex2i(285, 280);
		glVertex2i(285, 290);
		glVertex2i(265, 290);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 285);
		glVertex2i(290, 295);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 295);
		glVertex2i(290, 285);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(250, 273);
		glVertex2i(252, 273);
		glVertex2i(252, 260);
		glVertex2i(250, 260);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(258, 273);
		glVertex2i(260, 273);
		glVertex2i(260, 260);
		glVertex2i(258, 260);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(245, 260);
		glVertex2i(265, 260);
		glVertex2i(265, 262);
		glVertex2i(245, 262);
		glEnd();
	}	
}
void heli2()
{
	if (helikopter2 == 1)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(-hareket2, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 410);
		glVertex2i(290, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 395);
		glVertex2i(290, 410);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat5, randomFloat6, randomFloat7);
		glVertex2i(274, 402);
		glVertex2i(276, 402);
		glVertex2i(276, 395);
		glVertex2i(274, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat5, randomFloat6, randomFloat7);
		glVertex2i(265, 370);
		glVertex2i(285, 370);
		glVertex2i(285, 395);
		glVertex2i(265, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat5, randomFloat6, randomFloat7);
		glVertex2i(245, 380);
		glVertex2i(265, 380);
		glVertex2i(265, 390);
		glVertex2i(245, 390);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 385);
		glVertex2i(250, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 395);
		glVertex2i(250, 385);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(270, 373);
		glVertex2i(272, 373);
		glVertex2i(272, 360);
		glVertex2i(270, 360);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(278, 373);
		glVertex2i(280, 373);
		glVertex2i(280, 360);
		glVertex2i(278, 360);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(265, 360);
		glVertex2i(285, 360);
		glVertex2i(285, 362);
		glVertex2i(265, 362);
		glEnd();
	}
	if (helikopter2 == 0)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(hareket2, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 410);
		glVertex2i(270, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 395);
		glVertex2i(270, 410);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat5, randomFloat6, randomFloat7);
		glVertex2i(254, 402);
		glVertex2i(256, 402);
		glVertex2i(256, 395);
		glVertex2i(254, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat5, randomFloat6, randomFloat7);
		glVertex2i(245, 370);
		glVertex2i(265, 370);
		glVertex2i(265, 395);
		glVertex2i(245, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat5, randomFloat6, randomFloat7);
		glVertex2i(265, 380);
		glVertex2i(285, 380);
		glVertex2i(285, 390);
		glVertex2i(265, 390);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 385);
		glVertex2i(290, 395);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 395);
		glVertex2i(290, 385);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(250, 373);
		glVertex2i(252, 373);
		glVertex2i(252, 360);
		glVertex2i(250, 360);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(258, 373);
		glVertex2i(260, 373);
		glVertex2i(260, 360);
		glVertex2i(258, 360);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(245, 360);
		glVertex2i(265, 360);
		glVertex2i(265, 362);
		glVertex2i(245, 362);
		glEnd();
	}
}
void heli3()
{
	if (helikopter3 == 1)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(-hareket3, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 510);
		glVertex2i(290, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 495);
		glVertex2i(290, 510);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat8, randomFloat9, randomFloat10);
		glVertex2i(274, 502);
		glVertex2i(276, 502);
		glVertex2i(276, 495);
		glVertex2i(274, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat8, randomFloat9, randomFloat10);
		glVertex2i(265, 470);
		glVertex2i(285, 470);
		glVertex2i(285, 495);
		glVertex2i(265, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat8, randomFloat9, randomFloat10);
		glVertex2i(245, 480);
		glVertex2i(265, 480);
		glVertex2i(265, 490);
		glVertex2i(245, 490);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 485);
		glVertex2i(250, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 495);
		glVertex2i(250, 485);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(270, 473);
		glVertex2i(272, 473);
		glVertex2i(272, 460);
		glVertex2i(270, 460);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(278, 473);
		glVertex2i(280, 473);
		glVertex2i(280, 460);
		glVertex2i(278, 460);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(265, 460);
		glVertex2i(285, 460);
		glVertex2i(285, 462);
		glVertex2i(265, 462);
		glEnd();
	}
	if (helikopter3 == 0)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(hareket3, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 510);
		glVertex2i(270, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 495);
		glVertex2i(270, 510);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat8, randomFloat9, randomFloat10);
		glVertex2i(254, 502);
		glVertex2i(256, 502);
		glVertex2i(256, 495);
		glVertex2i(254, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat8, randomFloat9, randomFloat10);
		glVertex2i(245, 470);
		glVertex2i(265, 470);
		glVertex2i(265, 495);
		glVertex2i(245, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat8, randomFloat9, randomFloat10);
		glVertex2i(265, 480);
		glVertex2i(285, 480);
		glVertex2i(285, 490);
		glVertex2i(265, 490);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 485);
		glVertex2i(290, 495);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 495);
		glVertex2i(290, 485);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(250, 473);
		glVertex2i(252, 473);
		glVertex2i(252, 460);
		glVertex2i(250, 460);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(258, 473);
		glVertex2i(260, 473);
		glVertex2i(260, 460);
		glVertex2i(258, 460);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(245, 460);
		glVertex2i(265, 460);
		glVertex2i(265, 462);
		glVertex2i(245, 462);
		glEnd();
	}
}
void heli4()
{
	if (helikopter4 == 1)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(-hareket4, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 610);
		glVertex2i(290, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(260, 595);
		glVertex2i(290, 610);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat11, randomFloat12, randomFloat13);
		glVertex2i(274, 602);
		glVertex2i(276, 602);
		glVertex2i(276, 595);
		glVertex2i(274, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat11, randomFloat12, randomFloat13);
		glVertex2i(265, 570);
		glVertex2i(285, 570);
		glVertex2i(285, 595);
		glVertex2i(265, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat11, randomFloat12, randomFloat13);
		glVertex2i(245, 580);
		glVertex2i(265, 580);
		glVertex2i(265, 590);
		glVertex2i(245, 590);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 585);
		glVertex2i(250, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 595);
		glVertex2i(250, 585);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(270, 573);
		glVertex2i(272, 573);
		glVertex2i(272, 560);
		glVertex2i(270, 560);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(278, 573);
		glVertex2i(280, 573);
		glVertex2i(280, 560);
		glVertex2i(278, 560);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(265, 560);
		glVertex2i(285, 560);
		glVertex2i(285, 562);
		glVertex2i(265, 562);
		glEnd();
	}
	if (helikopter4 == 0)
	{
		glPointSize(5.0f);
		//glPushMatrix();
		glTranslatef(hareket4, 0.0, 0.0);
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 610);
		glVertex2i(270, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(240, 595);
		glVertex2i(270, 610);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat11, randomFloat12, randomFloat13);
		glVertex2i(254, 602);
		glVertex2i(256, 602);
		glVertex2i(256, 595);
		glVertex2i(254, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat11, randomFloat12, randomFloat13);
		glVertex2i(245, 570);
		glVertex2i(265, 570);
		glVertex2i(265, 595);
		glVertex2i(245, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(randomFloat11, randomFloat12, randomFloat13);
		glVertex2i(265, 580);
		glVertex2i(285, 580);
		glVertex2i(285, 590);
		glVertex2i(265, 590);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 585);
		glVertex2i(290, 595);
		glEnd();
		//glPushMatrix();
		glBegin(GL_LINES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(280, 595);
		glVertex2i(290, 585);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(250, 573);
		glVertex2i(252, 573);
		glVertex2i(252, 560);
		glVertex2i(250, 560);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(258, 573);
		glVertex2i(260, 573);
		glVertex2i(260, 560);
		glVertex2i(258, 560);
		glEnd();
		//glPushMatrix();
		glBegin(GL_POLYGON);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2i(245, 560);
		glVertex2i(265, 560);
		glVertex2i(265, 562);
		glVertex2i(245, 562);
		glEnd();
	}
}
void settings(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glPointSize(5.0);
	glLineWidth(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 480.0, 0.0, 640.0);
} 
void Display(void)
{
	if (hak > 0)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1.0, 0.7, 0.4);
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(480, 0);
		glVertex2f(480, 240);
		glVertex2f(0, 240);
		glEnd();
		skorbord();
		ucak();
		glPushMatrix();
		heli1();
		glPopMatrix();
		glPushMatrix();
		heli2();
		glPopMatrix();
		glPushMatrix();
		heli3();
		glPopMatrix();
		glPushMatrix();
		heli4();
		glPopMatrix();
		glFlush();
	}
	else
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1.0, 0.0, 0.0);
		text("Hakkiniz Doldu. Enter'a basip bastan baslayin");
		glFlush();
	}
}

void specialkey(int key, int x, int y)
{
	switch (key) {
	case GLUT_KEY_UP:
		yr = yr + 10;
		glutPostRedisplay();
		cout << yr +x2<< endl;
		break;
	case GLUT_KEY_DOWN:
		if (yr > -x2 +10 )
			yr = yr - 10;
		cout << yr + x2 << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_LEFT:
		if (xr > -x1 )
			xr = xr - 10;
		cout << xr+x1 << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_RIGHT:
		if (xr + x1 <= 420)
			xr = xr + 10;
		cout << xr+x1 << endl;
		glutPostRedisplay();

		break;

	case GLUT_KEY_HOME:
		exit(0);
		break;
	}
}
void keyPressed(unsigned char key, int x, int y) 
{
	if (key == 13) 
	{
		if (hak == 0)
		{
			hak = 3;
			skor = 0;
		}
		
	}
	if (key == 27)
	{
		exit(0);
	}
}
void main(int a, char** b)
{
	glutInit(&a, b);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(200, 50);
	glutInitWindowSize(480, 640);
	glutCreateWindow("160313066 - Ali Kerem Muti");
	settings();
	glutDisplayFunc(Display);
	glutSpecialFunc(specialkey);
	glutKeyboardFunc(keyPressed);
	glutIdleFunc(hareket);
	glutMainLoop();
}

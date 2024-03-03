//Nama	: Maulida Aprillia Cinta Ariyatin
//NIM		: 24060122120029
//LAB		: C1
//Matkul	: GKV

#include <GL/glut.h>
#include <gl/gl.h> 
#include <math.h>

void roda(float radius, float x, float y){
	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= 360; i++) {
        float angle = i * 3.14159f / 180;
        float dx = radius * cosf(angle);
        float dy = radius * sinf(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

void Mobil() {
	glClear (GL_COLOR_BUFFER_BIT); 
	
	 //Jalan
    glPushMatrix();
    glBegin(GL_QUADS); 
    glColor4f(0.65f, 0.65f, 0.65f, 1.0f); //abu-abu tua
    glVertex3f(-1.0, 0.6, 0.0); 
    glVertex3f(-1.0, -0.4, 0.0);
    glVertex3f(1.0, -0.4, 0.0); 
    glVertex3f(1.0, 0.6, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, -0.35, 0.0); 
    glBegin(GL_QUADS);
	glColor4f(0.90f, 0.88f, 0.90f, 1.0f); //abu-abu
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.3, 0.0);
    glVertex3f(1.0, -0.3, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, 0.7, 0.0); 
    glBegin(GL_QUADS);
    glColor4f(0.90f, 0.88f, 0.90f, 1.0f); //abu-abu
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.1, 0.0);
    glVertex3f(1.0, -0.1, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix(); //kecil
    glTranslatef (0.0, 0.7, 0.0); 
    glBegin(GL_QUADS);
    glColor4f(0.78f, 0.77f, 0.78f, 1.0f); //abu-abu aga tua
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.02, 0.0);
    glVertex3f(1.0, -0.02, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix(); //kecil
    glTranslatef (0.0, 0.6, 0.0); 
    glBegin(GL_QUADS);
//    glScalef(0.5f, 0.3f, 1.0f);
    glColor4f(0.78f, 0.77f, 0.78f, 1.0f); //abu-abu aga tua
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.03, 0.0);
    glVertex3f(1.0, -0.03, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
        glPushMatrix(); //besar
    glTranslatef (0.0, -0.35, 0.0); 
    glBegin(GL_QUADS);
    glColor4f(0.78f, 0.77f, 0.78f, 1.0f); //abu-abu aga tua
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.05, 0.0);
    glVertex3f(1.0, -0.05, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix(); //besar
    glTranslatef (0.0, -0.6, 0.0); 
    glBegin(GL_QUADS);
    glColor4f(0.72f, 0.72f, 0.72f, 1.0f); //abu-abu aga lebih tua
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.15, 0.0);
    glVertex3f(1.0, -0.15, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix(); //latar
    glTranslatef (0.0, -0.75, 0.0); 
    glBegin(GL_QUADS);
    glColor4f(0.57f, 0.57f, 0.57f, 1.0f); // abu-abu lebih tua tua
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(-1.0, -0.25, 0.0);
    glVertex3f(1.0, -0.25, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
	glPushMatrix(); //tengah jalan garis putus2
    glTranslatef (0.0, 0.2, 0.0); 
	glLineWidth (10.0f); 
	glLineStipple(3,0x00ff);
	glEnable(GL_LINE_STIPPLE);
	glBegin(GL_LINES);
    glColor4f(0.91f, 0.91f, 0.91f, 1.0f); // abu cerah
    glVertex3f(-1.0, 0.0, 0.0); 
    glVertex3f(1.0, 0.0, 0.0);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
    glPopMatrix();
    
    
	glPushMatrix();
	//MOBIL 1
    // Badan mobil
    glPushMatrix();
    //glTranslatef(-0.5, -0.3, 0);
	glBegin(GL_QUADS); 
    glColor4f(0.99f, 0.91f, 0.31f, 1.0f); //kuning
    glVertex3f(-0.5, -0.2, 0.0); 
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.6, 0.1, 0.0); 
    glVertex3f(0.6, -0.2, 0.0);
    
    glVertex3f(-0.3, 0.1, 0.0); 
    glVertex3f(-0.1, 0.4, 0.0);
    glVertex3f(0.5, 0.4, 0.0); 
    glVertex3f(0.5, 0.1, 0.0);
    
    //kaca mobil
    glColor3f(0.89f, 0.86f, 0.86f); // Abu-abu Muda
    glVertex3f(-0.2, 0.1, 0.0); 
    glVertex3f(-0.1, 0.3, 0.0);
    glColor3f( 0.75f, 0.71f, 0.71f);
    glVertex3f(0.0, 0.3, 0.0); 
    glVertex3f(0.0, 0.1, 0.0);
    
    glVertex3f(0.1, 0.1, 0.0); 
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(0.2, 0.3, 0.0); 
    glVertex3f(0.2, 0.1, 0.0);
    
    glVertex3f(0.3, 0.1, 0.0); 
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0); 
    glVertex3f(0.4, 0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan mobil garis putih
    
    glPushMatrix();
    glLineWidth (2.0f); 
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.6, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glTranslatef (0.0, 0.0, 0.0); 
	glColor3f (1.0f, 0.78f, 0.34f); //orange 
    glVertex3f(-0.5, -0.17, 0.0);
    glVertex3f(0.6, -0.17, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu belakang
    glPushMatrix();
    glLineWidth (8.0f); 
    glBegin(GL_LINES);
    glColor3f(0.61f, 0.55f, 0.44f); //coklat tua
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, 0.05, 0.0); 
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.55, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    //bendera
    //tiang
    glPushMatrix();
    glLineWidth (8.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.4, 0.4, 0.0);
    glVertex3f(0.4, 0.6, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_QUADS); 
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(0.4, 0.5, 0.0);
    glVertex3f(0.4, 0.6, 0.0);
    glVertex3f(0.5, 0.6, 0.0);
    glVertex3f(0.5, 0.5, 0.0);
	glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth (16.0f); 
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    glVertex3f(0.4, 0.58, 0.0);
    glVertex3f(0.5, 0.58, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan atas mobil
    glPushMatrix();
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.1, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.2, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.35, 0.45, 0.0); 
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glEnd();
    glPopMatrix();
    
    //love
    glPushMatrix();
    glScalef(1.2f, 1.0f, 1.0f);
    glTranslatef (0.0, 0.08, 0.0); 
    glPushMatrix();
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    roda(0.03, 0.1, -0.06);
    
    glTranslatef (-0.04, 0.0, 0.0); 
    roda(0.03, 0.1, -0.06);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.03, -0.065, 0.0); 
    glBegin(GL_TRIANGLES);
	glColor3f(0.98f, 0.34f, 0.32f); //merah
	glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.05, -0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
    //ban belakang cadangan
    glPushMatrix();
    glTranslatef (0.01, 0.0, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu
    glPushMatrix();
    glTranslatef (0.0, 0.02, 0.0); 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.4, -0.1, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);
    
    glEnd();
    glPopMatrix();
    
    //Roda Mobil
    glPushMatrix();
    // roda kiri
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    roda(0.1, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.1, -0.3, -0.2);
    glPopMatrix();
    
    //roda kecil
    glPushMatrix();
    // roda kiri
    glColor4f (0.85f, 0.87f, 0.84f, 1.0f); 
    roda(0.05, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.05, -0.3, -0.2);
    glPopMatrix();
    
    glPopMatrix();
    
    ///////////////////////////////////////
    
    glPushMatrix();
    //MOBIL 2
    // Badan mobil
    glScalef(0.3f, 0.3f, 1.0f);
    glTranslatef (0.5, 2.0, 0.0); 
    glPushMatrix();
    //glTranslatef(-0.5, -0.3, 0);
	glBegin(GL_QUADS); 
    glColor4f(0.44f, 0.82f, 1.00f, 1.0f); //biru
    glVertex3f(-0.5, -0.2, 0.0); 
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.6, 0.1, 0.0); 
    glVertex3f(0.6, -0.2, 0.0);
    
    glVertex3f(-0.3, 0.1, 0.0); 
    glVertex3f(-0.1, 0.4, 0.0);
    glVertex3f(0.5, 0.4, 0.0); 
    glVertex3f(0.5, 0.1, 0.0);
    
    //kaca mobil
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.2, 0.1, 0.0); 
    glVertex3f(-0.1, 0.3, 0.0);
    glVertex3f(0.0, 0.3, 0.0); 
    glVertex3f(0.0, 0.1, 0.0);
    
    glVertex3f(0.1, 0.1, 0.0); 
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(0.2, 0.3, 0.0); 
    glVertex3f(0.2, 0.1, 0.0);
    
    glVertex3f(0.3, 0.1, 0.0); 
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0); 
    glVertex3f(0.4, 0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan mobil garis putih
    
    glPushMatrix();
    glLineWidth (2.0f); 
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.6, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glTranslatef (0.0, 0.0, 0.0); 
	glColor3f (0.16f, 0.59f, 0.79f); //biru tua 
    glVertex3f(-0.5, -0.17, 0.0);
    glVertex3f(0.6, -0.17, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu belakang
    glPushMatrix();
    glLineWidth (8.0f); 
    glBegin(GL_LINES);
    glColor3f(0.61f, 0.55f, 0.44f); //coklat tua
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, 0.05, 0.0); 
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.55, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan atas mobil
    glPushMatrix();
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.1, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.2, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.35, 0.45, 0.0); 
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glEnd();
    glPopMatrix();
    
    //love
    glPushMatrix();
    glScalef(1.2f, 1.0f, 1.0f);
    glTranslatef (0.0, 0.08, 0.0); 
    glPushMatrix();
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    roda(0.03, 0.1, -0.06);
    
    glTranslatef (-0.04, 0.0, 0.0); 
    roda(0.03, 0.1, -0.06);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.03, -0.065, 0.0); 
    glBegin(GL_TRIANGLES);
	glColor3f(0.98f, 0.34f, 0.32f); //merah
	glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.05, -0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
    //ban belakang cadangan
    glPushMatrix();
    glTranslatef (0.01, 0.0, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu
    glPushMatrix();
    glTranslatef (0.0, 0.02, 0.0); 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.4, -0.1, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);
    
    glEnd();
    glPopMatrix();
    
    //Roda Mobil
    glPushMatrix();
    // roda kiri
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    roda(0.1, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.1, -0.3, -0.2);
    glPopMatrix();
    
    //roda kecil
    glPushMatrix();
    // roda kiri
    glColor4f (0.85f, 0.87f, 0.84f, 1.0f); 
    roda(0.05, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.05, -0.3, -0.2);
    glPopMatrix();
    
    glPopMatrix();
    
    /////////////////////////////////
    
    glPushMatrix();
    //MOBIL 3
    // Badan mobil
    glScalef(0.4f, 0.4f, 1.0f);
    glTranslatef (-1.0, 1.2, 0.0); 
    glPushMatrix();
    //glTranslatef(-0.5, -0.3, 0);
	glBegin(GL_QUADS); 
    glColor4f(1.00f, 0.62f, 0.79f, 1.0f); //pink
    glVertex3f(-0.5, -0.2, 0.0); 
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.6, 0.1, 0.0); 
    glVertex3f(0.6, -0.2, 0.0);
    
    glVertex3f(-0.3, 0.1, 0.0); 
    glVertex3f(-0.1, 0.4, 0.0);
    glVertex3f(0.5, 0.4, 0.0); 
    glVertex3f(0.5, 0.1, 0.0);
    
    //kaca mobil
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.2, 0.1, 0.0); 
    glVertex3f(-0.1, 0.3, 0.0);
    //glColor3f( 0.75f, 0.71f, 0.71f);
    glVertex3f(0.0, 0.3, 0.0); 
    glVertex3f(0.0, 0.1, 0.0);
    
    glVertex3f(0.1, 0.1, 0.0); 
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(0.2, 0.3, 0.0); 
    glVertex3f(0.2, 0.1, 0.0);
    
    glVertex3f(0.3, 0.1, 0.0); 
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0); 
    glVertex3f(0.4, 0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan mobil garis putih
    
    glPushMatrix();
    glLineWidth (2.0f); 
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.6, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glTranslatef (0.0, 0.0, 0.0); 
	glColor3f (0.96f, 0.33f, 0.61f); //pink tua 
    glVertex3f(-0.5, -0.17, 0.0);
    glVertex3f(0.6, -0.17, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu belakang
    glPushMatrix();
    glLineWidth (8.0f); 
    glBegin(GL_LINES);
    glColor3f(0.61f, 0.55f, 0.44f); //coklat tua
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, 0.05, 0.0); 
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.55, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    
    //hiasan atas mobil
    glPushMatrix();
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.1, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.2, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.35, 0.45, 0.0); 
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(0.67f, 0.59f, 0.42f); //coklat
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glEnd();
    glPopMatrix();
    
    //love
    glPushMatrix();
    glScalef(1.2f, 1.0f, 1.0f);
    glTranslatef (0.0, 0.08, 0.0); 
    glPushMatrix();
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    roda(0.03, 0.1, -0.06);
    
    glTranslatef (-0.04, 0.0, 0.0); 
    roda(0.03, 0.1, -0.06);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.03, -0.065, 0.0); 
    glBegin(GL_TRIANGLES);
	glColor3f(0.98f, 0.34f, 0.32f); //merah
	glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.05, -0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
    //ban belakang cadangan
    glPushMatrix();
    glTranslatef (0.01, 0.0, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu
    glPushMatrix();
    glTranslatef (0.0, 0.02, 0.0); 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.4, -0.1, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);
    
    glEnd();
    glPopMatrix();
    
    //Roda Mobil
    glPushMatrix();
    // roda kiri
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    roda(0.1, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.1, -0.3, -0.2);
    glPopMatrix();
    
    //roda kecil
    glPushMatrix();
    // roda kiri
    glColor4f (0.85f, 0.87f, 0.84f, 1.0f); 
    roda(0.05, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.05, -0.3, -0.2);
    glPopMatrix();
    
    glPopMatrix();
    
    //////////////////////////////
    
    glPushMatrix();
    //MOBIL 4
    // Badan mobil
    glScalef(0.28f, 0.28f, 1.0f);
    glTranslatef (2.8, -0.50, 0.0); 
    glPushMatrix();
    //glTranslatef(-0.5, -0.3, 0);
	glBegin(GL_QUADS); 
    glColor4f(0.36f, 1.00f, 0.46f, 1.0f); //hijau
    glVertex3f(-0.5, -0.2, 0.0); 
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.6, 0.1, 0.0); 
    glVertex3f(0.6, -0.2, 0.0);
    
    glVertex3f(-0.3, 0.1, 0.0); 
    glVertex3f(-0.1, 0.4, 0.0);
    glVertex3f(0.5, 0.4, 0.0); 
    glVertex3f(0.5, 0.1, 0.0);
    
    //kaca mobil
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.2, 0.1, 0.0); 
    glVertex3f(-0.1, 0.3, 0.0);
    glVertex3f(0.0, 0.3, 0.0); 
    glVertex3f(0.0, 0.1, 0.0);
    
    glVertex3f(0.1, 0.1, 0.0); 
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(0.2, 0.3, 0.0); 
    glVertex3f(0.2, 0.1, 0.0);
    
    glVertex3f(0.3, 0.1, 0.0); 
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0); 
    glVertex3f(0.4, 0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan mobil garis putih
    glPushMatrix();
    glLineWidth (2.0f); 
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.6, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glTranslatef (0.0, 0.0, 0.0); 
	glColor3f (0.2f, 0.69f, 0.27f); //hijau tua 
    glVertex3f(-0.5, -0.17, 0.0);
    glVertex3f(0.6, -0.17, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu belakang
    glPushMatrix();
    glLineWidth (8.0f); 
    glBegin(GL_LINES);
    glColor3f(0.61f, 0.55f, 0.44f); //coklat tua
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, 0.05, 0.0); 
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.55, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan atas mobil
    glPushMatrix();
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.1, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.2, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.35, 0.45, 0.0); 
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glEnd();
    glPopMatrix();
    
    //love
    glPushMatrix();
    glScalef(1.2f, 1.0f, 1.0f);
    glTranslatef (0.0, 0.08, 0.0); 
    glPushMatrix();
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    roda(0.03, 0.1, -0.06);
    
    glTranslatef (-0.04, 0.0, 0.0); 
    roda(0.03, 0.1, -0.06);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.03, -0.065, 0.0); 
    glBegin(GL_TRIANGLES);
	glColor3f(0.98f, 0.34f, 0.32f); //merah
	glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.05, -0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
    //ban belakang cadangan
    glPushMatrix();
    glTranslatef (0.01, 0.0, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu
    glPushMatrix();
    glTranslatef (0.0, 0.02, 0.0); 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.4, -0.1, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);
    
    glEnd();
    glPopMatrix();
    
    //Roda Mobil
    glPushMatrix();
    // roda kiri
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    roda(0.1, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.1, -0.3, -0.2);
    glPopMatrix();
    
    //roda kecil
    glPushMatrix();
    // roda kiri
    glColor4f (0.85f, 0.87f, 0.84f, 1.0f); 
    roda(0.05, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.05, -0.3, -0.2);
    glPopMatrix();
    
    glPopMatrix();
    
    ///////////////////////////////
    glPushMatrix();
    //MOBIL 5
    // Badan mobil
    glScalef(0.28f, 0.28f, 1.0f);
    glTranslatef (-2.8, -0.50, 0.0); 
    glPushMatrix();
    //glTranslatef(-0.5, -0.3, 0);
	glBegin(GL_QUADS); 
    glColor4f(0.91f, 0.57f, 0.97f, 1.0f); //ungu
    glVertex3f(-0.5, -0.2, 0.0); 
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.6, 0.1, 0.0); 
    glVertex3f(0.6, -0.2, 0.0);
    
    glVertex3f(-0.3, 0.1, 0.0); 
    glVertex3f(-0.1, 0.4, 0.0);
    glVertex3f(0.5, 0.4, 0.0); 
    glVertex3f(0.5, 0.1, 0.0);
    
    //kaca mobil
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.2, 0.1, 0.0); 
    glVertex3f(-0.1, 0.3, 0.0);
    glVertex3f(0.0, 0.3, 0.0); 
    glVertex3f(0.0, 0.1, 0.0);
    
    glVertex3f(0.1, 0.1, 0.0); 
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(0.2, 0.3, 0.0); 
    glVertex3f(0.2, 0.1, 0.0);
    
    glVertex3f(0.3, 0.1, 0.0); 
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0); 
    glVertex3f(0.4, 0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan mobil garis putih
    
    glPushMatrix();
    glLineWidth (2.0f); 
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(0.6, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glTranslatef (0.0, 0.0, 0.0); 
	glColor3f (0.75f, 0.42f, 0.81f); //ungu tua 
    glVertex3f(-0.5, -0.17, 0.0);
    glVertex3f(0.6, -0.17, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu belakang
    glPushMatrix();
    glLineWidth (8.0f); 
    glBegin(GL_LINES);
    glColor3f(0.61f, 0.55f, 0.44f); //coklat tua
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.0, 0.05, 0.0); 
    glLineWidth (20.0f); 
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.55, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    //hiasan atas mobil
    glPushMatrix();
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.1, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.2, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.3, 0.0, 0.0); 
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.0, 0.45, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.35, 0.45, 0.0); 
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glLineWidth (4.0f); 
    glBegin(GL_LINES);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glEnd();
    glPopMatrix();
    
    //love
    glPushMatrix();
    glScalef(1.2f, 1.0f, 1.0f);
    glTranslatef (0.0, 0.08, 0.0); 
    glPushMatrix();
    glColor3f(0.98f, 0.34f, 0.32f); //merah
    roda(0.03, 0.1, -0.06);
    
    glTranslatef (-0.04, 0.0, 0.0); 
    roda(0.03, 0.1, -0.06);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef (0.03, -0.065, 0.0); 
    glBegin(GL_TRIANGLES);
	glColor3f(0.98f, 0.34f, 0.32f); //merah
	glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.05, -0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPopMatrix();
    
    //ban belakang cadangan
    glPushMatrix();
    glTranslatef (0.01, 0.0, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    glVertex3f(0.6, 0.0, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    glEnd();
    glPopMatrix();
    
    //lampu
    glPushMatrix();
    glTranslatef (0.0, 0.02, 0.0); 
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f); //putih
    glVertex3f(-0.5, 0.0, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.4, -0.1, 0.0);
    glVertex3f(-0.4, 0.0, 0.0);
    
    glEnd();
    glPopMatrix();
    
    //Roda Mobil
    glPushMatrix();
    // roda kiri
    glColor4f (0.06f, 0.06f, 0.05f, 1.0f); // Warna hitam
    roda(0.1, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.1, -0.3, -0.2);
    glPopMatrix();
    
    //roda kecil
    glPushMatrix();
    // roda kiri
    glColor4f (0.85f, 0.87f, 0.84f, 1.0f); 
    roda(0.05, -0.3, -0.2);
    // roda kanan
    glTranslatef (0.7, 0.0, 0.0); 
    roda(0.05, -0.3, -0.2);
    glPopMatrix();
    
    glPopMatrix();
    
    
    //Pohon
	glPushMatrix();
	
	glPushMatrix();
	glTranslatef (-0.7, 0.7, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor3f(0.58f, 0.49f, 0.44f); //coklat
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
	glTranslatef (-0.3, 0.7, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor3f(0.58f, 0.49f, 0.44f); //coklat
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
	glTranslatef (0.10, 0.7, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor3f(0.58f, 0.49f, 0.44f); //coklat
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
	glTranslatef (0.7, 0.7, 0.0); 
    glLineWidth (10.0f); 
    glBegin(GL_LINES);
    glColor3f(0.58f, 0.49f, 0.44f); //coklat
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
	
	glTranslatef (0.0, 0.05, 0.0); 
	glColor4f(0.40f, 0.72f, 0.32f, 1.0f); //hijau tua
    roda(0.07, -0.3, 0.8);
    
    glTranslatef (-0.4, 0.00, 0.0); 
	glColor4f(0.40f, 0.72f, 0.32f, 1.0f); //hijau tua
    roda(0.07, -0.3, 0.8);
    
    glTranslatef (0.8, 0.00, 0.0); 
	glColor4f(0.40f, 0.72f, 0.32f, 1.0f); //hijau tua
    roda(0.07, -0.3, 0.8);
    
    glTranslatef (0.6, 0.00, 0.0); 
	glColor4f(0.40f, 0.72f, 0.32f, 1.0f); //hijau tua
    roda(0.07, -0.3, 0.8);
    
	glPopMatrix();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 700);
    glutCreateWindow("Mobil 2D");
    glutDisplayFunc(Mobil);
    glClearColor (0.99f, 1.00f, 1.00f, 1.0f); //putih kebiruan
    glutMainLoop();

    return 0;
}


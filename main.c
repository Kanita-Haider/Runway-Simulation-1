#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

float r = 10.0;
float f = 70.0;
float t = 0.0005;
float t2 = 0.5;
float c = 90.0;
float c2 = 90.0;
float mp = 830;
float v = 880;
float posX= 20;

float r2 = 800.0;// vertical position
float f2 = 400.0; //horizontal

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 1000.0, 0.0, 500.0, -1.0, 1.0); // Left, Right, Bottom, Top, Near, Far
    // glOrtho(0.0, 100.0, 0.0, 50.0, -1.0, 1.0); // Left, Right, Bottom, Top, Near, Far
    //gluOrtho2D(0.0,300.0,0.0,300.0); // Left, Right, Bottom, Top, Near, Far
}
float rgb(float rgb)
{
    float x = rgb / 255;
    return floorf(x * 100) / 100;
}


void Draw()

{
    // moving objects-----------------
    if (r <= 1000)
    {
        r = r + 0.07;
        f = f + t;
        t = t + 0.000003;

        // r = r + 0.5;
        // f = f + t;
        // t = t + 0.0001;
        // p = p + 0.001;
    }
    else {
//r = -200;
       // f = 70;
      //  t = 0.0005;


    }
    if (c <= 1000)
    {
        // c = c + 0.1;
        c = c + 0.01;
    }
    else {
        c = -50;
    }
    if (c2 <= 1000)
    {
        // c2 = c2 + 0.1;
        c2 = c2 + 0.01;
    }
    else {
        c2 = -500;
    }
    if (mp >= -100)
    {
        // c2 = c2 + 0.1;
        mp = mp - 0.1;
    }
    else {
        mp = 2000;
    }
    if (v >= -100)
    {
        // c2 = c2 + 0.1;
        v = v - 0.02;
    }
    else {
        v = 2000;
    }

    // Check if the landing airplane has reached the ground
    if (f2 > 50 && f>80 ) {
       r2 -= 0.04;
    f2 -= 0.05;

    }
       else  r2 -= 0.03;
    /*if(r2>500){
        float r2 = 0.0;
float f2 = 400.0;
    }
*/

    glutPostRedisplay();

    // ===================================
    glClear(GL_COLOR_BUFFER_BIT);

    // drawing sky==================================================
    glBegin(GL_POLYGON);
    glColor3f(rgb(228), rgb(247), rgb(254));
    glVertex2i(0, 100);
    glVertex2i(1000, 100);

    glColor3f(rgb(47), rgb(199), rgb(236));
    glVertex2i(1000, 500);
    glVertex2i(0, 500);
    glEnd();
    // drawing building
    glBegin(GL_POLYGON);
    glColor3f(rgb(103), rgb(202), rgb(221));
    glVertex2i(800, 250);
    glVertex2i(850, 250);
    glVertex2i(850, 270);
    glVertex2i(800, 270);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(175), rgb(201), rgb(213));
    glVertex2i(800, 270);
    glVertex2i(850, 270);
    glVertex2i(850, 280);
    glVertex2i(800, 280);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(109), rgb(137), rgb(144));
    glVertex2i(550, 250);
    glVertex2i(870, 230);
    glVertex2i(870, 250);
    glVertex2i(550, 270);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(175), rgb(182), rgb(184));
    glVertex2i(650, 180);
    glVertex2i(850, 230);
    glVertex2i(550, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(211), rgb(157), rgb(61));
    glVertex2i(650, 220);
    glVertex2i(850, 220);
    glVertex2i(850, 230);
    glVertex2i(650, 230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(128), rgb(184), rgb(218));
    glVertex2i(650, 100);
    glVertex2i(850, 100);
    glVertex2i(850, 220);
    glVertex2i(650, 220);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(220), rgb(242), rgb(247));
    glVertex2i(670, 110);
    glVertex2i(740, 110);
    glVertex2i(740, 200);
    glVertex2i(670, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(220), rgb(242), rgb(247));
    glVertex2i(760, 110);
    glVertex2i(830, 110);
    glVertex2i(830, 200);
    glVertex2i(760, 200);
    glEnd();

    // glass window---------------------------------------
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(680, 120);
    glVertex2i(700, 120);
    glVertex2i(700, 130);
    glVertex2i(680, 130);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(680, 140);
    glVertex2i(700, 140);
    glVertex2i(700, 150);
    glVertex2i(680, 150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(680, 160);
    glVertex2i(700, 160);
    glVertex2i(700, 170);
    glVertex2i(680, 170);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(680, 180);
    glVertex2i(700, 180);
    glVertex2i(700, 190);
    glVertex2i(680, 190);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(710, 120);
    glVertex2i(730, 120);
    glVertex2i(730, 130);
    glVertex2i(710, 130);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(710, 140);
    glVertex2i(730, 140);
    glVertex2i(730, 150);
    glVertex2i(710, 150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(710, 160);
    glVertex2i(730, 160);
    glVertex2i(730, 170);
    glVertex2i(710, 170);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(710, 180);
    glVertex2i(730, 180);
    glVertex2i(730, 190);
    glVertex2i(710, 190);
    glEnd();

    // 2nd part glass window
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(770, 120);
    glVertex2i(790, 120);
    glVertex2i(790, 130);
    glVertex2i(770, 130);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(770, 140);
    glVertex2i(790, 140);
    glVertex2i(790, 150);
    glVertex2i(770, 150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(770, 160);
    glVertex2i(790, 160);
    glVertex2i(790, 170);
    glVertex2i(770, 170);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(770, 180);
    glVertex2i(790, 180);
    glVertex2i(790, 190);
    glVertex2i(770, 190);
    glEnd();
    // --------------
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(800, 120);
    glVertex2i(820, 120);
    glVertex2i(820, 130);
    glVertex2i(800, 130);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(800, 140);
    glVertex2i(820, 140);
    glVertex2i(820, 150);
    glVertex2i(800, 150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(800, 160);
    glVertex2i(820, 160);
    glVertex2i(820, 170);
    glVertex2i(800, 170);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(800, 180);
    glVertex2i(820, 180);
    glVertex2i(820, 190);
    glVertex2i(800, 190);
    glEnd();

    // signbord
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(570, 290);
    glVertex2i(680, 290);
    glVertex2i(680, 320);
    glVertex2i(570, 320);
    glEnd();
    // line
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(580, 290);
    glVertex2f(580, 270);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(670, 260);
    glVertex2f(670, 290);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(580, 310);
    glVertex2f(610, 310);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(620, 310);
    glVertex2f(640, 310);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(580, 300);
    glVertex2f(630, 300);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(640, 300);
    glVertex2f(660, 300);
    glEnd();
    // ------------
    glBegin(GL_POLYGON);
    glColor3f(rgb(144), rgb(199), rgb(219));
    glVertex2i(600, 100);
    glVertex2i(650, 100);
    glVertex2i(650, 110);
    glVertex2i(600, 110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(200), rgb(233), rgb(242));
    glVertex2i(610, 110);
    glVertex2i(620, 110);
    glColor3f(rgb(201), rgb(234), rgb(243));
    glVertex2i(600, 240);
    glVertex2i(580, 240);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(200), rgb(233), rgb(242));
    glVertex2i(630, 110);
    glVertex2i(640, 110);
    glColor3f(rgb(201), rgb(234), rgb(243));
    glVertex2i(640, 230);
    glVertex2i(620, 230);
    glEnd();

    // ==============mini signbord
    glBegin(GL_POLYGON);
    glColor3f(rgb(143), rgb(198), rgb(218));
    glVertex2i(510, 120);
    glVertex2i(550, 120);
    glVertex2i(550, 140);
    glVertex2i(510, 140);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(520, 100);
    glVertex2f(520, 120);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(540, 100);
    glVertex2f(540, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(238), rgb(154), rgb(32));
    glVertex2i(560, 140);
    glVertex2i(570, 140);
    glVertex2i(570, 170);
    glVertex2i(560, 170);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(570, 100);
    glVertex2f(570, 170);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(238), rgb(154), rgb(32));
    glVertex2i(860, 110);
    glVertex2i(870, 110);
    glVertex2i(870, 130);
    glVertex2i(860, 130);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(860, 130);
    glVertex2f(860, 100);
    glEnd();
    // =========================================
     // Drawing cloud-----------------------------------------


    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c, 400);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 20 * cosf(angle);
        float y = 20 * sinf(angle);
        glVertex2f(x + c, y + 400);
    }
    glEnd();


    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c + 30, 410);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 20 * cosf(angle);
        float y = 20 * sinf(angle);
        glVertex2f(x + c + 30, y + 410);
    }
    glEnd();

    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c + 60, 400);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 20 * cosf(angle);
        float y = 20 * sinf(angle);
        glVertex2f(x + c + 60, y + 400);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(c, 380);
    glVertex2i(c + 60, 380);
    glVertex2i(c + 60, 400);
    glVertex2i(c, 400);
    glEnd();

    // mini cloud-----------------------------------
    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2 + 530, 470);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 15 * cosf(angle);
        float y = 15 * sinf(angle);
        glVertex2f(x + c2 + 530, y + 470);
    }
    glEnd();
    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2 + 550, 470);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 15 * cosf(angle);
        float y = 15 * sinf(angle);
        glVertex2f(x + c2 + 550, y + 470);
    }
    glEnd();
    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2 + 540, 480);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 15 * cosf(angle);
        float y = 15 * sinf(angle);
        glVertex2f(x + c2 + 540, y + 480);
    }
    glEnd();
    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2 + 570, 470);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 15 * cosf(angle);
        float y = 15 * sinf(angle);
        glVertex2f(x + c2 + 570, y + 470);
    }
    glEnd();
    glColor3f(0.5f, 1.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(c2 + 560, 480);
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 15 * cosf(angle);
        float y = 15 * sinf(angle);
        glVertex2f(x + c2 + 560, y + 480);
    }
    glEnd();

    // ======================================
    // || mini Plane ||
    // ======================================
    // tail
    glBegin(GL_POLYGON);
    glColor3f(rgb(35), rgb(50), rgb(64));
    glVertex2i(mp + 70, 440);
    glVertex2i(mp + 100, 440);
    glVertex2i(mp + 100, 460);
    glVertex2i(mp + 90, 450);
    glVertex2i(mp + 80, 450);
    glVertex2i(mp + 80, 450);
    glEnd();
    // body
    glBegin(GL_POLYGON);
    glColor3f(rgb(65), rgb(86), rgb(111));
    glVertex2i(mp, 420);
    glVertex2i(mp + 80, 420);
    glVertex2i(mp + 100, 440);
    glVertex2i(mp + 30, 440);
    glVertex2i(mp + 30, 430);
    glVertex2i(mp + 10, 430);
    glEnd();
    // cokepit
    glBegin(GL_POLYGON);
    glColor3f(rgb(166), rgb(214), rgb(252));
    glVertex2i(mp + 20, 430);
    glVertex2i(mp + 30, 430);
    glVertex2i(mp + 30, 440);
    glEnd();
    // backline
    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(rgb(166), rgb(214), rgb(252));
    glVertex2f(mp + 80, 440);
    glVertex2f(mp + 110, 440);
    glEnd();
    // fan
    glBegin(GL_POLYGON);
    glColor3f(rgb(35), rgb(50), rgb(64));
    glVertex2i(mp + 40, 410);
    glVertex2i(mp + 60, 410);
    glVertex2i(mp + 70, 420);
    glVertex2i(mp + 60, 430);
    glVertex2i(mp + 40, 430);
    glEnd();






    // =====================================
    // drawing tower
    // =====================================
    glBegin(GL_POLYGON);
    glColor3f(rgb(92), rgb(141), rgb(148));
    glVertex2i(450, 100);
    glVertex2i(480, 100);
    glVertex2i(480, 240);
    glVertex2i(450, 240);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(rgb(92), rgb(141), rgb(148));
    glVertex2i(450, 100);
    glVertex2i(480, 100);
    glVertex2i(480, 240);
    glVertex2i(450, 240);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(101), rgb(203), rgb(224));
    glVertex2i(440, 240);
    glVertex2i(490, 240);
    glVertex2i(490, 250);
    glVertex2i(440, 250);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(173), rgb(184), rgb(186));
    glVertex2i(450, 250);
    glVertex2i(480, 250);
    glVertex2i(500, 290);
    glVertex2i(430, 290);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(241), rgb(161), rgb(36));
    glVertex2i(430, 290);
    glVertex2i(500, 290);
    glVertex2i(500, 310);
    glVertex2i(430, 310);
    glEnd();
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(440, 300);
    glVertex2f(490, 300);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(78), rgb(187), rgb(221));
    glVertex2i(430, 310);
    glVertex2i(500, 310);
    glVertex2i(480, 320);
    glVertex2i(450, 320);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(78), rgb(187), rgb(221));
    glVertex2i(450, 320);
    glVertex2i(480, 320);
    glVertex2i(480, 330);
    glVertex2i(450, 330);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(460, 380);
    glVertex2f(460, 410);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(470, 380);
    glVertex2f(470, 430);
    glEnd();
    // circle
    glColor3f(rgb(92), rgb(141), rgb(148));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(465, 360); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 20 * cosf(angle); // value ta radius
        float y = 20 * sinf(angle);  // value ta radius
        glVertex2f(x + 465, y + 360); // .. + circle er center position
    }
    glEnd();
    // mini circle

    glColor3f(rgb(92), rgb(141), rgb(148));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(470, 430); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + 470, y + 430); // .. + circle er center position
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(173), rgb(184), rgb(186));
    glVertex2i(450, 330);
    glVertex2i(480, 330);
    glVertex2i(490, 350);
    glVertex2i(440, 350);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(241), rgb(161), rgb(36));
    glVertex2i(440, 350);
    glVertex2i(490, 350);
    glVertex2i(490, 360);
    glVertex2i(440, 360);
    glEnd();

    // ================================
    // drawing runway
    // ================================
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(0, 50);
    glVertex2f(50, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(100, 50);
    glVertex2f(150, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(200, 50);
    glVertex2f(250, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(300, 50);
    glVertex2f(350, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(400, 50);
    glVertex2f(450, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(500, 50);
    glVertex2f(550, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(600, 50);
    glVertex2f(650, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(700, 50);
    glVertex2f(750, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(800, 50);
    glVertex2f(850, 50);
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(900, 50);
    glVertex2f(950, 50);
    glEnd();

    // ================================
    // drawing runway light
    // ================================
    glBegin(GL_POLYGON);
    glColor3f(rgb(255), rgb(236), rgb(39));
    glVertex2i(70, 100);
    glVertex2i(90, 100);
    glVertex2i(90, 110);
    glVertex2i(70, 110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(255), rgb(236), rgb(39));
    glVertex2i(170, 100);
    glVertex2i(190, 100);
    glVertex2i(190, 110);
    glVertex2i(170, 110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(255), rgb(236), rgb(39));
    glVertex2i(270, 100);
    glVertex2i(290, 100);
    glVertex2i(290, 110);
    glVertex2i(270, 110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(255), rgb(236), rgb(39));
    glVertex2i(370, 100);
    glVertex2i(390, 100);
    glVertex2i(390, 110);
    glVertex2i(370, 110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(255), rgb(236), rgb(39));
    glVertex2i(890, 100);
    glVertex2i(910, 100);
    glVertex2i(910, 110);
    glVertex2i(890, 110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(255), rgb(236), rgb(39));
    glVertex2i(950, 100);
    glVertex2i(970, 100);
    glVertex2i(970, 110);
    glVertex2i(950, 110);
    glEnd();
    // vehicle-----------------------------
    // ====================================
    // driver
    glBegin(GL_POLYGON);
    glColor3f(rgb(142), rgb(197), rgb(217));
    glVertex2i(v, 110);
    glVertex2i(v + 20, 110);
    glVertex2i(v + 20, 130);
    glEnd();
    // carback
    glBegin(GL_POLYGON);
    glColor3f(rgb(110), rgb(140), rgb(146));
    glVertex2i(v + 20, 110);
    glVertex2i(v + 40, 110);
    glVertex2i(v + 40, 120);
    glVertex2i(v + 20, 120);
    glEnd();
    // driver seat up
    glBegin(GL_POLYGON);
    glColor3f(rgb(213), rgb(158), rgb(61));
    glVertex2i(v, 130);
    glVertex2i(v + 20, 130);
    glVertex2i(v + 20, 140);
    glVertex2i(v, 140);
    glEnd();
    // car stear
    glBegin(GL_POLYGON);
    glColor3f(rgb(213), rgb(158), rgb(61));
    glVertex2i(v + 50, 110);
    glVertex2i(v + 60, 110);
    glVertex2i(v + 60, 120);
    glVertex2i(v + 50, 120);
    glVertex2i(v + 20, 140);
    glVertex2i(v + 20, 130);
    glEnd();
    // car wheel 1
    glColor3f(rgb(92), rgb(141), rgb(148));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(v + 10, 100); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + v + 10, y + 100); // .. + circle er center position
    }
    glEnd();
    // car wheel 2
    glColor3f(rgb(92), rgb(141), rgb(148));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(v + 40, 100); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + v + 40, y + 100); // .. + circle er center position
    }
    glEnd();



    // =========================================
    // || drawing airplane                    ||
    // =========================================

        // tail
    glBegin(GL_POLYGON);
    glColor3f(rgb(236), rgb(154), rgb(32));
    glVertex2i(r + 20, f + 50);
    glVertex2i(r + 40, f + 50);
    glVertex2i(r + 40, f + 60);
    glVertex2i(r + 20, f + 80);
    glVertex2i(r + 00, f + 80);
    glEnd();
    // body
    glBegin(GL_POLYGON);
    glColor3f(rgb(50), rgb(122), rgb(144));
    glVertex2i(r + 20, f + 30);
    glVertex2i(r + 210, f + 30);
    glVertex2i(r + 210, f + 40);
    glVertex2i(r + 200, f + 50);
    glVertex2i(r + 160, f + 50);
    glVertex2i(r + 160, f + 60);
    glVertex2i(r + 30, f + 60);
    glVertex2i(r, f + 50);
    glVertex2i(r, f + 40);
    glEnd();
    // cockepit
    glBegin(GL_POLYGON);
    glColor3f(rgb(88), rgb(204), rgb(255));
    glVertex2i(r + 160, f + 50);
    glVertex2i(r + 180, f + 50);
    glVertex2i(r + 170, f + 60);
    glVertex2i(r + 160, f + 60);
    glEnd();
    // window
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(r + 40, f + 50);
    glVertex2f(r + 50, f + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(r + 60, f + 50);
    glVertex2f(r + 70, f + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(r + 80, f + 50);
    glVertex2f(r + 90, f + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(r + 100, f + 50);
    glVertex2f(r + 110, f + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(r + 120, f + 50);
    glVertex2f(r + 130, f + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1, 1, 1);
    glVertex2f(r + 140, f + 50);
    glVertex2f(r + 150, f + 50);
    glEnd();
    // wing
    glBegin(GL_POLYGON);
    glColor3f(rgb(78), rgb(188), rgb(220));
    glVertex2i(r + 30, f + 20);
    glVertex2i(r + 120, f + 20);
    glVertex2i(r + 140, f + 40);
    glVertex2i(r + 40, f + 40);
    glVertex2i(r, f + 30);
    glEnd();
    // fan
    glBegin(GL_POLYGON);
    glColor3f(rgb(236), rgb(154), rgb(32));
    glVertex2i(r + 50, f + 10);
    glVertex2i(r + 70, f + 10);
    glVertex2i(r + 70, f + 30);
    glVertex2i(r + 50, f + 30);
    glVertex2i(r + 40, f + 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(rgb(236), rgb(154), rgb(32));
    glVertex2i(r + 90, f + 10);
    glVertex2i(r + 110, f + 10);
    glVertex2i(r + 110, f + 30);
    glVertex2i(r + 90, f + 30);
    glVertex2i(r + 80, f + 20);
    glEnd();

    //if(f<100){
    // wheel 1
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(r + 40, f + 20);
    glVertex2f(r + 40, f);
    glEnd();
    // mini circle
    glColor3f(rgb(236), rgb(154), rgb(32));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(r + 40, f); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + r + 40, y + f); // .. + circle er center position
    }
    glEnd();
    // wheel 2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(r + 140, f + 30);
    glVertex2f(r + 140, f);
    glEnd();
    // mini circle
    glColor3f(rgb(236), rgb(154), rgb(32));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(r + 140, f); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + r + 140, y + f); // .. + circle er center position
    }
    glEnd();
    // wheel 3
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(rgb(43), rgb(43), rgb(48));
    glVertex2f(180 + r, f + 30);
    glVertex2f(180 + r, f);
    glEnd();
    // mini circle
    glColor3f(rgb(236), rgb(154), rgb(32));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(180 + r, f); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + r + 180, y + f); // .. + circle er center position
    }
    glEnd();
   // }


/////////////////////
    // Landing Airplane
                ////////////////////////

    // cockepit
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2i(r2 - 160, f2 + 50);
    glVertex2i(r2 - 180, f2 + 50);
    glVertex2i(r2 - 170, f2 + 60);
    glVertex2i(r2 - 160, f2 + 60);
    glEnd();


    // body
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(r2 - 20, f2 + 30);
    glVertex2i(r2 - 210, f2 + 30);
    glVertex2i(r2 - 210, f2 + 40);
    glVertex2i(r2 - 200, f2 + 50);
    glVertex2i(r2 - 160, f2 + 50);
    glVertex2i(r2 - 160, f2 + 60);
    glVertex2i(r2 - 30, f2 + 60);
    glVertex2i(r2, f2 + 50);
    glVertex2i(r2, f2 + 40);
    glEnd();

    // window
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(r2 - 40, f2 + 50);
    glVertex2f(r2 - 50, f2 + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(r2 - 60, f2 + 50);
    glVertex2f(r2 - 70, f2 + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(r2 - 80, f2 + 50);
    glVertex2f(r2 - 90, f2 + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(r2 - 100, f2 + 50);
    glVertex2f(r2 - 110, f2 + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
   glColor3f(0, 0, 0);
    glVertex2f(r2 - 120, f2 + 50);
    glVertex2f(r2 - 130, f2 + 50);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
   glColor3f(0, 0, 0);
    glVertex2f(r2 - 140, f2 + 50);
    glVertex2f(r2 - 150, f2 + 50);
    glEnd();
    // wing
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex2i(r2 - 30, f2 + 20);
    glVertex2i(r2 - 120, f2 + 20);
    glVertex2i(r2 - 140, f2 + 40);
    glVertex2i(r2 - 40, f2 + 40);
    glVertex2i(r2, f2 + 30);
    glEnd();
    // fan
    glBegin(GL_POLYGON);
     glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2i(r2 - 50, f2 + 10);
    glVertex2i(r2 - 70, f2 + 10);
    glVertex2i(r2 - 70, f2 + 30);
    glVertex2i(r2 - 50, f2 + 30);
    glVertex2i(r2 - 40, f2 + 20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2i(r2 - 90, f2 + 10);
    glVertex2i(r2 - 110, f2 + 10);
    glVertex2i(r2 - 110, f2 + 30);
    glVertex2i(r2 - 90, f2 + 30);
    glVertex2i(r2 - 80, f2 + 20);
    glEnd();
    // wheel 1
    if(f2<=100){
    glLineWidth(5);
    glBegin(GL_LINES);
   // glColor3f(rgb(43), rgb(43), rgb(48));
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(r2 - 40, f2 + 20);
    glVertex2f(r2 - 40, f2);
    glEnd();
    }
      //  tail
    glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2i(r2 - 20, f2 + 50);
    glVertex2i(r2 - 40, f2 + 50);
    glVertex2i(r2 - 40, f2 + 60);
    glVertex2i(r2 - 20, f2 + 80);
    glVertex2i(r2 - 00, f2 + 80);
    glEnd();

    // mini circle
    if(f2<=100){
    glColor3f(rgb(236), rgb(154), rgb(32));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(r2 - 40, f2); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + r2 - 40, y + f2); // .. + circle er center position
    }
    glEnd();


    // wheel 2
    glLineWidth(5);
    glBegin(GL_LINES);
   // glColor3f(rgb(43), rgb(43), rgb(48));
   glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(r2 - 140, f2 + 30);
    glVertex2f(r2 - 140, f2);
    glEnd();
    // mini circle
    glColor3f(rgb(236), rgb(154), rgb(32));
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(r2 - 140, f2); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + r2 - 140, y + f2); // .. + circle er center position
    }
    glEnd();
    // wheel 3
    glLineWidth(5);
    glBegin(GL_LINES);
    //glColor3f(rgb(43), rgb(43), rgb(48));
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-180 + r2, f2 + 30);
    glVertex2f(-180 + r2, f2);
    glEnd();
    // mini circle
    glColor3f(rgb(236), rgb(154), rgb(32));
    //glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-180 + r2, f2); // circle er center position
    for (int i = 0; i <= 100; i++) {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = 5 * cosf(angle); // value ta radius
        float y = 5 * sinf(angle);  // value ta radius
        glVertex2f(x + r2 - 180, y + f2); // .. + circle er center position
    }



    glEnd();

    }




    glutSwapBuffers();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1400, 680);
    glutCreateWindow("Runway Simulation");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

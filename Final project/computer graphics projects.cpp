#include <graphics.h>
#include <iostream>
#include <cmath>
#include<math.h>
#include<dos.h>
using namespace std;

int main()
{

    int sh;


    cout << endl;
    cout << endl;
    cout << "  \t \t \t\t **********************" << endl;
    cout <<  "  \t \t \t \t Name: Arman khandaker" << endl;
    cout <<  "  \t \t \t \t ID  : CSE2001019124" << endl;
    cout << "  \t \t \t\t **********************" << endl << endl << endl;


    cout << "\t Press 01 : Our courses teacher name " << endl;
    cout << "\t Press 02 : Student Name "<< endl;
    cout << "\t Press 03 : Student ID "<< endl;
    cout << "\t Press 04 : Simple Red Emoji " << endl;
    cout << "\t Press 05 : our National Flag "<< endl;
    cout << "\t Press 06 : Smileing Emoji" << endl;
    cout << "\t Press 07 : Crying Emoji" << endl;
    cout << "\t Press 08 : DDA Line Algorithm " << endl;
    cout << "\t Press 09 : Bresenham's Algorithm "<< endl;
    cout << "\t Press 10 : Flying Airplane"  << endl;
    cout << "\t Press 11 : Digital Car Design"<< endl;
    cout << "\t Press 12 : National Football Stadium"<< endl;
    cout << "\t Press 13 : Emoji "<< endl;
    cout << "\t Press 14 :  "<< endl;
    cout << "\t Press 15 :  "<< endl;

    cout << endl;
    cout << endl;


    cout << "Enter a number between 1 and 15: ";
    cin >> sh;


    switch(sh)
    {

    case 1:
    {
        initwindow(900,600,"Arman Khandaker");


        for (int i=0; i<500; i++)
        {



            setcolor(YELLOW);
            // N
            line(20+i,300,20+i,200);
            line(20+i,200,70+i,300);
            line(70+i,300,70+i,200);

            // A
            line(80+i,300,120+i,200);
            line(120+i,200,160+i,300);
            line(98+i,255,141+i,255);

            // B
            line(170+i,300,170+i,200);

            ellipse(171+i,225,270,90,42,25);
            ellipse(171+i,275,270,90,42,25);

            // I
            line(250+i,300,250+i,200);
            line(220+i,200,285+i,200);
            line(220+i,300,285+i,300);

            // L
            line(310+i,300,310+i,200);
            line(310+i,300,380+i,300);
            line(380+i,300,380+i,280);

            // A

            line(400+i,300,440+i,200);
            line(440+i,200,480+i,300);
            line(418+i,255,462+i,255);

            setcolor(LIGHTMAGENTA);

            line(500-i,480,860,480);
            // A
            line(100+i,440,140+i,340);
            line(140+i,340,180+i,440);
            line(118+i,395,162+i,395);

            // N
            line(200+i,440,200+i,340);
            line(200+i,340,250+i,440);
            line(250+i,440,250+i,340);

            // W
            line(270+i,340,300+i,440);
            line(300+i,440,330+i,340);
            line(330+i,340,360+i,440);
            line(360+i,440,390+i,340);

            // A
            line(400+i,440,440+i,340);
            line(440+i,340,480+i,440);
            line(418+i,395,462+i,395);


//   line(170,300,170,200);
            // ellipse(171,225,270,90,42,25);

            // R
            line(500+i,440,500+i,340);
            ellipse(501+i,369,270,90,45,28);
            line(501+i,396,540+i,440);




            delay(20);
            cleardevice();

            setcolor(YELLOW);
            // N
            line(20+i,300,20+i,200);
            line(20+i,200,70+i,300);
            line(70+i,300,70+i,200);

            // A
            line(80+i,300,120+i,200);
            line(120+i,200,160+i,300);
            line(98+i,255,141+i,255);

            // B
            line(170+i,300,170+i,200);

            ellipse(171+i,225,270,90,42,25);
            ellipse(171+i,275,270,90,42,25);

            // I
            line(250+i,300,250+i,200);
            line(220+i,200,285+i,200);
            line(220+i,300,285+i,300);

            // L
            line(310+i,300,310+i,200);
            line(310+i,300,380+i,300);
            line(380+i,300,380+i,280);

            // A

            line(400+i,300,440+i,200);
            line(440+i,200,480+i,300);
            line(418+i,255,462+i,255);

            setcolor(LIGHTMAGENTA);

            line(500-i,480,860,480);
            // A
            line(100+i,440,140+i,340);
            line(140+i,340,180+i,440);
            line(118+i,395,162+i,395);

            // N
            line(200+i,440,200+i,340);
            line(200+i,340,250+i,440);
            line(250+i,440,250+i,340);

            // W
            line(270+i,340,300+i,440);
            line(300+i,440,330+i,340);
            line(330+i,340,360+i,440);
            line(360+i,440,390+i,340);

            // A
            line(400+i,440,440+i,340);
            line(440+i,340,480+i,440);
            line(418+i,395,462+i,395);


//   line(170,300,170,200);
            // ellipse(171,225,270,90,42,25);

            // R
            line(500+i,440,500+i,340);
            ellipse(501+i,369,270,90,45,28);
            line(501+i,396,540+i,440);



        }


        getch();
        return 0;

    }
    break;

    case 2:
    {

        initwindow(900,600);


        // A
        setcolor(YELLOW);
        line(10,180,50,70);
        line(50,70,90,180);
        line(28,130,72,130);

        // R
        setcolor(YELLOW);
        line(110,180,110,70);
        ellipse(110,100,270,90,50,30);
        line(110,130,155,180);

        // M
        setcolor(YELLOW);
        line(180,180,180,70);
        line(180,70,220,130);
        line(220,130,255,70);
        line(255,70,255,180);

        // A
        setcolor(YELLOW);
        line(280,180,320,70);
        line(320,70,360,180);
        line(299,130,341,130);

        // N
        setcolor(YELLOW);
        line(380,180,380,70);
        line(380,70,440,180);
        line(440,180,440,70);

        // K
        line(10,220,10,330);
        line(10,275,55,220);
        line(10,275,55,330);
        //H
        line(80,220,80,330);
        line(130,220,130,330);
        line(80,275,130,275);
        //A
        line(160,330,200,220);
        line(200,220,240,330);
        line(180,275,220,275);
        // D
        line(260,220,260,330);
        ellipse(260,275,270,90,50,55);
        // A
        line(330,330,370,220);
        line(370,220,410,330);
        line(350,275,390,275);
        //k
        line(440,330,440,220);
        line(440,275,490,220);
        line(440,275,490,330);
        //E
        line(520,330,520,220);
        line(520,330,580,330);
        line(520,220,580,220);
        line(520,275,560,275);
        //R
        line(610,330,610,220);
        ellipse(610,250,270,90,50,30);
        line(610,280,660,330);

        //____________
        line(5,350,700,350);


        getch();

    }
    break;


    case 3:
    {
        int gd = DETECT, gm ;
        initgraph ( &gd,&gm,"");

        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);

        getch();
        closegraph;


    }
    break;


    case 4:
    {
        int gd=0,gm;
        initgraph(&gd,&gm,"");



        setcolor(WHITE);
        circle(275,285,150);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(274,284,WHITE);

        setcolor(YELLOW);
        ellipse(200,250,0,360,50,50);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(210,249,YELLOW);

        setcolor(BLACK);
        circle(200,250,20);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(210,249,BLACK);

        setcolor(YELLOW);
        ellipse(350,250,0,360,50,50);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(360,249,YELLOW);


        setcolor(BLACK );
        circle(350,250,20);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(350,249,BLACK);

        setcolor(YELLOW);
        ellipse(275,350,180,360,70,40);
        ellipse(274,349,180,360,70,40);
        ellipse(273,348,180,360,70,40);
        ellipse(272,347,180,360,70,40);
        ellipse(271,346,180,360,70,40);


        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);
        getch();
        closegraph();


    }
    break;


    case 5:
    {

        initwindow(900,600);
        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);


        setcolor(2);

        setfillstyle(SOLID_FILL,GREEN);
        bar(201,221,400,330);

        setfillstyle(SOLID_FILL,LIGHTCYAN);
        bar(195,220,200,550);


        setfillstyle(SOLID_FILL,GREEN);
        bar(160,551,235,560);


        setcolor(WHITE);
        setfillstyle(SOLID_FILL,RED);
        circle(300,280,32);
        floodfill(300,280,WHITE);

        getch();
        closegraph();
    }
    break;


    case 6:
    {


        int gd=0,gm;
        initgraph(&gd,&gm,"Arman khandaker");

        setcolor(WHITE);
        circle(300,300,160);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(274,284,WHITE);

        setcolor(WHITE);
        circle(301,300,161);
        circle(302,300,162);
        circle(303,300,163);
        circle(304,300,164);
        circle(305,300,165);


        setcolor(BLACK);
        circle(240,260,45);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(230,260,BLACK);



        setcolor(BLACK);
        circle(240,260,45);
        circle(240,260,46);
        circle(240,260,47);


        setcolor(BLACK);
        circle(240,265,22);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(239,280,BLACK);


        setcolor(BLACK);
        circle(360,260,45);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(360,260,BLACK);

        setcolor(BLACK);
        circle(360,260,45);
        circle(360,260,46);
        circle(360,260,47);

        setcolor(BLACK);
        circle(362,265,22);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(360,270,BLACK);


        setcolor(BLACK);
        ellipse(300,370,180,360,70,40);
        ellipse(300,370,180,360,69,39);
        ellipse(300,370,180,360,68,38);
        ellipse(300,370,180,360,67,37);
        ellipse(300,370,180,360,66,36);

        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);

        getch();
        closegraph();
    }
    break;


    case 7:
    {
        initwindow(700,600,"Arman");

        for (int i=0; i<500; i++)
        {

            setcolor(YELLOW);

            line(30,20,30,70);
            line(31,20,31,70);
            line(32,20,32,70);

            line(10,20,50,20);
            line(10,19,50,19);
            line(10,18,50,18);

            line(10,70,50,70);
            line(10,71,50,71);
            line(10,72,50,72);

            line(60,17,60,73);
            line(61,17,61,73);
            line(62,17,62,73);

            ellipse(61,45,270,90,38,29);
            ellipse(61,45,270,90,37,28);
            ellipse(61,45,270,90,36,27);

            setcolor(WHITE);
            circle(120,30,8);
            setfillstyle(SOLID_FILL,RED);
            floodfill(120,30,WHITE);

            setcolor(WHITE);
            circle(120,60,8);
            setfillstyle(SOLID_FILL,RED);
            floodfill(120,60,WHITE);

            // 9
            line(165,20,200,20);
            line(165,21,200,21);
            line(165,22,200,22);

            line(200,22,200,73);
            line(199,22,199,73);
            line(198,22,198,73);

            line(165,22,165,48);
            line(166,22,166,48);
            line(167,22,167,48);

            line(167,48,198,48);
            line(167,47,198,47);
            line(167,46,198,46);

            line(198,73,167,73);
            line(198,72,167,72);
            line(198,71,167,71);

            // 1
            line(220,20,220,75);
            line(221,20,221,75);
            line(222,20,222,75);


            // 2
            line(240,20,280,20);
            line(240,21,280,21);
            line(240,22,280,22);

            line(280,20,280,48);
            line(279,20,279,48);
            line(278,20,278,48);


            line(280,48,240,48);
            line(280,49,240,49);
            line(280,50,240,50);

            line(240,50,240,75);
            line(241,50,241,75);
            line(242,50,242,75);

            line(242,75,280,75);
            line(242,74,280,74);
            line(242,73,280,73);

            // 4
            line(300,20,300,48);
            line(301,20,301,48);
            line(302,20,302,48);

            line(302,48,335,48);
            line(302,47,335,47);
            line(302,46,335,46);

            line(335,20,335,75);
            line(336,20,336,75);
            line(337,20,337,75);

            // 1st crying
            setcolor(BLACK);
            ellipse(240,290+i,0,360,4,10);
            ellipse(240,290+i,0,360,3,10);

            ellipse(240,320+i,0,360,4,10);
            ellipse(240,320+i,0,360,3,10);

            ellipse(240,350+i,0,360,4,10);
            ellipse(240,350+i,0,360,3,10);

            ellipse(240,380+i,0,360,4,10);
            ellipse(240,380+i,0,360,3,10);

            // 2nd crying
            setcolor(BLACK);
            ellipse(360,290+i,0,360,4,10);
            ellipse(360,290+i,0,360,3,10);
            ellipse(360,320+i,0,360,4,10);
            ellipse(360,320+i,0,360,3,10);
            ellipse(360,350+i,0,360,4,10);
            ellipse(360,350+i,0,360,3,10);
            ellipse(360,380+i,0,360,4,10);
            ellipse(360,380+i,0,360,3,10);


            delay(30);
            cleardevice();


            setcolor(WHITE);
            circle(300,300,160);
            setfillstyle(SOLID_FILL,YELLOW);
            floodfill(274,284,WHITE);


            setcolor(WHITE);
            circle(301,301,161);
            circle(302,302,162);
            circle(303,303,163);
            circle(304,304,164);

            //1st eye
            setcolor(BLACK);
            circle(240,260,45);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(230,260,BLACK);

            setcolor(BLACK);
            circle(240,260,45);
            circle(240,260,46);
            circle(240,260,47);

            setcolor(BLACK);
            ellipse(240,280,0,360,20,25);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(240,280,BLACK);

            // 2nd eye
            setcolor(BLACK);
            circle(360,260,45);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(330,260,BLACK);


            setcolor(BLACK);
            circle(360,260,45);
            circle(360,260,46);
            circle(360,260,47);

            setcolor(BLACK);
            ellipse(360,280,0,360,20,25);
            setfillstyle(SOLID_FILL,BLACK);
            floodfill(360,260,BLACK);

            //lips
            setcolor(BLACK);
            ellipse(300,390,0,180,70,40);
            ellipse(300,390,0,180,69,39);
            ellipse(300,390,0,180,68,38);
            ellipse(300,390,0,180,67,37);
            ellipse(300,390,0,180,66,36);


        }

        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);
        getch();
        return 0;
    }
    break;


    case 8:
    {


        float x,y,x1,y1,x2,y2,dx,dy,step;



        int i,gd=DETECT,gm;

        initgraph(&gd,&gm,"");



        cout<<"Enter the value of x1 & y1: ";

        cin>>x1>>y1;

        cout<<"Enter the value of x2 & y2: ";

        cin>>x2>>y2;



        dx=abs(x2-x1);

        dy=abs(y2-y1);



        if(dx>=dy)

            step=dx;

        else

            step=dy;



        dx=dx/step;

        dy=dy/step;



        x=x1;

        y=y1;

        i=1;



        while(i<=step)

        {

            putpixel(x,y,WHITE);

            x=x+dx;

            y=y+dy;

            i=i+1;

            delay(5);

        }



        getch();

        closegraph();

        return 0;

    }
    break;


    case 9:
    {

        float x,y,x1,y1,x2,y2,dx,dy,p;



        int i,gd=DETECT,gm;

        initgraph(&gd,&gm,"");

        initwindow(800,600,"Bresenham's");



        cout<<"Enter the value of x1 & y1: ";

        cin>>x1>>y1;

        cout<<"Enter the value of x2 & y2: ";

        cin>>x2>>y2;



        dx=abs(x2-x1);

        dy=abs(y2-y1);



        x=x1;

        y=y1;



        p=2*dy-dx;



        while(x<=x2)

        {

            if(p>=0)

            {

                putpixel(x,y,WHITE);

                y=y+1;

                p=p+2*dy-2*dx;

            }

            else

            {

                putpixel(x,y,WHITE);

                p=p+2*dy;

            }

            x=x+1;

            delay(100);

        }



        getch();

        closegraph();



        return 0;




    }
    break;


    case 10:
    {

        initwindow(800,450);

        for (int i=0; i<300; i++)
        {


            setcolor(YELLOW);

            line(30,20,30,70);
            line(31,20,31,70);
            line(32,20,32,70);

            line(10,20,50,20);
            line(10,19,50,19);
            line(10,18,50,18);

            line(10,70,50,70);
            line(10,71,50,71);
            line(10,72,50,72);

            line(60,17,60,73);
            line(61,17,61,73);
            line(62,17,62,73);

            ellipse(61,45,270,90,38,29);
            ellipse(61,45,270,90,37,28);
            ellipse(61,45,270,90,36,27);

            setcolor(WHITE);
            circle(120,30,8);
            setfillstyle(SOLID_FILL,RED);
            floodfill(120,30,WHITE);

            setcolor(WHITE);
            circle(120,60,8);
            setfillstyle(SOLID_FILL,RED);
            floodfill(120,60,WHITE);

            // 9
            line(165,20,200,20);
            line(165,21,200,21);
            line(165,22,200,22);

            line(200,22,200,73);
            line(199,22,199,73);
            line(198,22,198,73);

            line(165,22,165,48);
            line(166,22,166,48);
            line(167,22,167,48);

            line(167,48,198,48);
            line(167,47,198,47);
            line(167,46,198,46);

            line(198,73,167,73);
            line(198,72,167,72);
            line(198,71,167,71);

            // 1
            line(220,20,220,75);
            line(221,20,221,75);
            line(222,20,222,75);


            // 2
            line(240,20,280,20);
            line(240,21,280,21);
            line(240,22,280,22);

            line(280,20,280,48);
            line(279,20,279,48);
            line(278,20,278,48);


            line(280,48,240,48);
            line(280,49,240,49);
            line(280,50,240,50);

            line(240,50,240,75);
            line(241,50,241,75);
            line(242,50,242,75);

            line(242,75,280,75);
            line(242,74,280,74);
            line(242,73,280,73);

            // 4
            line(300,20,300,48);
            line(301,20,301,48);
            line(302,20,302,48);

            line(302,48,335,48);
            line(302,47,335,47);
            line(302,46,335,46);

            line(335,20,335,75);
            line(336,20,336,75);
            line(337,20,337,75);
            setcolor(YELLOW);





            // airplan
            line(145+i,220, 475+i,175);
            arc(470+i,205,20,90,30);
            ellipse(500+i,210, 270,95,15,15);
            line(200+i,260,265+i,250);
            line(350+i,240,500+i,225);
            line(350+i,240,200+i,375);
            line(200+i,375,175+i,380);
            line(175+i,380,270+i,270);
            line(270+i,270,270+i,260);
            line(270+i,260,260+i,240);
            line(260+i,240,340+i,230);
            line(340+i,230,350+i,240);
            line(340+i,230,195+i,375);
            /**********/
            line(200+i,260,100+i,250);
            line(100+i,250,100+i,230);
            line(100+i,230,110+i,220);
            /****/
            line(110+i,225,90+i,150);
            line(90+i,150,110+i,150);
            line(110+i,150,150+i,225);
            line(150+i,225,110+i,225);
            line(95+i,170,105+i,170);
            line(105+i,170,130+i,225);





            delay(4);
            cleardevice();



        }



        // A
        setcolor(YELLOW);
        line(10,180,50,70);
        line(50,70,90,180);
        line(28,130,72,130);

        // R
        setcolor(YELLOW);
        line(110,180,110,70);
        ellipse(110,100,270,90,50,30);
        line(110,130,155,180);

        // M
        setcolor(YELLOW);
        line(180,180,180,70);
        line(180,70,220,130);
        line(220,130,255,70);
        line(255,70,255,180);

        // A
        setcolor(YELLOW);
        line(280,180,320,70);
        line(320,70,360,180);
        line(299,130,341,130);

        // N
        setcolor(YELLOW);
        line(380,180,380,70);
        line(380,70,440,180);
        line(440,180,440,70);

        // K
        line(10,220,10,330);
        line(10,275,55,220);
        line(10,275,55,330);
        //H
        line(80,220,80,330);
        line(130,220,130,330);
        line(80,275,130,275);
        //A
        line(160,330,200,220);
        line(200,220,240,330);
        line(180,275,220,275);
        // D
        line(260,220,260,330);
        ellipse(260,275,270,90,50,55);
        // A
        line(330,330,370,220);
        line(370,220,410,330);
        line(350,275,390,275);
        //k
        line(440,330,440,220);
        line(440,275,490,220);
        line(440,275,490,330);
        //E
        line(520,330,520,220);
        line(520,330,580,330);
        line(520,220,580,220);
        line(520,275,560,275);
        //R
        line(610,330,610,220);
        ellipse(610,250,270,90,50,30);
        line(610,280,660,330);

        //____________
        line(5,350,700,350);
        getch();
        return 0;
    }
    break;


    case 11:
    {

        initwindow(900,600,"Arman");

        for (int i=0; i<500; i++)
        {



            setcolor(YELLOW);
            // star
            line(100,85,80,140);
            line(100,85,120,140);
            line(20,140,80,140);
            line(120,140,180,140);
            line(60,175,20,140);
            line(60,175,45,230);
            line(45,230,100,190);
            line(155,230,100,190);
            line(155,230,140,175);
            line(140,175,180,140);


            setcolor(YELLOW);
            circle(110+i,370,17);
            circle(110+i,370,16);
            circle(110+i,370,6);
            circle(110+i,370,3);

            circle(240+i,370,17);
            circle(240+i,370,16);
            circle(240+i,370,6);
            circle(240+i,370,3);



            setcolor(WHITENESS);
            line(50+i,370,90+i,370);
            line(50+i,371,90+i,371);
            line(50+i,372,90+i,372);
            arc(110+i,370,0,180,20);

            line(130+i,370,220+i,370);
            line(130+i,371,220+i,371);
            line(130+i,372,220+i,372);
            arc(240+i,370,0,180,20);

            line(260+i,370,300+i,370);
            line(260+i,371,300+i,371);
            line(260+i,372,300+i,372);

            line(300+i,370,300+i,350);
            line(301+i,371,301+i,351);
            line(302+i,372,302+i,352);

            line(300+i,350,240+i,330);
            line(301+i,351,241+i,331);
            line(302+i,352,242+i,332);

            line(240+i,330,200+i,300);
            line(241+i,331,201+i,301);
            line(242+i,332,202+i,302);
            line(243+i,333,203+i,303);

            line(200+i,300,110+i,300);
            line(200+i,301,110+i,301);
            line(200+i,302,110+i,302);

            line(110+i,300,80+i,330);
            line(111+i,301,81+i,331);

            line(80+i,330,50+i,340);
            line(81+i,331,51+i,341);
            line(82+i,332,52+i,342);

            line(50+i,340,50+i,370);
            line(51+i,340,51+i,370);
            line(52+i,340,52+i,370);


            // CAR Windows
            line(235+i,330,85+i,330);
            line(235+i,331,85+i,331);
            line(235+i,332,85+i,332);


            setcolor(LIGHTGREEN);


            ellipse(310,150,120,0,80,60);
            ellipse(490,160,160,290,80,60);
            ellipse(0+i,230-i,120,0,80,60);
            setcolor(LIGHTRED);
            ellipse(230+i,190-i,120,0,80,60);
            setcolor(LIGHTBLUE);


            ellipse(310+i,210,120,0,80,60);
            ellipse(400+i,60,120,290,80,60);
            setcolor(YELLOW);
            ellipse(550+i,90,180,30,80,60);
            // Wheels
            setcolor(LIGHTCYAN);
            circle(110+i,370,17);
            setfillstyle(HATCH_FILL,YELLOW);
            floodfill(110+i,370,LIGHTCYAN);

            ellipse(110+i,130,120,0,80,60);




            circle(110+i,371,17);
            circle(110+i,372,17);

            circle(240+i,370,17);
            setfillstyle(HATCH_FILL,YELLOW);
            floodfill(240+i,370,LIGHTCYAN);
            circle(240+i,371,17);
            circle(240+i,372,17);

            setcolor(LIGHTRED);
            line(0,390,850,390);
            line(0,391,851,391);
            line(0,392,852,392);

            setcolor(LIGHTMAGENTA);
            line(800,390,800,210);
            line(801,390,801,210);
            line(802,390,802,210);


            delay(5);
            cleardevice();




        }
        //id

        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);




        // A
        setcolor(YELLOW);
        line(10,180,50,70);
        line(50,70,90,180);
        line(28,130,72,130);

        // R
        setcolor(YELLOW);
        line(110,180,110,70);
        ellipse(110,100,270,90,50,30);
        line(110,130,155,180);

        // M
        setcolor(YELLOW);
        line(180,180,180,70);
        line(180,70,220,130);
        line(220,130,255,70);
        line(255,70,255,180);

        // A
        setcolor(YELLOW);
        line(280,180,320,70);
        line(320,70,360,180);
        line(299,130,341,130);

        // N
        setcolor(YELLOW);
        line(380,180,380,70);
        line(380,70,440,180);
        line(440,180,440,70);

        // K
        line(10,220,10,330);
        line(10,275,55,220);
        line(10,275,55,330);
        //H
        line(80,220,80,330);
        line(130,220,130,330);
        line(80,275,130,275);
        //A
        line(160,330,200,220);
        line(200,220,240,330);
        line(180,275,220,275);
        // D
        line(260,220,260,330);
        ellipse(260,275,270,90,50,55);
        // A
        line(330,330,370,220);
        line(370,220,410,330);
        line(350,275,390,275);
        //k
        line(440,330,440,220);
        line(440,275,490,220);
        line(440,275,490,330);
        //E
        line(520,330,520,220);
        line(520,330,580,330);
        line(520,220,580,220);
        line(520,275,560,275);
        //R
        line(610,330,610,220);
        ellipse(610,250,270,90,50,30);
        line(610,280,660,330);

        //____________
        line(5,350,700,350);



        getch();
        return 0;
    }
    break;


    case 12:
    {
        initwindow(1300,700,"Arman");


        setfillstyle(SOLID_FILL,GREEN);
        bar(0,0,1299,699);

        setfillstyle(SOLID_FILL,LIGHTGREEN);
        bar(60,40,1240,660);

        // bordre
        setcolor(WHITE);
        rectangle(60,40,1240,660);
        rectangle(59,39,1241,661);
        rectangle(58,38,1242,662);
        rectangle(57,37,1243,663);
        rectangle(56,36,1244,664);

        //centerborder
        rectangle(650,40,650,660);
        rectangle(651,40,651,660);
        rectangle(649,40,649,660);
        rectangle(652,40,652,660);

        // Center circle
        circle(650,350,110);
        circle(650,350,111);
        circle(650,350,112);

        //border

        setfillstyle(SOLID_FILL,GREEN);
        bar(160,41,272,660);

        bar(378,41,484,660);

        bar(802,41,908,660);

        bar(1014,41,1120,660);

        //goalbar left
        setcolor(WHITE);
        rectangle(60,320,80,380);
        rectangle(59,321,79,379);
        rectangle(58,321,78,378);
        rectangle(57,323,77,377);

        setfillstyle(SOLID_FILL,WHITE);
        bar(43,320,60,380);

        //goalbar right
        setcolor(WHITE);
        rectangle(1220,320,1240,380);
        rectangle(1221,319,1239,379);
        rectangle(1222,318,1238,378);
        rectangle(1222,317,1237,377);


        setfillstyle(SOLID_FILL,WHITE);
        bar(1240,320,1257,380);

        //freekick area left
        rectangle(60,250,130,450);
        rectangle(59,251,129,449);
        rectangle(58,252,128,448);
        rectangle(57,253,127,447);

        //freekick area right
        rectangle(1170,250,1240,450);
        rectangle(1171,249,1240,449);
        rectangle(1172,248,1240,448);
        rectangle(1173,247,1240,447);

        // football
        setcolor(BLACK);
        circle(490,200,25);

        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(480,200,BLACK);
        setcolor(BLACK);
        circle(490,200,26);
        circle(490,200,27);

        circle(490,200,20);
        circle(490,200,18);
        circle(490,200,15);
        circle(490,200,14);
        circle(490,200,10);
        circle(490,200,8);
        circle(490,200,4);

        getch();
    }
    break;


    case 13:
    {

        initwindow(700,600,"Arman khandaker");

        setcolor(RED);
        circle(400,310,150);
        setfillstyle(1,YELLOW);
        floodfill(430,315,RED);

        setcolor(LIGHTGREEN);
        circle(400,310,151);
        circle(400,310,152);
        circle(400,310,153);
        circle(400,310,154);


        setcolor(WHITE);
        circle(350,260,40);
        setfillstyle(1,WHITE);
        floodfill(351,261,WHITE);


        setcolor(BLUE);
        circle(350,260,15);
        setfillstyle(1,BLUE);
        floodfill(351,261,BLUE);

        setcolor(WHITE);
        circle(450,260,40);
        setfillstyle(1,WHITE);
        floodfill(450,260,WHITE);


        setcolor(BLUE);
        circle(450,260,15);
        setfillstyle(1,BLUE);
        floodfill(451,261,BLUE);

        setcolor(BLUE);
        line(400,310,420,330);
        line(400,310,380,330);
        line(380,330,420,330);
        setfillstyle(1,BLUE);
        floodfill(400,315,BLUE);

        setcolor(BLUE);
        ellipse(400,350,180,360,60,40);
        ellipse(400,351,180,360,60,40);
        ellipse(400,352,180,360,60,40);
        ellipse(400,353,180,360,60,40);
        ellipse(400,354,180,360,60,40);
        ellipse(400,355,180,360,60,40);
        ellipse(400,356,180,360,60,40);
        ellipse(400,357,180,360,60,40);
        setfillstyle(1,BLUE);



        setcolor(YELLOW);

        line(30,20,30,70);
        line(31,20,31,70);
        line(32,20,32,70);

        line(10,20,50,20);
        line(10,19,50,19);
        line(10,18,50,18);

        line(10,70,50,70);
        line(10,71,50,71);
        line(10,72,50,72);

        line(60,17,60,73);
        line(61,17,61,73);
        line(62,17,62,73);

        ellipse(61,45,270,90,38,29);
        ellipse(61,45,270,90,37,28);
        ellipse(61,45,270,90,36,27);

        setcolor(WHITE);
        circle(120,30,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,30,WHITE);

        setcolor(WHITE);
        circle(120,60,8);
        setfillstyle(SOLID_FILL,RED);
        floodfill(120,60,WHITE);

        // 9
        line(165,20,200,20);
        line(165,21,200,21);
        line(165,22,200,22);

        line(200,22,200,73);
        line(199,22,199,73);
        line(198,22,198,73);

        line(165,22,165,48);
        line(166,22,166,48);
        line(167,22,167,48);

        line(167,48,198,48);
        line(167,47,198,47);
        line(167,46,198,46);

        line(198,73,167,73);
        line(198,72,167,72);
        line(198,71,167,71);

        // 1
        line(220,20,220,75);
        line(221,20,221,75);
        line(222,20,222,75);


        // 2
        line(240,20,280,20);
        line(240,21,280,21);
        line(240,22,280,22);

        line(280,20,280,48);
        line(279,20,279,48);
        line(278,20,278,48);


        line(280,48,240,48);
        line(280,49,240,49);
        line(280,50,240,50);

        line(240,50,240,75);
        line(241,50,241,75);
        line(242,50,242,75);

        line(242,75,280,75);
        line(242,74,280,74);
        line(242,73,280,73);

        // 4
        line(300,20,300,48);
        line(301,20,301,48);
        line(302,20,302,48);

        line(302,48,335,48);
        line(302,47,335,47);
        line(302,46,335,46);

        line(335,20,335,75);
        line(336,20,336,75);
        line(337,20,337,75);


        getch();
        closegraph();
    }
    break;


    case 14:
    {

    }
    break;


    case 15:
    {

    }
    break;



    }
    return 0;



}



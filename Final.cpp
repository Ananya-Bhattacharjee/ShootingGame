# include "iGraphics.h"
#include<stdlib.h>
#include<math.h>
int c=0,y=800,xx=0,w=70,a=0,s=0,r=50,life=3,score=0,m,q=xx+50,level=1,i,j,sp=0,flag=0,draw=1,ball=0,space=0,xg,yg,g=0,lf=0,gameflag=1;
char str[100];
int x=rand()%800;
int temp;
int hc,hc1=1,hc2,hcf=0;
void game(){

if (draw==6){
	iClear();
	//PlaySound(TEXT("b.wav"),NULL,SND_ASYNC);
	iSetColor(0,0,0);
	iFilledRectangle(0,0,800,600);

	/*iShowBMP(610,403,"star.bmp");
	iShowBMP(433,502,"star.bmp");
	iShowBMP(303,428,"star.bmp");
	iShowBMP(65,403,"star.bmp");
	iShowBMP(847,453,"star.bmp");
	iShowBMP(110,245,"star.bmp");*/

	iShowBMP(0,75,"level1.bmp");

	iShowBMP(xx,0,"rocket.bmp");
	iSetColor(255,255,255);

	


	iSetColor(110,110,110);

	/*double ar[]={xx+30,xx+70,xx+70,xx+30};
	double arci[]={10,10,40,40};
	iFilledPolygon(ar,ari,4);

	double hep[]={xx+70,xx+100,xx+60,xx+50,xx+40,xx,xx+30};
	double hept[]={40,50,70,75,70,50,40};
	iFilledPolygon(hep,hept,7);*/

	
	/*if(life==0) draw=8;*/
	
	if(s==0) q=xx+50;


	iFilledCircle(q,w,5);
	
	if(gameflag==1){

	if(s==1){
		if(c%2==0){
			w+=10;
			
			
			
			}
	}}
	if(w==700){
		w=70;
		s=0;
	}
	if(x<50) x=x+50;
	if(x>750) x=x-50;

	

	if(score<30)
	{	
		iSetColor(255,255,128);
		
		if((ball*45)%7==1) {
			iSetColor(50,200,100);
			r=40;
		}
		else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}

		iFilledCircle(x,y,r);
		if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			
			g=1;
		
		}
		if(gameflag==1)
		{
		if(g==1){
			if(c%4==0)
			yg-=15;
			if(yg<=0) g=0;
		}}
	
		if(gameflag==1){
		if(c%4==0){
		y-=5;
		}}
		if(gameflag==1){
		if(y==rand()%600) x=x+20;
		if(y==rand()%600) x=x-20;}
		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}

		c++;
		
	
	if(y<=0)
	{
		ball++;
		y=700;
		x=(x+rand())%800;
		r=50;
	}}

	double d=sqrt((x-(q))*(x-(q))+(y-w)*(y-w));
	if(d<=r){
		
		score++;
		ball++;
		if(r==40) score=score+3;
		if(r==30) score=score+5;
		y=700;

		w=70;
		s=0;
		r=50;
		x=(x+rand())%800;
		
		
	}
	
	/*if(score>=5 && score <=50 && flag==0){
		iClear();
		iShowBMP(0,0,"level1.bmp");
		c=0;
		iText(290,350,"LEVEL 2.",GLUT_BITMAP_TIMES_ROMAN_24);
		c++;
		if(c==5) flag=2,c=0;
	}*/
	


	if(score>=30 && score <60){
		iSetColor(255,128,255);
		level=2;
		if((ball*45)%7==1){
			iSetColor(50,200,100);
			r=40;
		}
	else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}
	iFilledCircle(x,y,r);
	
	if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			

			g=1;
		
		}
		if(gameflag==1){
		if(g==1){
			if(c%3==0)
			yg-=15;
			if(yg<=0) g=0;
		}}
		if(gameflag==1){
	if(c%3==0)
		y-=6;}
		if(gameflag==1){
		if(y==(rand()%600)) x=x+50;
		if(y==(rand()%600)) x=x-50;}
		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		c++;
	
	if(y<=0)
	{
		ball++;
		y=800;

		x=(x+rand())%800;
		if(r!=50) r=50;
		
	}}
	if(score>=60 && score<90){iSetColor(128,255,255);
	
	level=3;
	if((ball*45)%7==1){
			iSetColor(50,200,100);
			r=40;
		}
	else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}
	iFilledCircle(x,y,r);

	if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			

			g=1;
		
		}
		if(gameflag==1){
		if(g==1){
			if(c%2==0)
				yg-=15;}
			if(yg<=0) g=0;
		}
		if(gameflag==1){
	if(c%2==0)
		y-=8;}
		if(gameflag==1){
		if((y==rand()%600)) x=x+80;
		if((y==rand()%600)) x=x-80;}

		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		c++;
	
	if(y<=0)
	{
		ball++;
		y=700;
		x=(x+rand())%800;
		if(r!=50) r=50;
			}}
	if(score>=90){
		iSetColor(128,128,128);
		level=4;
		if((ball*45)%7==1) {
			iSetColor(50,200,100);
			r=40;
		}
			else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}
	iFilledCircle(x,y,r);

	if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			

			g=1;
		
		}
		if(gameflag==1){
		if(g==1){
			if(c%1==0)
				yg-=15;}
			if(yg<=0) g=0;
		}
		if(gameflag==1){
	if(c%1==0)
		y-=10;}
		if(gameflag==1){
		if((y==rand()%600)) x=x+120;
		if((y==rand()%600)) x=x-120;}
		
		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		c++;
	
	if(y<=0)
	{
		ball++;
		y=700;
		x=(x+rand())%800;
		r=50;
			}}






	double d1=sqrt((x-xx)*(x-xx)+(y-50)*(y-50));
	double d2=sqrt((xx+100-x)*(xx+100-x)+(y-50)*(y-50));
	double d3=sqrt((xx+50-x)*(xx+50-x)+(y-75)*(y-75));
	
	double d4=sqrt((xx+50-xg)*(xx+50-xg)+(yg-75)*(yg-75));
	double d5=sqrt((xx+40-xg)*(xx+40-xg)+(yg-75)*(yg-75));
	double d6=sqrt((xx+30-xg)*(xx+30-xg)+(yg-75)*(yg-75));
	double d7=sqrt((xx+20-xg)*(xx+20-xg)+(yg-75)*(yg-75));
	double d8=sqrt((xx+10-xg)*(xx+10-xg)+(yg-75)*(yg-75));
	double d9=sqrt((xx+0-xg)*(xx+0-xg)+(yg-75)*(yg-75));
	double d10=sqrt((xx+60-xg)*(xx+60-xg)+(yg-75)*(yg-75));
	double d11=sqrt((xx+70-xg)*(xx+70-xg)+(yg-75)*(yg-75));
	double d12=sqrt((xx+80-xg)*(xx+80-xg)+(yg-75)*(yg-75));
	double d13=sqrt((xx+90-xg)*(xx+90-xg)+(yg-75)*(yg-75));
	double d14=sqrt((xx+100-xg)*(xx+100-xg)+(yg-75)*(yg-75));
	
	if(d4<=10 || d5<=10 || d6<=10 || d7<=10 || d8<=10 || d9<=10 || d10<=10 || d11<=10 || d12<=10 || d13<=10 || d14<=10 ) lf=1;


	if(d1<=r || d2<=r || d3<=r || lf==1){

		life--;
		ball++;

		iClear();
		
		/*for(c=0;c<=100;c++){
		iSetColor(255,0,0);

		iFilledRectangle(0,0,900,600);
		}*/

		x=rand()%800,c=0,y=800,xx=0,w=70,a=0,s=0,r=50,lf=0;
	}
	

	iSetColor(0,255,255);
	if(life==0) draw=8;
	char scoreText[100];
	sprintf(scoreText,"SCORE %d",score);
	iText(801,500,scoreText,GLUT_BITMAP_HELVETICA_18);

	char levelText[100];
	sprintf(levelText,"LEVEL %d",level);
	iText(801,550,levelText,GLUT_BITMAP_HELVETICA_18);
	
	char lifeText[100];
	sprintf(lifeText,"LIFE %d",life);
	iText(801,450,lifeText,GLUT_BITMAP_HELVETICA_18);
	 
}
/*if(draw==8){
	iClear();
	iSetColor(0,0,0);
	iShowBMP(0,0,"ruin.bmp");
	iSetColor(255,0,128);
	iText(400,300,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
	char scoreText1[100];
	sprintf(scoreText1,"Your score is %d",score);
	iText(400,250,scoreText1,GLUT_BITMAP_HELVETICA_18);

	iText(400,200,"Preee 'R' to restart",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(400,150,"Preee 'Q' to quit",GLUT_BITMAP_TIMES_ROMAN_24);


}*/
}
void time()
{
}
void mydelay(int mseconds)
{
}

void iDraw()
{
	if (draw==1){
	iClear();
	iSetColor(255,0,0);

	iShowBMP(0,0,"aliens_attack.bmp");
	iText(400,400,"LOADING",GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(400,300,0,20);
	c++;
	FILE *hrfile=fopen("h.txt","r");
	fscanf(hrfile,"%d",&hc);
	fclose(hrfile);

	if(c%20==0)
	draw=2,c=0;
	}
	if (draw==2){

	iClear();
	iSetColor(255,0,0);
	iShowBMP(0,0,"aliens_attack.bmp");
	iText(400,400,"LOADING",GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(400,300,30,20);
	c++;
	if(c%20==0)
	draw=3,c=0;

	}
	if (draw==3){

	iClear();
	
	iSetColor(255,0,0);
	

	iShowBMP(0,0,"aliens_attack.bmp");
	iText(400,400,"LOADING",GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(400,300,70,20);
	c++;
	if(c%20==0)
	draw=4,c=0;
	}
	if (draw==4){

	iClear();
	iSetColor(255,0,0);
	

	iShowBMP(0,0,"aliens_attack.bmp");
	iText(400,400,"LOADING",GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(400,300,120,20);
	c++;
	if(c%20==0)
	draw=5,c=0;
	}

	if(draw==5){

		iClear();
		
		iShowBMP(0,0,"Homepage.bmp");
		iShowBMP(400,500,"shootemup.bmp");
		iShowBMP(450,400,"playf (2).bmp");
		iShowBMP(450,300,"load.bmp");
		iShowBMP(386,200,"high.bmp");
		iShowBMP(450,100,"quitf.bmp");
		iShowBMP(0,300,"help1.bmp");
	}

	if(draw==6) game();



	/*if (draw==6){
	iClear();
	//PlaySound(TEXT("b.wav"),NULL,SND_ASYNC);
	iSetColor(0,0,0);
	iFilledRectangle(0,0,800,600);

	/*iShowBMP(610,403,"star.bmp");
	iShowBMP(433,502,"star.bmp");
	iShowBMP(303,428,"star.bmp");
	iShowBMP(65,403,"star.bmp");
	iShowBMP(847,453,"star.bmp");
	iShowBMP(110,245,"star.bmp");*/


	/*iShowBMP(0,75,"level1.bmp");

	iShowBMP(xx,0,"rocket.bmp");
	iSetColor(255,255,255);

	


	iSetColor(110,110,110);

	/*double ar[]={xx+30,xx+70,xx+70,xx+30};
	double arci[]={10,10,40,40};
	iFilledPolygon(ar,ari,4);

	double hep[]={xx+70,xx+100,xx+60,xx+50,xx+40,xx,xx+30};
	double hept[]={40,50,70,75,70,50,40};
	iFilledPolygon(hep,hept,7);*/

	
	/*if(life==0) draw=8;*/
	
	/*if(s==0) q=xx+50;


	iFilledCircle(q,w,5);
	
	if(gameflag==1){

	if(s==1){
		if(c%2==0){
			w+=10;
			
			
			
			}
	}}
	if(w==700){
		w=70;
		s=0;
	}
	if(x<50) x=x+50;
	if(x>750) x=x-50;

	

	if(score<30)
	{	
		iSetColor(255,255,128);
		
		if((ball*45)%7==1) {
			iSetColor(50,200,100);
			r=40;
		}
		else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}

		iFilledCircle(x,y,r);
		if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			
			g=1;
		
		}
		if(gameflag==1)
		{
		if(g==1){
			if(c%4==0)
			yg-=15;
			if(yg<=0) g=0;
		}}
	
		if(gameflag==1){
		if(c%4==0){
		y-=5;
		}}
		if(gameflag==1){
		if(y==rand()%600) x=x+20;
		if(y==rand()%600) x=x-20;}
		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}

		c++;
		
	
	if(y<=0)
	{
		ball++;
		y=700;
		x=(x+rand())%800;
		r=50;
	}}

	double d=sqrt((x-(q))*(x-(q))+(y-w)*(y-w));
	if(d<=r){
		
		score++;
		ball++;
		if(r==40) score=score+3;
		if(r==30) score=score+5;
		y=700;

		w=70;
		s=0;
		r=50;
		x=(x+rand())%800;
		
		
	}
	
	/*if(score>=5 && score <=50 && flag==0){
		iClear();
		iShowBMP(0,0,"level1.bmp");
		c=0;
		iText(290,350,"LEVEL 2.",GLUT_BITMAP_TIMES_ROMAN_24);
		c++;
		if(c==5) flag=2,c=0;
	}*/
	


	/*if(score>=30 && score <60){
		iSetColor(255,128,255);
		level=2;
		if((ball*45)%7==1){
			iSetColor(50,200,100);
			r=40;
		}
	else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}
	iFilledCircle(x,y,r);
	
	if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			

			g=1;
		
		}
		if(g==1){
			if(c%3==0)
			yg-=15;
			if(yg<=0) g=0;
		}
	
	if(c%3==0)
		y-=6;
		if(y==(rand()%600)) x=x+50;
		if(y==(rand()%600)) x=x-50;
		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		c++;
	
	if(y<=0)
	{
		ball++;
		y=800;

		x=(x+rand())%800;
		if(r!=50) r=50;
		
	}}
	if(score>=60 && score<90){iSetColor(128,255,255);
	
	level=3;
	if((ball*45)%7==1){
			iSetColor(50,200,100);
			r=40;
		}
	else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}
	iFilledCircle(x,y,r);

	if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			

			g=1;
		
		}
		if(g==1){
			if(c%2==0)
			yg-=15;
			if(yg<=0) g=0;
		}

	if(c%2==0)
		y-=8;
		if((y==rand()%600)) x=x+80;
		if((y==rand()%600)) x=x-80;

		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		c++;
	
	if(y<=0)
	{
		ball++;
		y=700;
		x=(x+rand())%800;
		if(r!=50) r=50;
			}}
	if(score>=90){
		iSetColor(128,128,128);
		level=4;
		if((ball*45)%7==1) {
			iSetColor(50,200,100);
			r=40;
		}
			else if((ball*89)%12==7){
			iSetColor(200,50,100);
			r=30;
		}
	iFilledCircle(x,y,r);

	if(g==0) xg=x,yg=y;
		iSetColor(100,100,100);
		iFilledCircle(xg,yg,10);


		if(y<600 && g==0) 
		{
			
			

			g=1;
		
		}
		if(g==1){
			if(c%1==0)
			yg-=15;
			if(yg<=0) g=0;
		}
	if(c%1==0)
		y-=10;
		if((y==rand()%600)) x=x+120;
		if((y==rand()%600)) x=x-120;
		
		if(c%2==0){
			iSetColor(255,0,0);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		else{
			iSetColor(0,0,255);
			iFilledCircle(x-20,y+20,10);
			iFilledCircle(x+20,y+20,10);
			iFilledRectangle(x-5,y-5,10,10);
		}
		c++;
	
	if(y<=0)
	{
		ball++;
		y=700;
		x=(x+rand())%800;
		r=50;
			}}






	double d1=sqrt((x-xx)*(x-xx)+(y-50)*(y-50));
	double d2=sqrt((xx+100-x)*(xx+100-x)+(y-50)*(y-50));
	double d3=sqrt((xx+50-x)*(xx+50-x)+(y-75)*(y-75));
	
	double d4=sqrt((xx+50-xg)*(xx+50-xg)+(yg-75)*(yg-75));
	double d5=sqrt((xx+40-xg)*(xx+40-xg)+(yg-75)*(yg-75));
	double d6=sqrt((xx+30-xg)*(xx+30-xg)+(yg-75)*(yg-75));
	double d7=sqrt((xx+20-xg)*(xx+20-xg)+(yg-75)*(yg-75));
	double d8=sqrt((xx+10-xg)*(xx+10-xg)+(yg-75)*(yg-75));
	double d9=sqrt((xx+0-xg)*(xx+0-xg)+(yg-75)*(yg-75));
	double d10=sqrt((xx+60-xg)*(xx+60-xg)+(yg-75)*(yg-75));
	double d11=sqrt((xx+70-xg)*(xx+70-xg)+(yg-75)*(yg-75));
	double d12=sqrt((xx+80-xg)*(xx+80-xg)+(yg-75)*(yg-75));
	double d13=sqrt((xx+90-xg)*(xx+90-xg)+(yg-75)*(yg-75));
	double d14=sqrt((xx+100-xg)*(xx+100-xg)+(yg-75)*(yg-75));
	
	if(d4<=10 || d5<=10 || d6<=10 || d7<=10 || d8<=10 || d9<=10 || d10<=10 || d11<=10 || d12<=10 || d13<=10 || d14<=10 ) lf=1;


	if(d1<=r || d2<=r || d3<=r || lf==1){

		life--;
		ball++;

		iClear();
		
		/*for(c=0;c<=100;c++){
		iSetColor(255,0,0);

		iFilledRectangle(0,0,900,600);
		}*/

		/*x=rand()%800,c=0,y=800,xx=0,w=70,a=0,s=0,r=50,lf=0;
	}
	

	iSetColor(0,255,255);
	if(life==0) draw=8;
	char scoreText[100];
	sprintf(scoreText,"SCORE %d",score);
	iText(801,500,scoreText,GLUT_BITMAP_HELVETICA_18);

	char levelText[100];
	sprintf(levelText,"LEVEL %d",level);
	iText(801,550,levelText,GLUT_BITMAP_HELVETICA_18);
	
	char lifeText[100];
	sprintf(lifeText,"LIFE %d",life);
	iText(801,450,lifeText,GLUT_BITMAP_HELVETICA_18);
	 
}*/
if(draw==8){
	iClear();
	iSetColor(0,0,0);
	iShowBMP(0,0,"ruin.bmp");
	iSetColor(255,0,128);
	iText(400,300,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
	char scoreText1[100];
	sprintf(scoreText1,"Your score is %d",score);
	iText(400,250,scoreText1,GLUT_BITMAP_HELVETICA_18);
	if(score>=hc){
		hc=score;
	FILE *hwfile=fopen("h.txt","w+");
	fprintf(hwfile,"%d",hc);
	fclose(hwfile);
	iText(400,150,"You got a HighScore...",GLUT_BITMAP_HELVETICA_18);
	
	
	hcf=1;}
	if(space==1){
		draw=6;
		c=0,y=800,xx=0,w=70,a=0,s=0,r=50,life=3,score=0,m,q=xx+50,level=1,i,j,sp=0,flag=0,ball=0,space=0,xg,yg,g=0,lf=0,gameflag=1;
		space=0;
}

	iText(400,100,"Preee 'SPACE' to RESTART",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(400,50,"Preee 'Q' to QUIT",GLUT_BITMAP_TIMES_ROMAN_24);


}

if(draw==9){
	iShowBMP(0,0,"back.bmp");
	iSetColor(255,0,0);

	char highscore[100];
	sprintf(highscore,"HIGHSCORE %d",hc);
	iText(401,300,highscore,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
	iText(830,10,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);

}
if(draw==10){
	iShowBMP(0,0,"help.bmp");
	

}



}


void iMouseMove(int mx, int my)
{
	
		
}	

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=450 && mx<=578 && my>=400 && my<=464 && draw==5){
	xx=0;
	q=xx+50;
	w=70;
	x=rand()%800;
	y=800;
	r=50;
	xg=x;
	yg=y;
		score=0;
		level=1;
		life=3;
		draw=6;
	gameflag=1;}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=450 && mx<=578 && my>=100 && my<=164 && draw==5)
		exit(0);
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=0 && mx<=128 && my>=300 && my<=364 && draw==5)
		draw=10;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=800 && mx<=900 && my>=0 && my<=50 && draw==10)
		draw=5;
	
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=386 && mx<=642 && my>=200 && my<=264 && draw==5)
		draw=9;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=800 && mx<=900 && my>=0 && my<=50 && draw==9)
		draw=5;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && mx>=450 && mx<=578 && my>=300 && my<=364 && draw==5)
	{

		FILE *rfile=fopen("s.txt","r");
		fscanf(rfile,"%d %d %d %d %d %d %d %d %d %d %d",&xx,&q,&w,&x,&y,&r,&xg,&yg,&score,&level,&life);
		draw=6;
		game();
	}
	
}

void iPassiveMouseMove(int mx,int my)
{
	

}

void iKeyboard(unsigned char key)
{
	if(key=='p')
		gameflag=0;
	if(key=='r')
		gameflag=1;
	if(gameflag==1){
	
	if (key=='d'){
		if(xx<800){
		xx=xx+50;
	}
	}

	
	
	if (key=='a'){
		if(xx>49){
		xx=xx-50;
		}

	
	}
	
	/*if(draw==8 && key=='r')
	{
		draw=6;
		c=0,y=800,xx=0,w=70,a=0,s=0,r=50,life=3,score=0,m,q=xx+50,level=1,i,j,sp=0,flag=0,ball=0,space=0,xg,yg,g=0,lf=0;
	}*/
	if(key=='s'){
		s=1;}}
	if(key=='g'){
		FILE *wfile=fopen("s.txt","w+");
		fprintf(wfile,"%d %d %d %d %d %d %d %d %d %d %d",xx,q,w,x,y,r,xg,yg,score,level,life);
		draw=5;
	
	
	}

	if(key==32){
		space=1;
	}
	if(key=='u')
	{
		FILE *rfile=fopen("s.txt","r");
		fscanf(rfile,"%d %d %d %d %d %d %d %d %d %d %d",&xx,&q,&w,&x,&y,&r,&xg,&yg,&score,&level,&life);
		draw=6;
		game();
	}
	if(key=='q'){
		exit(0);
	}






	
}

void iSpecialKeyboard(unsigned char key)
{

	
}

int main()
{

	//PlaySound(TEXT("b.wav"),NULL,SND_ASYNC);
	iInitialize(900, 600, "Final");
	return 0;
}	



















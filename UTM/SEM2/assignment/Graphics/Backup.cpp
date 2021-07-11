#include <graphics.h>
#include <conio.h>

void syringe(int, int); 
 
main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");    
 
   //call syringe function here
   syringe(100, 50); //postion 0,0 is the most top left of the screen
    
   getch();
   closegraph();
   return 0;
}

void syringe(int x, int y)	//position input
{
	//needle
	line(x+0, y+15, x+90, y+15);
	
	//body
	line(x+90, y+15, x+120, y+30);
	line(x+90, y+15, x+120, y+0);
	rectangle(x+120, y+30, x+270, y+0);
	
	//end part
	rectangle(x+270, y+21, x+288, y+9);
	rectangle(x+288, y+30, x+300, y+0);
}

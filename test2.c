#include<stdio.h>
#include<ncurses.h>
 #include<stdlib.h>
void gotoxy(int x,int y)
 {
 printf("%c[%d;%df",0x1B,y,x);
 }                //try it out
 int main()
{
initscr();
    start_color();
    int i;


    /* this is my magic little line */
    assume_default_colors(COLOR_RED,COLOR_BLUE);

    for(i=0;i<2000;i++) {
        printf("%d\n\r",i);
        refresh();
    }

    endwin();
   int a;
scanf("%d",&a);
printf("%d",a);
	if(a==0)
	printf("%d",a);
printf("hello world");
}

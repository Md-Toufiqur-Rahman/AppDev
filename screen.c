#include <stdio.h>

void setFGcolor(int colorcode)
{
	printf("\x1b[%dm", colorcode);
	fflush(stdout);
}

//to clear the screen
void clearScreen(void) {
	printf("\x1b[2J");
	fflush(stdout);
}

//to move the cursor to desire
void gotoXY(int row, int col) {
	printf("\x1b[%d;%dH", row, col);
	fflush(stdout);
}
#include "imgproc.h"

void negImg(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
unsigned char B[WIDTH][HEIGHT]) {

int i;
int j;

	for( i = 0; i < WIDTH; i++)
	{
		for( j = 0; j < HEIGHT; j++)
		{
			R[i][j] = 255 - R[i][j];
			G[i][j] = 255 - G[i][j];
			B[i][j] = 255 - B[i][j];
		}
	}
}



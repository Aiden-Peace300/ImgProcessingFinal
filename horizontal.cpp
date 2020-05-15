#include "imgproc.h"

void mirrorHoriz(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
unsigned char B[WIDTH][HEIGHT]) {

	int i;
	int j;

	for( i = 0; i < (WIDTH/2); i++)
	{
		for( j = 0; j < HEIGHT; j++)
		{
			R[i][j] = R[WIDTH-1-i][j];
			G[i][j] = G[WIDTH-1-i][j];
			B[i][j] = B[WIDTH-1-i][j];
		}
	}
}

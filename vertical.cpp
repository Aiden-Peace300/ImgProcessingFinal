#include "imgproc.h"

void mirrorVert(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
       		unsigned char B[WIDTH][HEIGHT]) {

	int i;
	int j;

	for( i = 0; i < WIDTH; i++)
	{
		for( j = 0; j < (HEIGHT/2); j++)
		{
			R[i][j] = R[i][HEIGHT-1-j];
			G[i][j] = G[i][HEIGHT-1-j];
			B[i][j] = B[i][HEIGHT-1-j];
		}
	}
}

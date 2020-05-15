#include "imgproc.h"

void grayImg(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
             unsigned char B[WIDTH][HEIGHT]) {

	int i;
	int j;

	unsigned char average[WIDTH][HEIGHT];

	for( i = 0; i < WIDTH; i++)
	{
		for( j = 0; j < HEIGHT; j++)
		{
			average[i][j] = (R[i][j] / 3) + (G[i][j] / 3) + (B[i][j] / 3);

			R[i][j] = average[i][j];
			G[i][j] = average[i][j];
			B[i][j] = average[i][j];
		}
	}
}

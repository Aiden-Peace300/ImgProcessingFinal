#include "imgproc.h"

int main() {
	string imageFile="image.jpg";
	unsigned char R[WIDTH][HEIGHT];
	unsigned char G[WIDTH][HEIGHT];
	unsigned char B[WIDTH][HEIGHT];

	readImage(imageFile);
	mirrorHoriz(R,G,B);
	return 0;
}

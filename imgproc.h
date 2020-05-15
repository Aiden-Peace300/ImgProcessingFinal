#ifndef _H_
#define _H_

#include <iostream>
#include <cstring>
#include <istream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int HEIGHT = 410;
const int WIDTH = 644;

void readImage(string (&imageFile), unsigned char (&R)[WIDTH][HEIGHT],
 unsigned char (&G)[WIDTH][HEIGHT],
 unsigned char (&B)[WIDTH][HEIGHT]);

void saveImage(string resultsfile, unsigned char R[WIDTH][HEIGHT],
 unsigned char G[WIDTH][HEIGHT],
 unsigned char B[WIDTH][HEIGHT]);

void mirrorHoriz(unsigned char [WIDTH][HEIGHT], unsigned char [WIDTH][HEIGHT],
unsigned char [WIDTH][HEIGHT]);

void mirrorVert(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
unsigned char B[WIDTH][HEIGHT]);

void negImg(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
unsigned char B[WIDTH][HEIGHT]);

void grayImg(unsigned char R[WIDTH][HEIGHT], unsigned char G[WIDTH][HEIGHT],
        unsigned char B[WIDTH][HEIGHT]);

#endif

#ifndef _H_
#define _H_

#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std; 

const int HEIGHT = 410;
const int WIDTH = 644;

void readImage(string);
void mirrorHoriz(unsigned char [][HEIGHT], unsigned char [][HEIGHT], unsigned char [][HEIGHT]);

#endif

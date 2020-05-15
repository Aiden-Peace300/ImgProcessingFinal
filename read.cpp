#include "imgproc.h"

void readImage(string (&imageFile), unsigned char (&R)[WIDTH][HEIGHT],
 unsigned char (&G)[WIDTH][HEIGHT],
 unsigned char (&B)[WIDTH][HEIGHT]) {

	char tempvar;
	string fakestring;
	int j;
	int i;
	
	ifstream inputfile(imageFile, ios::in | ios::binary);

	if (inputfile.good())
	{
		getline(inputfile,fakestring);
		getline(inputfile,fakestring);
		getline(inputfile,fakestring);

		for( i = 0; i < HEIGHT; i++)
		{
			for( j = 0; j < WIDTH; j++)
			{
				inputfile.read(&tempvar,1);
				R[j][i] = (unsigned char) tempvar;
				inputfile.read(&tempvar,1);
				G[j][i] = (unsigned char) tempvar;
				inputfile.read(&tempvar,1);
				B[j][i] = (unsigned char) tempvar;
			}
		}
	}
	else
	{
		cout << "Error. Unable to open " << imageFile << endl;
	}
	
	inputfile.close();
}



#include "imgproc.h"

void saveImage(string resultsfile, unsigned char R[WIDTH][HEIGHT],
 	       unsigned char G[WIDTH][HEIGHT],
	       unsigned char B[WIDTH][HEIGHT]) {

	int j;
	int i;
	char tempvar;

	ofstream results(resultsfile,ios::out | ios::binary);

	if (results.good())
	{
		results << "P6" << endl;
		results << "644";
		results << " ";
		results << "410" << endl;
		results << "255" << endl;

		for( i = 0; i < HEIGHT; i++)
		{
			for( j = 0; j < WIDTH; j++)
			{
				tempvar = (char) R[j][i];
				results.write(&tempvar,1);
				tempvar = (char) G[j][i];
				results.write(&tempvar,1);
				tempvar = (char) B[j][i];
				results.write(&tempvar,1);
			}
		}
	}
	else
	{
        	cout << "Error! Unable to open " << resultsfile << endl;
    	}
	
	results.close();
}

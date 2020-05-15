#include "imgproc.h"

int main()
{
	string file_type;
	int choice;

	string imageFile="ss.ppm";
	string resultsfile="return.ppm";
	unsigned char R[WIDTH][HEIGHT];
	unsigned char G[WIDTH][HEIGHT];
	unsigned char B[WIDTH][HEIGHT];

	do{
		cout << "Enter input file name: ";
		cin >> imageFile;
		cout << endl;

		readImage(imageFile,R,G,B);

		cout << "1. Mirror horizontally" << endl;
		cout << "2. Mirror vertically" << endl;
		cout << "3. Convert to negative" << endl;
		cout << "4. Convert to grayscale" << endl;
		cout << "5. Exit" << endl << endl;

		cout << "What would you like to do? ";
		cin >> choice;
		cin.ignore(10000,'\n');

   		switch(choice)
   		{
    			case 1:
      				mirrorHoriz(R,G,B);
      				saveImage("return.ppm",R,G,B);
            			break;
            		case 2:
          			mirrorVert(R,G,B);
          			saveImage("return.ppm",R,G,B);
          			break;
       			case 3:
          			negImg(R,G,B);
          			saveImage("return.ppm",R,G,B);
          			break;
       			case 4:
        			grayImg(R,G,B);
        			saveImage("return.ppm",R,G,B);
   		}

   		if(choice < 5)
   		{
    			cout << "Image successfully converted to " << choice <<
    			" and save in file "  << resultsfile << endl << endl;
    		}
   		if(choice == 5)
   		{
    			cout << "you exited program" << endl << endl;
   		}

	}while(choice != 5);

return 0;
}



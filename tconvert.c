#include <stdlib.h>
#include <stdio.h>

void tconvert (double temp, char type)
{	
	switch(type)
	{
		case 'c':
		case 'C':
			if (temp < -273.15){
				printf("temp<0");
				break;
			}
			else{
			    	double k = temp + 273.15;
				double f = (temp * 9 / 5) + 32;
				printf("%.2f f \n", f);
				printf("%.2f k \n", k);
				break;
			}
		case 'f':
		case 'F':
			if (temp < -459.67){
				printf("temp<0");
				break;
			}
			else{
				double k = (temp + 459.67) * 5 / 9;
				double c = (temp - 32) * 5 / 9;
				printf("%.2f k \n", k);
				printf("%.2f c \n", c);
				break;
			}
		case 'k':
		case 'K':
			if (temp < 0){
				printf("temp<0");
				break;
			}
			else{
				double f = (temp - 273.15) * 5 / 9 + 32;
				double c = (temp - 273.15);
				printf("%.2f f \n", f);
				printf("%.2f c \n", c);
				break;
    			}
	}
			
			
}

int main(int argc, char *argv[])
{
	if (argc == 3){
		double temp = atof(argv[1]);
		tconvert(temp,*argv[2]);
	}
	else{
		double temp = atof(argv[1]);
		printf("%.2f C: \n", temp);
		tconvert(temp,'C');
		printf("\n");
		printf("%.2f K: \n", temp);
		tconvert(temp,'K');
		printf("\n");
		printf("%.2f F: \n", temp);
		tconvert(temp,'F');
		}
	return 0 ;
}
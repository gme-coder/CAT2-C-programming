#include <stdio.h>
int main(int argc, char** argv)
{
	//declaring a 2D array
	int i,j;
	int scores[2][2]= {{65,92},{84,92}};
	for (i=0;i<2;i++){
		for(j=0;j<2;j++);{
			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
			
		}
	}
	return 0;
}
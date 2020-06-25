#include<stdio.h>
#include<math.h>

//A computer program stores 2D coordinates in an array. 
//User enter coordinates for two 2D coordinates and distance between coordinates are computed and displayed. 
//Use double pow(double base, double exponent) and double sqrt(double x) functions from math.h library. 

int main(){
	
	double xy[2][2];
	int i,j;
	double distance;
	
	//x1,y1 x2,y2
	
	printf("Please enter coordinates.(x1,y1) and (x2,y2)\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			scanf("%lf",&xy[i][j]);
			printf("x%d=%.2f\n",i+1,xy[i][j]);
			scanf("%lf",&xy[i][j+1]);
			printf("y%d=%.2f\n",i+1,xy[i][j+1]);
			j++;
		}
	}
	
	distance=pow (sqrt(xy[1][0] - xy[0][0]) + sqrt(xy[1][1]-xy[0][1]),1/2.0);
	
	printf("Distance between coordinates:%.3f",distance);
	
	
	return 0;
}

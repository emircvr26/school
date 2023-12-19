#include <stdio.h>
#include <stdlib.h>

int generateFeature(int sF, int sV);
int maximum(int x, int y, int z);
int normalize(int x,int y,int z,int max);
void minimum(double nf1,double nf2);

main(){
	int p1x= generateFeature(7,9), p1y= generateFeature(7,9), p1z= generateFeature(7,9);
	int p2x= generateFeature(6,8), p2y= generateFeature(6,8), p2z= generateFeature(6,8);
	
	printf("Feature of P1:\nP1x: %d\tP1y: %d\tP1z: %d\n",p1x,p1y,p1z);
	printf("Feature of P2:\nP2x: %d\tP2y: %d\tP2z: %d\n\n",p2x,p2y,p2z);

	printf("Max feature for P1: %d\n", maximum(p1x,p1y,p1z));
	printf("Max feature for P2: %d\n", maximum(p2x,p2y,p2z));
	
	minimum(normalize(p1x,p1y,p1z,maximum(p1x,p1y,p1z)),normalize(p2x,p2y,p2z,maximum(p2x,p2y,p2z)));
}

int generateFeature(sF, sV){
	return sV+rand()%sF;
}

int maximum(int x, int y, int z){
	if(x>=y && x >= z)
		return x;
	else if(y>=x && y >= z)
		return y;
	else
		return z;
}

int normalize(x,y,z,max){
	printf("Normalized features nX=%.3f nY=%.3f nZ=%.3f\n", (double)x/max, (double)y/max, (double)z/max);
	
	if(x<=y && x <= z)
		return x;
	else if(y<=x && y <= z)
		return y;
	else
		return z;
}

void minimum(double nf1, double nf2){
	if(nf1>=nf2)
		printf("Min of normalized min: %.1f", nf1);
	else 
		printf("Min of normalized min: %.1f", nf2);
}

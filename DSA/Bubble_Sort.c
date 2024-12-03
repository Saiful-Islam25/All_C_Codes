#include<stdio.h>
int DATA[10]={1,27,3,14,66,7,34,23,98,13};
int N=10;

void BUBBLE();

int main(){
	int i;
	printf("\n\n Value contained in DATA[10] = ");
	for(i=0;i<10;i++)
	 printf(" %d",DATA[i]);
	
	BUBBLE();
	
	printf("\n\n  Values contained in DATA[10] after sorting =");
	for(i=0;i<10;i++)
	 printf(" %d",DATA[i]);
	
	return 0;
}
void BUBBLE(){
	int K,PTR,TEMP;
	for(K=0;K<=(N-1-1);K++){
		PTR=0;
		while(PTR<=(N-K-1-1)){
			if(DATA[PTR]>DATA[PTR+1]){
				TEMP=DATA[PTR];
				DATA[PTR]=DATA[PTR+1];
				DATA[PTR+1]=TEMP;
			}
			PTR=PTR+1;
		}
		
	}
}

#include<stdio.h>
#include<math.h>

int main(){
	int x,rem,rev=0;
	scanf("%d",&x);
	
	while(x!=0){
		rem=x%10;
		rev=rev*10+rem;
		x/=10;	
}
printf("%d",rev);
}

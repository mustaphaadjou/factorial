#include<stdio.h>

int main(){
	int i,n,f;
	do{
	printf("donner un nombre n positive:");
	scanf("%d",&n);}while(n<0);
	f=1;
	i=n;
	while(i!=0){
		f=f*i;
		i--;
	}
	printf("%d",f);
	return 0;
}

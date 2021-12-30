#include<stdio.h>

int main(){
	//variables initialisation
	int i,n,f;
	//reading the variable from the keyboard
	do{
	printf("donner un nombre n positive:");
	scanf("%d",&n);}
	while(n<0);
	//variables initialisation
	f=1;
	i=n;
	//while loop to caluculate the factorial
	while(i!=0){
		f=f*i;
		i--;
	}
	//printing the code in the screen
	printf("%d! =%d",n,f);
	return 0;
}

#include<stdio.h>
int fact(int a);
void main(){
	int n,z;
	printf("Enter the number");
	scanf("%d",&n);
	z=fact(n);
	printf("%d",z);
}
int fact(n){
	if(n!=1){
		return n*fact(n-1);
	}
	else{
		return n;
	}

}

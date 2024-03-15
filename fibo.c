#include<stdio.h>
int fibo(int);
void main(){
	int i,n,z;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		z=fibo(i);
		printf("%d",z);
	}
}
int fibo(i){
	if(i==0||i==1){
		return i;
	}
	else{
		return
		fibo(i-1)+fibo(i-2);
	}

}

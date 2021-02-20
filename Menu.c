//menu

#include <stdio.h>

int main(){
	//variables data types
	int num;
	
	
	//menu
	printf("1.Perfect Number or Not.\n");
	printf("2.X Raised to Y.\n");
	printf("3.Factorial.\n");
	printf("4.Fibonacci.\n");
	printf("5.Exit.\n");
	
	
	//intro
	do{
		printf("Choose from the menu above: ");
		scanf("%i", &num);
	}while(num < 1);
	
	if(num>5){
		printf("Invalid input.\n");
		return 0;
	}
	
	//body
	
	//perfect number
	
	if(num==1){
	int i, n, sum=0;
	
		do{
			printf("Enter a positive integer: ");
			scanf("%d", &n);
		}while(n<1);
		
		for(i=2; i * i < n; i++){
		
			if(n % i == 0)
				sum=sum+i;
		}
		
		if(sum + 1 == n){
			printf("%d is a Perfect Number.\n",n);}
		else{
			printf("%d is not a Perfect Number.\n",n);}
			
		return 0;
	}
	
	//exponent
	
	if(num==2){
	
	int i,base,exp,ans;
	
		printf("Enter a value for the base: ");
		scanf("%d", &base);
		printf("Enter a value for the exponent: ");
		scanf("%d", &exp);
		
		//negative exponent
		if(exp<0){
			exp=exp*(-1);
			
			for(i=1, ans=1; i<=exp; i++){
			ans *= base;
			}
			
		printf("%d^-%d = 1/%i\n", base, exp, ans);
		return 0;
		}
		
		//undefined
		else 
		if(base==0 && exp==0){
		printf("0^0 is undefined.\n");
		return 0;
		
		}
		
		//other
		else{	
			for(i=1, ans=1; i<=exp; i++){
			
				ans *= base;
			}
			
			printf("%d^%d = %i\n", base, exp, ans);
			return 0;
		}
		
		return 0;
	}
	
	//factorial
	
	if(num==3){
	
		int ans, n, iter;
	
		do{
			printf("Enter a non negative integer: ");
			scanf("%i", &n);
		}while(n<0);

			
		if(n==0){
			printf("%i factorial is 1.\n",n);
			return 0;
			}
			
		else
		for(iter=n, ans=1; iter>0; iter--){
			ans*=iter;
		}
		
		printf("%i factorial is %i.\n", n, ans);
			
		return 0;	
	}
	
	//fibonacci
	
	if(num==4){
	
		int a,b,c,n,iter;
	
		do{
			printf("Enter a positive integer: ");
			scanf("%i", &n);
		}while(n<1);
		
		for(a=1,b=0,iter=0; iter<n; iter++){
			c=a+b;
			a=b;
			b=c;
		}
		
		printf("The %ith element of the fibonacci sequence is %i.\n",n,c);
			
		return 0;	
	}

}

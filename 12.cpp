#include <iostream>
main(){
	
	int a,i;  
	a=1;                             //p.155 실습10 
	for(a=1;a<=8;a++)
//	while(a<8) //while문 쓸때 
	{
//	a++; //while문쓸때 
	{
		printf("%d의 약수",a);
		
		
		for(i=1;i<=a;i++)
		
//		i = 1; //while문쓸  
//		while(i<=a){
		
	 	
		if(a%i == 0)
		printf("%d\n", i);
//		i++; //while문쓸때 
		}
		printf("\n");
	

}
	int n, j, i;                           //p.156 실습11 
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
	
	printf("*");
	printf("\n");
	}
}

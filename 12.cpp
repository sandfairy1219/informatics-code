#include <iostream>
main(){
	
	int a,i;  
	a=1;                             //p.155 �ǽ�10 
	for(a=1;a<=8;a++)
//	while(a<8) //while�� ���� 
	{
//	a++; //while������ 
	{
		printf("%d�� ���",a);
		
		
		for(i=1;i<=a;i++)
		
//		i = 1; //while���� �� 
//		while(i<=a){
		
	 	
		if(a%i == 0)
		printf("%d\n", i);
//		i++; //while������ 
		}
		printf("\n");
	

}
//	int n, j, i;                           //p.156 �ǽ�11 
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//	
//	printf("*");
//	printf("\n");
//	}
}

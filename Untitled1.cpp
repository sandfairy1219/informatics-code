#include <iostream>
main()
{
//	int a;                                 // p.154 1 ¹ø 
//	int i;
//	scanf("%d", &a);
//	for (i = 1;i<=a;i++)
//	{
//		
//		printf("%d\n", i);
//		
//	}
//	
//	int a;                                 // p.154 2 ¹ø 
//	int i;
//	scanf("%d", &a);
//	for (i = 1;i<=a;i++)
//	{
//		if(a%i == 0)
//		printf("%d\n", i);
//		
//	}
	
	int a, i;
	scanf("%d", &a);
	for (i = a;i>=1;i--)
	{
		if(a%i ==0)
		printf("%d\n", i);
	}
	
	
	 
	
}

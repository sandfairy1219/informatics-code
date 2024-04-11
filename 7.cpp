#include <iostream>
main()
{
	int n ;
	scanf("%d", &n);
	if(n>=3&&n<=5)
	printf("봄");
	else if(n>=6&&n<=8)
	printf("여름");
	else if(n>=9 &&n<=11)
	printf("가을");
	else
	printf("겨울");
}

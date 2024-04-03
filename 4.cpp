#include <iostream>
main()                                   
{
	
	int n;												//p.144 실습1 
	scanf("%d", &n);
	if(n>=10)
	printf("성공");



	int n;												//p.145 실습2 
	scanf("%d", &n);
	if(n>=10)
	printf("성공");
	if(n<10)
	printf("실패"); 
	
	
	int n; 												//p.146 실습3 
	scanf("%d", &n);      								 
	if(n>=10)
	printf("성공");
	else
	printf("실패");



	int n;												//p.146 실습4 % 응용 
	scanf("%d", &n);
	if(n>=80&&n<=100)
	printf("성공");
	else if(n>100)
	printf("오류입니다"); 
	else 
	printf("실패");
	
	 
}

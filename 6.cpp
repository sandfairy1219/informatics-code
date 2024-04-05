#include <iostream>
main(){
	
	int n;                               // p.147 활동 1 
	scanf("%d", &n);
	if(n%2 == 0)
	printf("짝수입니다");
	else
	printf("홀수입니다");
	

	int n;							  	// P.148 활동2 
	scanf("%d", &n);
	if(n ==2)
	printf("바위");
	else if(n==3)
	printf("보"); 
	else if (n==1)
	printf("가위");
	else 
	printf("다시 입력");
	
	int n;                             // p.149 실습5 
	scanf("%d", &n)
	if(n>=90)
	printf("A");
	if (n<90 && n>=80)
	printf("B");
	if (n<80 && n>=70)
	printf("C");
	if(n<70)
	printf("F")
	
	
	
	int n;                            // p.150 실습6 
	scanf("%d", &n)
	if(n>=90)
	printf("A");
	else if (n>=80)
	printf("B");
	else if(n>=70)
	printf("C");
	else 
	printf("F");
	
}

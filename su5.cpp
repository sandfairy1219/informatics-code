#include <stdio.h>
struct student
{
    int id;
    char name[10];
    double score;
} s1 = {1001, "zhangsan", 89.5}, s2 = {1002, "lisi", 78.5}, s3 = {1003, "wangwu", 92.0};
main(){
    struct student s2 = {1002, "lisi", 78.5};
    s2.score = 80.0;
    printf("%d %s %.1f\n", s2.id, s2.name, s2.score);
}
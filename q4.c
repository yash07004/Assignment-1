#include<stdio.h>
int main()
{
    float pi,R,A;
    pi=3.141;
    printf("ENTER THE VALUE OF r");
    scanf("%f",& R);
    A=pi*R*R;
    printf("Area of circle is %f having radius %f",A,R);
    
    return 0;

}
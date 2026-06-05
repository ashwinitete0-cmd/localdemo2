/*#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
int a ,i;
printf("Enter the number of elements: ");
scanf("%d", &a);
for(i=2; i<a; i++)
{
    if(a%i==0)
    {
        printf("The number is not prime.\n");
        break;
        
    }  
} 
if(i==a)
{
         printf("the number is prime %d\n",a);
}
return 0;


}*/
/*

#include <stdio.h>
int main(void)
{
    char ch = 'A';
    printf("The value of character is %c\n", ch);
    return 0;   
}
*/

/*
// this is three number swep program.
#include <stdio.h>
int main(void)
{
    int a ,b,c,next;
    a=10;
    b=20;   
    c=30;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b); 
    printf("The value of c is %d\n",c);
    next=a;
    a=b;
    b=c;
    c=next;
    printf("The swept value of a is %d\n",a);
    printf("The swept value of b is %d\n",b);     
    printf("The swept value of c is %d\n",c);
return 0;
}*/

#include <stdio.h>
int get(int a,int b);
int main(void)  
{
   int a,b;
   printf("Enter the value of a and b: ");  
   scanf("%d %d",&a,&b);
    get(a,b);
    
return 0;
    
}
get (int a,int b)
{
    int sum;
    sum=a+b;
    printf("The sum of a and b is %d\n",sum);
}
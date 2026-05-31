#include <stdio.h>

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


}
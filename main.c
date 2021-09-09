#include <stdio.h>
#include <stdlib.h>
int isPerfect(int num){
    int i = 1;
    int total = 0;
   while(i < num){
      if(!(num % i))
         total += i;
    i++;
   }
   if(total == num)
      return  1;
   else       
   return 0;

}

int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d",&num);
    if(isPerfect(num))
        printf("%d  number is the perfect number",num);
    else
        printf("%d number is the perfect number not",num);
    return 0;
}

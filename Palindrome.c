#include <stdio.h>

int main()
{
    int num,originalNum,reverse=0;

    printf("Enter a NUmber: ");
    scanf("%d",&num);

    originalNum=num;

    while(num != 0){
      reverse = reverse * 10 + num % 10;
      
      num=num / 10;

    }

    if (originalNum == reverse){
        printf("Palindrome number\n");
    }
    else{
        printf("Not a Palindrome number\n");
    }

    return 0;
}

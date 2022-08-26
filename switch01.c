#include<stdio.h>
#include<math.h>
int main(){
    int score;
  printf("enter your score (0-100):");  
scanf("%d",&score);
switch(score/10)
{
    case 10:
    case 9:
    printf("your grade is A\n");
    break;
    case 8:
    printf("your grade is B\n");
    break;
    case 7:
    printf("your grade is C\n");
    break;
    case 6:
    printf("your grade is D\n");
    break;
    case 5:
    printf("your grade if F\n");
    break;
    defalt:
    printf("grade F or you are fail");
    break;
}
return 0;
}
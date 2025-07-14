#include<stdio.h>
int main()
{

int tk;

printf("how many tk I have: ");

//int tk;
scanf("%d",&tk);



  if( tk >=5000)
  {
      printf("I will go to cox's bazar .");

      if( tk >= 10000)
      {
        printf("\nI will go to Saint martin .");
      }
      else
      {
          printf("\nI will come back to home.");
      }
  }
  else
  {
      printf("Not going anywhere.");
  }
   return 0;
}

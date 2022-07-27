#include<stdio.h>
int main()
{
   int choice;
   long num1, num2, x;
   printf("Please choose your option:"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Squares"
          "\n6 = exit"
          "\n\nChoice: ");
   scanf("%d", &choice);
   //while loop check whether the choice is in the given range
   while(choice < 1 || choice > 6)
   {
      printf("\nPlease choose the above mentioned option."
             "\nChoice: ");
      scanf("%d", &choice);
   }
   return 0; 
   }

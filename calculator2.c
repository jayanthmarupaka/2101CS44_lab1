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
   switch (choice)
   {
   case 1:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 + num2;
      printf("Sum = %ld", x);
      break;
   case 2:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 - num2;
      printf("Subtraction = %ld", x);
      break;

   }
   return 0;
}

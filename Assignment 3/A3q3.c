// 3. write a program which accept number from user  and print even factors of that number.
// Input : 36
// Output :2 6 12 18



#include"HeaderA3q3.h"
 
  int main()
  {
      int iValue=0;
   
      printf("Enter number\n");
      scanf("%d",&iValue);
  
      DisplayEvenFactor(iValue);

      return 0;
 }
// write a program which accept one number from user and print that number of even numbers on screen.  
//Input : 7
//Output : 2 4 6 8 10 12 14

 
  #include"HeaderA3q1.h"

  int main()
  {
    int iValue=0;
 
    printf("Enter number"); 
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
  }

  
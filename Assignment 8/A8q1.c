// 1.Write a program which accept number from user and print that number of $ & *

// Input  : 5 
// Output : $  *  $  *  $  *  $  *  $  *

// Input  : 3
// Output : $  *  $  *  $  *  

// Input  : -3
// Output : $  *  $  *  $  * 

  #include<stdio.h>

  void Patteren(int iNo)
  {
    int iCnt=0;

    if(iNo<0)
    {
    iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       printf(" $\t*\t ",iCnt);
     
    }

  }

  int main()
  {
     int iValue=0;
     
     printf("Enter number : ");
     scanf("%d",&iValue);

     Patteren(iValue);

   return 0;
  } 
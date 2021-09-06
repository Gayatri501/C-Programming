//  2. Write a program accept number from user and display its factors in decreasing order
// Input  : 12
// Output : 6 4 3 2 1

 #include<stdio.h>

 void FactRev(int iNo)
 {
    int iCnt=0;
     if(iNo<0)
     {
      iNo=-iNo;
     }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
      if((iNo%iCnt)==0)
      {
         printf("%d\n",iCnt); 
      }
    }    

 }
  int main()
  {
   int iValue=0;
 
   printf("Enter the Number");
   scanf("%d",&iValue);

   FactRev(iValue);     
         
    return 0;
  } 
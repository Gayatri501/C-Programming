// 4. Write a program accept number from number  from user and return summation of all its Non Factors

// Input  : 12
// Output : 50

// Input  : 10
// Output : 37

 #include<stdio.h>
 
    int SumNonFact(int iNo)
{
    int iCnt=0;
     int iSum = 0;
   
    if(iNo<0)
    {
      iNo=-iNo;
    
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
         if((iNo%iCnt)!=0)
         {
              iSum = iSum + iCnt;
         
         }
    }

   return iSum;
}

   
 int main()
 {
    int iValue=0;
    int iRet=0;
   
    printf("Enter number");
    scanf("%d",&iValue);  
 
    iRet = SumNonFact(iValue);
   
    printf("%d\n",iRet);
   
    return 0;
 }
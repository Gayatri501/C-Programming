/*  1.write a program which accept number from user and display its multiplication of factors.   */

//Input : 12
//Output : 144  (1 * 2 * 3 * 4 * 6)

//Input : 13
//Output : 1  (1)

//Input : 10
//Output : 10  (1 * 2 * 5)


  #include<stdio.h>

   int iMult(int iNo)
   {
      int iCnt;
      int iMult1=1;      

      if(iNo<0)
      {
        iNo=-iNo;
      }

     for(iCnt=1;iCnt<iNo;iCnt++)
    {
       
      if((iNo % iCnt)==0)
      { 
     
         iMult1=iMult1*iCnt;
      }
    }
       return iMult1;
   }
//Tme Complexity = O(N)


  int main()
  {

    int iValue=0;
    int iRet=0;
    
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=iMult(iValue);
   
    printf("%d",iRet);

    return 0 ;
  }

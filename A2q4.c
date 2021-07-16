/*  4. Accept two number from user and display first number in second number of times */

 #include<stdio.h>

 void Display(int iNo,int ifrequency)
 {
  
     int iCnt=0;
   
     if(ifrequency==0)
     {
       return;
     } 
     if(ifrequency<0)
     {
       ifrequency=-ifrequency;
     }
    
  
     for(iCnt=1;iCnt<=ifrequency;iCnt++) 
     {
        printf("%d\t",iNo);
     }  

 }
  
  int main()
  {
    int iValue=0;
    int iCount=0;
    
    printf("Enter Number: ");
    scanf("%d",&iValue);
 
    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
      
    return 0;
  }
  
   
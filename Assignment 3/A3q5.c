//Accept on character from user and check wheather that character is Vowel(a,e,i,o,u) or not.

//Input : E   Output :TRUE
//Input : d   Output :FALSE


#include"HeaderA3q5.h"

  int main()
  {
   char cValue='\0';
   BOOL bRet=FALSE;

   printf("Enter character\n");
   scanf("%c",&cValue);
 
   bRet=ChkVowel(cValue);

   if(bRet==TRUE)
   {
     printf("It is Vowel");
   }
  else 
   {
  
     printf("It is not Vowel");
    }
  return 0;
 }

#include <stdio.h>
#include <string.h>

int main()
{
    int len,mid,k,i,j,space;
   char str[100];
   scanf("%s",&str);
   len=strlen(str);
   mid=len/2;
   k=mid;
   for(i=0;i<=len;i++){
       k=mid;
       for(space=0;space<=len-i;space++){
           printf(" ");
       }
       for(j=1;j<=i;j++){
           
               if(k==len){
                   k=0;
               }
               printf("%c",str[k++]);
           }
          
       printf("\n");
   }
   return 0;
}

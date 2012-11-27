#include <stdio.h>

main(){
int s,w,k,a,b;
for (a=0;a<11;a++)
b=-1;	

  for (w=0;w<10;w++){
  b++; 
   printf("------");
   s=0;
   
   for (k=0;k<10;k++){
    s=s+b;
    
    printf("|%5d|", s);
    
    
    
  }
 }
}

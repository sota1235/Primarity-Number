#include<stdio.h>

int main(void){
  int c,n,i;
  for(i=2;i<=100;i++){
    for(c=2;c<=i;c++){
      if(i%c==0){
        n++;
      }
    }
    if(n==1){
      printf("%d is primarity number!\n", i);
    }
  }
}

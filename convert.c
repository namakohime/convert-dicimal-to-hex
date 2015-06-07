#include <stdio.h>
#include <stdlib.h>

char dic_to_hex(int num, int deg);

int main( ){
  int a = 0;
  scanf("%d",&a);
  char num[5];

  num[0]=dic_to_hex(a,4);
  num[1]=dic_to_hex(a,3);
  num[2]=dic_to_hex(a,2);
  num[3]=dic_to_hex(a,1);
  printf("%s", num);
  return 0;
}

char dic_to_hex(int num, int deg){ 

  int res;
  int i;
  
  for(i=0; i<deg; i++){
    res=num%16;
    num/=16;
  }
  
  if(res>=10){
      res -= 10;
      return (char)('A' + res);
  }else return (char)('0' + res);

}

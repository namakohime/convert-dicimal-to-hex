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
  if(deg==4){
    res=num/4096;
  }else if(deg==3){
    res=(num-(num/4096)*4096)/256;
  }else if(deg==2){
    int a = num - (num/4096)*4096;
    res=(a-(a/256)*256)/16;
  }else if(deg==1){
    res=num%16;
  }
  if(res>=10){
      res -= 10;
      return (char)('A' + res);
  }else return (char)('0' + res);

}

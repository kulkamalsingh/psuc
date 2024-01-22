#include"stdio.h"

int main(){
  
  char c;
  printf("enter any english alphabate :");
  scanf("%c",&c);

if(c=='a'||c=='e' || c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O' || c=='U'){
    printf("given english alphabate '%c' is vowel",c);
}
else{
    printf("given english alphabate '%c' is consonent",c);
}


    return 0;
}
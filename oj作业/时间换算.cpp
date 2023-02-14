#include<stdio.h>

int main()
{
    int BJT,UTC;
    scanf("%d",&BJT);
    
    if(BJT>=800){
     UTC=BJT-800;
    }else{
     UTC=(24-(8-BJT/100))*100+BJT%100;
    }
    
    printf("%d",UTC);
    
    return 0;
}

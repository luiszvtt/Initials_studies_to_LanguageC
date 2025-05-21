#include <stdio.h>

int main()
{
    int vi,vf,c;
    printf("Digite o número para valor inicial: ");
    scanf("%d",&vi);
    
    printf("Digite o número para valor final: ");
    scanf("%d",&vf);
    c=0;
    if(vi==vf){
        printf(" %d",vi);
        return 1;
    }
    while(vi<=vf){
        printf(" %d",vi);
        vi++;
        c++;
        if(c==10) break;
    }
    while(vi>=vf){
        printf(" %d",vi);
        vi--;
         c++;
        if(c==10) break;
    }
    
    return 0;
}

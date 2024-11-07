#include <stdio.h>
int main(){
    int num;
    for(num=1; num<=200; num++){
        if(num % 8 == 0)/* o %8 é para aparecer apenas os multiplos de 8*/{
            printf("%d\n",num);
        }
    }
    return 0;
    

}
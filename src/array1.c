#include <stdio.h>

int main(){
    int num[] = {10,5,9,4,0};
    //printf("%d\n",num[0]); 
    int p = 0;
    while (p<=4/* condition */)
    {
       printf("%d -> %p\n", num[p], &num[p]); 
       p++;/* code */
    }
    
    return 0;
}
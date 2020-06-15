#include <math.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

int n; 

scanf("%d",&n);

if( n%2 == 1 || (n > 5 && n < 21))

    printf("Weird");

else

    printf("Not Weird");

return 0;
}

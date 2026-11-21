#include <stdio.h>
#include<math.h>
// int fact(a){
//     for(int x = 1; x<=a; x++){
//     a = a*x;
// }
// }
int main(){
    
    int b=1;
    for(int i=1; i<=7; i++){
        b=i/fact(i);
    }
    
    printf("%d", b);
    return 0;
}

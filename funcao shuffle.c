#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int shuffle(int *x,int n, int a, int b ){
    if((a<b)&&(b-a+1<=n)){
          int m=b-a+1;
          int y[m];

        for(int i=0;i<m;i++)
            y[i] =a+1;

        for(int i=m-1;i>0;i--){
            int k=rand()%i;
            int u=y[i];
            y[i]=y[k];
            y[k]=u;
        }
        for(int i=0;i<n;i++)
            x[i]=y[i];

    }else {
        return 0;

    }
}
int main() {
    printf("Hello, World!\n");
    return 0;
}
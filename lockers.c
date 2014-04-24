#include <stdio.h>
#include <assert.h>

//poop

int countArray(int * str, int n){
    int c = 0;
    int i;
    for (i = 0; i < n; i++) {
        c += str[i];
    }
    return c;
}


int factor(int f, int o){
    if (o % f == 0) return 1;
    else return -1;
}
    

int lockers(int * lock, int n){
    int i, l;
    for (l = 1; l <= n; l++){
        for (i = 1; i <= l; i++)
            if (factor(i, l)) !char[i];
        return 0;
}

#define N 1000
         
int main(void){
    int answer;
    int lock[N];
    int i;
    for (i = 0; i < N; i++)
        lock[i] = 1;
    answer = lockers(lock, N);
    assert(!answer);
    answer = countArray(lock, N);
    printf("%d\n", answer);
 return 0;
}
    

#include<stdio.h>
int max(int v[],int n){
    int max=v[0];
    for (int i=1;i<n;i++){
        if (v[i]>max)
        max = v[i];
    }
    return max;
}
int min(int v[],int n){
    int min=v[0];
    for (int i=1;i<n;i++){
        if (v[i]<min)
        min = v[i];
    }
    return min;
}
int main(){
    int x, y, n;
    scanf("%d", &n);
    int v[n];
    for (int i=0; i<n; i++){scanf("%d", &v[i]);}
    x=max(v,n);
    y=min(v,n);
    printf("Máximo = %d\nMínimo = %d\n", x, y);
    printf("Amplitude = %d", x-y);

}

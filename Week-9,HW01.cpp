#include <stdio.h>
int main(){
    int s[4];
    for(int i=0;i<4;i++){
        scanf_s"%d",&s[i]);
    }
    for(int i=0;i<4;i++){
        for(int j = i+1;j<4;j++){
            if(s[i]>s[j]){
                int temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%d", s[0]*s[2]);
return 0;
}

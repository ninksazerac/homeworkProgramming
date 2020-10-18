#include <stdio.h>
int main(){
	int i, count = 0, get_p = 0;
	char s[50], p[3] = {1, 0, 0};
	
	scanf_s("%s", &s);
	for(i = 0; i < 50; i++){
		count += 1;
		if(s[i] == '\0'){
			break;
		}
	}
	
	for(i = 0; i < count-1; i++){
		if(s[i] == 'A'){
			if(p[0] == 1 && p[1] == 0){
				p[0] = 0;
				p[1] = 1;
			}else if(p[0] == 0 && p[1] == 1){
				p[0] = 1;
				p[1] = 0;
			}
		}else if(s[i] == 'B'){
			if(p[1] == 1 && p[2] == 0){
				p[1] = 0;
				p[2] = 1;
			}else if(p[1] == 0 && p[2] == 1){
				p[1] = 1;
				p[2] = 0;
			}
		}else if(s[i] == 'C'){
			if(p[0] == 1 && p[2] == 0){
				p[0] = 0;
				p[2] = 1;
			}else if(p[0] == 0 && p[2] == 1){
				p[0] = 1;
				p[2] = 0;
			}
		}
	}
	
	for(i = 0; i < 3; i++){
		if(p[i] == 1){
			get_p = i+1;
			break;
		}
	}
	printf("%d", get_p);
	
	return 0;
}

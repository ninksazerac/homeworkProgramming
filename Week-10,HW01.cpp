#include <stdio.h>
#include <string.h>
int main(){
	int goal[4][4], score[4], check2[4], check3[4], swap = 0;
	char country[4][20], teamswap[20];
	scanf("%s %s %s %s", &country[0], &country[1], &country[2], &country[3]);
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			scanf("%d", &goal[i][j]);
		}
	}
	
	for(int i = 0; i < 4; i++){
		score[i] = 0;
		for(int j = 0; j < 4; j++){
			if(i == j){
				continue;
			}
			else if(goal[i][j] > goal[j][i]){
				score[i] = score[i] + 3;
			}
			else if(goal[i][j] == goal[j][i]){
				score[i] = score[i] + 1;
			}
		}
	}
	for(int k = 0; k < 4; k++){
		check2[k] = 0;
		for(int l = 0; l < 4; l++){
			check2[k] += (goal[k][l] - goal[k][l]);
		}
	}
	
	for(int m = 0; m < 4; m++){
		check3[m] = 0;
		for(int n = 0; n < 4; n++){
			check3[m] += goal[m][n];
		}
	}
	
	for(int o = 2; o >= 0; o--){
		for(int p = 0; p <= o; p++){
			if(score[p] < score[p+1]){
				swap = score[p+1];
				score[p+1] = score[p];
				score[p] = swap;
				strcpy(teamswap, country[p+1]);
				strcpy(country[p+1], country[p]);
				strcpy(country[p], teamswap);
			}
			else if(score[p] == score[p+1]){
				if(check2[p] < check2[p+1]){
					strcpy(teamswap, country[p+1]);
					strcpy(country[p+1], country[p]);
					strcpy(country[p], teamswap);
				}
				else if(check2[p] == check2[p+1]){
					if(check3[p] < check3[p+1]){
						strcpy(teamswap, country[p+1]);
						strcpy(country[p+1], country[p]);
						strcpy(country[p], teamswap);
					}
				}
			}
		}
	}
	for(int q = 0; q < 4; q++){
		printf("%s %d\n", country[q], score[q]);
	}
}

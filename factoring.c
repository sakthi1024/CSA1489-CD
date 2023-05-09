#include<stdio.h>
#include<string.h>
int main(){
	char g[100];
	int i, j,c;
	printf("Enter the production: ");
	scanf("%s", &g);
	
	printf("\n");
	int len = strlen(g);
	int count=0, after;
	for (int i = 0; i < len; i++) {
        if (g[i] == '|') {
            after = i;
        }
    }
    if(g[3]==g[after+1]){
    	printf("%c->%c%c'", g[0],g[3],g[0]);
    	printf("\n");
    	printf("%c'->",g[0]);
    	for (int i = 4; i < len; i++) {
    	
        if (g[i] == '|') {
            break;
        }
        
        printf("%c", g[i]);
    }
    printf("|");
    for (int i = 0; i <=len; i++) {
        if (g[i] == '|') {
            count = 1;
        }
        else if (count) {
            printf("%c",g[i+1]);
        }
    }
    printf("\n");
    
    
	}
}

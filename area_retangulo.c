#include<stdio.h>
void dentro_ret(int, int, int, int, int, int, int*);
int main(){
	
	int x0, y0, x1, y1, x, y, R;
	scanf("%d", &x0);
	scanf("%d", &y0);
	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x);
	scanf("%d", &y);
	dentro_ret(x0, y0, x1, y1, x, y, &R);
	
	if(R==1){
		printf("INTERNO\n");
	}else{
		printf("EXTERNO\n");
	}
	return 0;
}
void dentro_ret(int x0, int y0, int x1, int y1, int x, int y, int *R){
	
	if(x0<x1){
		if(x>=x0 && x<=x1 && y>=y0 && y<=y1){
			*R=1;
		}else{
			*R=0;
		}
	}else if(x1<x0){
		if(x>=x1 && x<=x0 && y>=y0 && y<=y1){
			*R=1;
		}else{
			*R=0;
		}
	}
	
	
}

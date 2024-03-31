#include<cstdio>
#include<cmath>

int main(){
    float n;
	scanf("%f", &n);
    int intn = trunc(n);
	if (n-intn == 0) {
		printf("%d %d\n", intn, intn);
	}else if (n > 0){
        printf("%d %d\n", intn, intn+1);
    }else{
        printf("%d %d\n", intn-1, intn);
    }
}
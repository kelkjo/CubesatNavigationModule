#include<stdio.h>

int main(){
	unsigned long long s;
	unsigned long long lst;
	scanf("%llu", &s);
	if (s == 1){
		printf("%d", 1);
		return 0;
	}
	for (unsigned long long i = 1; i * i < s; i++){
		if ((s % i) == 0){
			lst = i;
			printf("%llu\n", i);
		}
	}
	while (lst != 0){
		if ((s % lst) == 0){
			printf("%llu\n", s / lst);
		}
		lst--;
	}
	return 0;
}

#include <stdio.h>
#include "max.h"
#include "min.h"
#include "var.h"

int main() {
	int n=10;
	int t[10] = {4,9,10,11,12,15,12,9,0,30};
	int maxi,mini;
	float Varr;	
	max(t,n,&maxi);
	min(t,n,&mini);
	var(t,n,&Varr);
	printf("La valeur maximale du tableau est :%d\n",maxi);
	printf("La valeur minimale du tableau est :%d\n",mini);
	printf("La valeur variance du tableau est :%f\n",Varr);
	return 0;
}
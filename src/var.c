#include "var.h"

void var (int t[],int n,float *var){
	int i;
	int M=0;
	*var = 0;
	for (i=0; i<n; i++){
		M+=t[i];
	}
	M/=n;
	for (i=0;i<n; i++){
		*var+=(t[i]-M)*(t[i]-M);
	}
	*var/=n;
}

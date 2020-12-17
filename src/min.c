#include "min.h"

void min (int t[],int n,int *min){
	int i;
	*min = t[0];
	for (i=1; i<n; i++){
		if (t[i] < *min){
			*min = t[i];
		}
	}
}

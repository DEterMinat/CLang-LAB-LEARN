#include <stdio.h>
void main(){
	int *iptr , value;
	value = 5;
	iptr = &value;
	value = *iptr +1;
	printf("Value = %d, *ptr= %d\n",value,*iptr);
}

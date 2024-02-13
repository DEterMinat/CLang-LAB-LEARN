#include <stdio.h>
int main(){
	int *pt,num;
	pt = &num;
	*pt =100;
	printf("%d\n",num);
	(*pt)++;
	printf("%d\n",num);
	(*pt)--;
	printf("%d\n",num);
	return 0;
}

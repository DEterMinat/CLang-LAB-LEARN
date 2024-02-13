#include <stdio.h>
int main(){
	int *ptr,count ,val;
	count =100;
	ptr = &count;
	val = *ptr;
	printf("Count : %d\n",count);
	printf("Ptr : %d\n",ptr);
	printf("Val : %d\n",val);
	printf("*Ptr : %d\n",*ptr);
}

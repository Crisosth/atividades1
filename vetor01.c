#include <stdio.h>
#include <stdlib.h>
void f(int *v)
{
	v[5] = 20;
}

int main()
{
	int v[10], i;
	for(i = 0; i < 10; i++)
	{
		v[i] = 1;
	}
	f(&v);
	printf("%d\n", v[5]);
	
    return 0;
}
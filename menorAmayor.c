
#include<stdio.h>


#define ARREGLO_MAX 100

int main()
{
	int a[ARREGLO_MAX];
	int b[ARREGLO_MAX];
	int d;
	int i;
	int j;
	float mayore;
	int n;
	printf("¿De que tamaño quieres la matriz?\n");
	scanf("%d",&n);
	j = n-1;
	for (i=0;i<=n-1;i+=1)
        {
		printf("Dame el valor que ira en la casilla %d\n",i+1);
		scanf("%d",&a[i]);
            }
	for (i=0;i<=n-2;i+=1)
	{
		if (a[i]<a[i+1]) {
			j = 0;
			b[j] = a[i];
			j = j+1;
		}
    else
        {
			if (a[i]>a[i+j])
			{
				b[j] = a[i];
				j = j-1;
                    }
                        }
		printf("J vale %i\n",j);
	}
	for (i=0;i<=n-1;i+=1)
	{
		printf("[ %d%d]",b[j],b[j+1]);
		printf("\n");
	}
	return 0;
}


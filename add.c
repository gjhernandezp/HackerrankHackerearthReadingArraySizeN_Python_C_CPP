/* Example of reading and size n and an array for Hackerrank or Hackerearth  */
/* and adding the elements                                                   */
/* G. Hernandez                                                              */
 
#include<stdio.h>
 
int main() {
    unsigned long long n =0, add =0;
    unsigned long long *v;
    unsigned long long i;
 
    scanf("%lld", &n); 
 
    v = (unsigned long long *) malloc(n * sizeof(unsigned long long));
    for(i = 0; i < n ; i++)
	{
        scanf("%lld", v + i);
		add = add + v[i];
    }
 
    printf("%lld\n",add);
 
    return 0;
}

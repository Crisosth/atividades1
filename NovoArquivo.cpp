#include <stdio.h>
#include <math.h>
void list_array(unsigned int[], unsigned int);

int main(void) {
   unsigned int primos[100];
   unsigned int primo;
   unsigned int not_primo;
   unsigned int max;
    
    primos[0] = 2;
    primos[1] = 3;
    
    int nao_primos=2, i;
    max=1000000;
    
    for (i = 4; i <= max; i++) {  
    
        primo = 0;
        not_primo = 0;
        while (primo < nao_primos && primos[primo] < sqrt(i) && !not_primo) {
        if (i % primos[primo]==0.0) { 
            not_primo = 1;   
        }
        primo++;
    }

    if(!not_primo){
		primos[nao_primos] = i;
		nao_primos++;
	}
    
}
printf("Os numeros primos ate %u sao: \n", max);
list_array(primos, nao_primos);
return 0;

}
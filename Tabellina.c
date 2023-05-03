#include <stdio.h>

int main(){
	float i;
	int f;
	float o=0;
	printf("Scrivi un numero: ");
	scanf("%f",&i);
	printf("Tabellina di %f:\n",i);
	for(f=1;f<11;f++){
		o=f*i;
		printf("%f\n",o);
	}
	return 0;
}

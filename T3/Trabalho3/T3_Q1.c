#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
char a[50],b[50], c[100];
int i, j = 0;
int tamanho;

for(i=0;i<50;i++) { //Evitar lixo de memória
	a[i] = b[i] = c[i] = c[50+i] = '\0';
}

fflush(stdin);
fgets(a, 50, stdin);
fflush(stdin);
fgets(b, 50, stdin);
fflush(stdin);
strtok(a, "\n");
strtok(b, "\n");

tamanho = strlen(a) + strlen(b);

for(i=0;i<tamanho;i++) {
	if(i%2==0 && a[j]!='\0') {
		c[i] = a[j];
	} else {
		c[i] = b[j];
		j++;
	}
}
puts(c);
return 0;
}


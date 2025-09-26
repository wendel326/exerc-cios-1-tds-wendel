#include <stdio.h>

int main()
{
	int senha=362; // criando uma variavel senha
	printf("digite uma senha: ");// pedindo pra digitar
	scanf("%d", &senha);// digitando uma senha
	int tentativa;

	for (int i = 0; i<10; i++) {
		for (int x = 0; x<10; x++) {
			for (int y = 0; y<10; y++) {
				for (int z = 0; z<10; z++) {
					tentativa = i*1000 + x*100 + y*10 + z;
					if (senha == tentativa) {
						printf ("sua senha e: %d %d %d %d\n", i,x,y,z);
						return 0;
					}
				else {
					printf("tentativa: %d %d %d %d \n", i,x,y,z);
				}
			}// for z
		}// for y
	}// for x
}//for i
}// do main

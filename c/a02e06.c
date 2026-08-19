#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float distancia, preco;
	
	printf("Digite a distancia que deseja percorrer: ");
	scanf("%f", &distancia);
	
	if (distancia <= 200)
	{preco = distancia * 0.50;}
	else {preco = distancia * 0.45;}
	
	printf("O preco da passagem eh: R$ %.2f\n", preco);
	system("pause");	
	return 0;
}

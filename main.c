#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int sexo, idade, cont=0, sintomas;
	char nome[30], cpf[12];
	
	printf("TESTE VIRTUAL COVID-19\n");
	printf("\n");
	
	printf("DADOS CADASTRAIS\n");
	printf("\n");
	printf("Digite o seu nome: \n");
	gets(nome);
	fflush(stdin);
	printf("Digite o seu cpf: \n");
	gets(cpf);
	fflush(stdin);
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	fflush(stdin);
	printf("Digite o seu sexo = [1] FEMININO [2] MASCULINO: \n");
	scanf("%d", &sexo);
	fflush(stdin);
	system("cls");
	system("pause");
	
	printf("SINTOMAS\n");
	printf("\n");
	printf("Tem Febre ? [1] SIM [2] N�O\n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 5;
	printf("Tem dor de cabe�a? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 1;
	printf("Tem secre��o nasal ou espirros? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 1;
	printf("Tem dor/irrita��o na garganta? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 1;
	printf("Tem tosse seca? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 3;
	printf("Tem dificuldade respirat�ria? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 10;
	printf("Tem dores no corpo? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 1;
	printf("Tem diarr�ia? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 1;
	printf("Esteve em contato nos �ltimos 14 dias com algum contaminado por COVIDA-19? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 10;
	printf("Esteve em locais com grandes aglomera��o? [1] SIM [2] N�O \n");
	scanf("%d", &sintomas);
	fflush(stdin);
		if (sintomas == 1)
			cont = cont + 3;
	system("cls");
	
	printf("CONFIRMA��O DE DADOS\n");
	printf("\n");
	printf("NOME %s\n", nome);
	printf("\n");
	printf("IDADE %d\n", idade);
	printf("\n");
	printf("CPF %d\n", cpf);
	printf("\n");
	if (sexo == 1)
		printf("FEMININO\n");
	else
		printf("MASCULINO\n");
	system("pause");
	system("cls");
	
	printf("Resultado\n");
	printf("\n");
	printf("Seu resultado foi: %d \n", cont);
	if ((cont > 0 && cont <= 9))
	{
		printf("Voc� ser� encaminhado para a ala de risco baixo.");
		}
	else if ((cont > 9 && cont <= 19)){
		printf("voc� ser� encaminhado para a ala de medio risco.");
	}
	else if ((cont >= 20)){
		printf("voc� ser� encaminhado para a ala de alto risco.");
	}	
	else if (cont = 0){
		printf("Voc� testou negativo, continue se cuidando.");
	}	
	return 0;
}

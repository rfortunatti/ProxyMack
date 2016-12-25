#include <stdio.h>
#include <cstdlib>

int main ()
{
	int opcao;

	system("cls");
	menuprincipal:
	printf ("Selecione a opcao desejada:\n\n1-Habilitar proxy do Mackenzie\n");
	printf ("2-Desabilitar proxy do Mackenzie\n3-SAIR\n\nOpcao:");
	scanf ("%d", &opcao);

	switch (opcao)
	{
		case 1:
		{
			system ("habilita.bat");
			system ("PAUSE");
			system ("cls");
			goto menuprincipal;
		}
		case 2:
		{
			system ("desabilita.bat");
			system ("PAUSE");
			system ("cls");
			goto menuprincipal;
		}
		case 3:
		{
			return 0;
		}
		default:
		{
			printf ("Opcao invalida! Tente novamente.\n");
			system ("PAUSE");
			system ("cls");
			goto menuprincipal;
		}
	}
}



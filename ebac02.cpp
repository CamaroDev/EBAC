#include <stdio.h> //biblioteca de comunic�o com o usu�rio
#include <stdlib.h> //biblioteca de alocac�o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca�oes de texto por regi�o 

int main ()
    {
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	    system("cls");
	
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem 

	    printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu

	    printf("Escolha a op��o desejada do menu:\n\n");

	    printf("\t1- Registrar Nomes\n");

	    printf("\t2- Consultar Nomes\n");

	    printf("\t3- Deletar Nomes\n\n");
		 
		printf("\t4- Sair  do sistema\n\n");
  	    printf("Op��o: ");//fim do menu
	
	    scanf("%d", &opcao); //armazenando a escolha do usu?rio
	
	    system("cls");
	    
	    
	    switch(opcao)
	    {
	        case 1:
	    	printf("Voc� escolheu o registro de nome!\n");
		    system("pause");
		    break;
		      
		    case 2:
		    printf("Voc� escolheu consultar os nomes!\n");
		    system("pause");
		    break;
		    
		    case 3:
		    printf("Voc� escolheu deletar nomes!\n");
		    system("pause");
		    break;


			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;



		    default:
		    printf("Essa op��o n�o esta disponivel\n");
		    system("pause");
		    break;
	         	          	
	 	        	
	    }
	
	 
	}	
}

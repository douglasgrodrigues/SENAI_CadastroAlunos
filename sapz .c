//---------------------------------------------------------------------------

#include <stdio.h>
#pragma hdrstop
#include <conio.h>
#include <tchar.h>
#include <stdlib.h>

//---------------------------------------------------------------------------

#pragma argsused
  main()
{
	//cadastro dos alunos
	int nascimento_alun[50][100], data_cadastro[50][100], telefone[50][100];
	char nome_aluno[50][100], sexo[50][100], endereco[50][100], profissao_mae[50][100],nome_mae[50][100];
	char cpfAluno[11][100], rgAluno[10][100];
	//cadastro dos professores
	int nascimento_prof[50][100], data_cadastro1[50][100];
	char rg_prof[50][100], cpf_prof[50][100];
	int telefone12[50][100];
	char nome_professor[50][100];
	char sexo12[50][100], endereco_prof[50][100];

	//cadastro das modalidades
	int  idade_minima[50][100], horarioCadastro=0, horarioCadastro2=0;
	char nome_modalidade[50][100], nome_alunomodalidade[50][100], idade_alunomodalidade;
	float valor_modalidade[50][100];

	//cadastro das turmas
	int maximo_alunos[50][100];
	char modalidade_trabalhada[50][100] ;
	int numero_alunosturma;

	//outros
	int opcao, option, p = 0;

	//modalidades
	char teclado, violao, baixo, percucao,  canto;




	//*****************************************************************\\
	//*****                 E.M     Belos Acordes                 *****\\
	//*****************************************************************\\

while ( opcao != 0 )  {

system("color 0a");
// F = cor do fundo
// D = Cor da letra
	   system("cls");
		 printf("\n =========================================\n");
		 printf("\n ===== Bem-Vindo a E.M Belos Acordes =====\n");
		 printf("\n =========================================\n");
		 printf("\n =========          MENU         =========\n");
		 printf("\n ====    [1] CADASTRO DE ALUNOS       ====\n");
		 printf("\n ====    [2] CADASTRO DE PROFESSORES  ====\n");
		 printf("\n ====    [3] CADASTRO DE MODALIDADES  ====\n");
		 printf("\n ====    [4] CADASTRO DE TURMAS       ====\n");
		 printf("\n ====    [5] CADASTRO DE MATRICULAS   ====\n");
		 printf("\n ====    [0] SAIR DO PROGRAMA         ====\n");
		 printf("\n =========================================\n");
		 printf("\n =====          B.A / © 2013          ====\n");
		 printf("\n =========================================\n");
		 printf("\n ======     O que deseja fazer?      =====\n");


		 scanf("%d", &opcao);
		 system("cls");
		 system("color 0f");
		 switch (opcao) {

case 1:
p++;

		printf("\ninforme nome do aluno completo:");
		gets(nome_aluno[p]);
		printf("\n---------------------------------------\n");
		printf("%s %d", "o codigo do aluno e: ", p);
		printf("\n---------------------------------------\n");
		printf("\ndigite a data de nascimento do aluno:");
		gets(nascimento_alun[p]);
		printf("\ndigite a data em que foi feito o cadastro:");
		gets(data_cadastro[p]);

		// valida os digitos do cpfAluno
		fflush(stdin);  //limpa a memoria
		do{
		printf("\ndigite o cpf: (11 digitos)");
		scanf("%s",&cpfAluno[p]);
		} while (strlen(cpfAluno[p]) != 11);
		getchar();
		getchar();
		// valida os digitos do RgAluno
		do{
		printf("\ndigite o rg: (10 digitos)");
		scanf("%s",&rgAluno[p]);
		} while (strlen(rgAluno[p]) != 10);
		getchar();
		getchar();
		// fim validacao

		printf("\ndigite o sexo do aluno:");
		gets(sexo[p]);
		printf("\ndigite o endereco do aluno:");
		gets(endereco[p]);
		printf("\ndigite um numero de telefone para contato:");
		scanf("%d", &telefone);
		printf("\ninforme a profissao da mae:");
		getchar(); //para a validacao
		gets(profissao_mae[p]);
		printf("\ninforme o nome da mae:");
		gets(nome_mae[p]);

system("cls");

getche();
break;

case 2:
p++;

		  printf("\ninforme nome completo do professor:");
		  gets(nome_professor[p]);
		  printf("\n---------------------------------------\n");
		  printf("%s %d", "o codigo do professor e:", p);
		  printf("\n---------------------------------------\n");
		  printf("\ndigite a data de nascimento do professor:");
		  gets(nascimento_prof[p]);
		  printf("\ndigite a data em que esta sendo feito o cadastro:");
		  gets(data_cadastro1[p]);



		fflush(stdin);  //limpa a memoria
		// valida os digitos do cpfAluno
		do{
		printf("\ndigite o cpf: (11 digitos)");
		scanf("%s",&cpf_prof[p]);
		} while (strlen(cpf_prof[p]) != 11);
		getchar();
		getchar();
		// valida os digitos do RgAluno
		do{
		printf("\ndigite o rg: (10 digitos)");
		scanf("%s",&rg_prof[p]);
		} while (strlen(rg_prof[p]) != 10);
		getchar();
		getchar();    // fim validacao

		printf("\ndigite o endereco do professor:");
		gets(endereco_prof[p]);
		printf("\ndigite o sexo do professor:");
		gets(sexo12[p]);
		printf("\ndigite o telefone:");
		gets(telefone12[p]);

system("cls");

getche();
break;

case 3:
p++;

				  printf("\n _______________________________________________ \n");
				  printf("\n|       MODALIDADES OFERECIDAS PELA ESCOLA      |\n");
				  printf("\n|   Digite a letra correspondente a modalidade  |\n");
				  printf("\n|           1 - teclado                         |\n");
				  printf("\n|           2 - violao                          |\n");
				  printf("\n|           3 - baixo                           |\n");
				  printf("\n|           4 - percucao                        |\n");
				  printf("\n|           5 - canto                           |\n");
				  printf("\n            0 - voltar ao menu                  |\n");
				  printf("\n|_______________________________________________|\n");


		 scanf("%d", &option);
		 system("cls");
		 switch (option) {

		 case 1:
		 p++;


				  printf("\n _______________________________________________ \n");
				  printf("\n|       MODALIDADES OFERECIDAS PELA ESCOLA      |\n");
				  printf("\n|   Digite a letra correspondente a modalidade  |\n");
				  printf("\n|           1 - teclado                         |\n");
				  printf("\n|           2 - violao                          |\n");
				  printf("\n|           3 - baixo                           |\n");
				  printf("\n|           4 - percucao                        |\n");
				  printf("\n|           5 - canto                           |\n");
				  printf("\n            0 - voltar ao menu                  |\n");
				  printf("\n|_______________________________________________|\n");

				  printf("\n <--! a idade minima para este curso e de 5 anos !--> \n");
				  printf("\n digite  o nome do aluno:");
				  gets(nome_alunomodalidade[p]);
				  printf("\n informe sua idade:");
				  scanf("%d", &idade_alunomodalidade );

system("cls");

if ( idade_alunomodalidade >= 5 ) {

system("color f0");

				  printf("\n------------------------------------------------------------\n");
				  printf("%s %d","\n* o codigo da modalidade e:", p);
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* a modalidade escolhida foi: teclado\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* o valor para o curso e de: R$ 3,12 por hora\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* sendo 4 horas por dia e 3 vezes na semana");
				  printf("\n------------------------------------------------------------\n");


}else{
				 printf("\n|________________________________________|\n");
				 printf("\n|     <----   IDADE INVALIDA  ---->      |\n");
				 printf("\n|________________________________________|\n");
				 printf("\n|               * MENU *                 |\n");
				 printf("\n|        1-CADASTRO DE ALUNOS            |\n");
				 printf("\n|        2-CADASTRO DE PROFESSORES       |\n");
				 printf("\n|        3-CADASTRO DE MODALIDADES       |\n");
				 printf("\n|        4-CADASTRO DE TURMAS            |\n");
				 printf("\n|        5-CADASTRO DE MATRICULAS        |\n");
				 printf("\n|________________________________________|\n");
				 printf("\n|////////////////////////////////////////|\n");
				 printf("\n|________________________________________|\n");
				 printf("\n           O que deseja fazer?           |\n");
				 scanf("%d", &opcao);
}


getche();
break;

		case 2:
		p++;

				  printf("\n _______________________________________________ \n");
				  printf("\n|       MODALIDADES OFERECIDAS PELA ESCOLA      |\n");
				  printf("\n|   Digite a letra correspondente a modalidade  |\n");
				  printf("\n|           1 - teclado                         |\n");
				  printf("\n|           2 - violao                          |\n");
				  printf("\n|           3 - baixo                           |\n");
				  printf("\n|           4 - percucao                        |\n");
				  printf("\n|           5 - canto                           |\n");
				  printf("\n            0 - voltar ao menu                  |\n");
				  printf("\n|_______________________________________________|\n");

				  printf("\n<--! a idade minima para este curso e de 7 anos !-->\n");

				  printf("\n digite o nome do aluno:");
				  gets(nome_alunomodalidade[p]);
				  printf("\n informe sua idade:");
				  scanf("%d", &idade_alunomodalidade);

system("cls");

if ( idade_alunomodalidade >= 7 ) {

		  system("color f0");

				  printf("\n------------------------------------------------------------\n");
				  printf("%s %d","\n* o codigo da modalidade e:", p);
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* a modalidade escolhida foi: violao\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* o valor para o curso e de: R$ 3,12 por hora\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* sendo 4 horas por dia e 3 vezes na semana");
				  printf("\n------------------------------------------------------------\n");

}   else {

				 printf("\n =========================================\n");
				 printf("\n ===  <----   IDADE INVALIDA  ---->    ===\n");
				 printf("\n =========================================\n");
				 printf("\n =========        * MENU *       =========\n");
				 printf("\n ====    [1] CADASTRO DE ALUNOS       ====\n");
				 printf("\n ====    [2] CADASTRO DE PROFESSORES  ====\n");
				 printf("\n ====    [3] CADASTRO DE MODALIDADES  ====\n");
				 printf("\n ====    [4] CADASTRO DE TURMAS       ====\n");
				 printf("\n ====    [5] CADASTRO DE MATRICULAS   ====\n");
				 printf("\n =========================================\n");
				 printf("\n           O que deseja fazer?           |\n");
				 scanf("%d", &opcao);
}


getche();
break;

		case 3:
		p++;

				  printf("\n _______________________________________________ \n");
				  printf("\n|       MODALIDADES OFERECIDAS PELA ESCOLA      |\n");
				  printf("\n|   Digite a letra correspondente a modalidade  |\n");
				  printf("\n|           1 - teclado                         |\n");
				  printf("\n|           2 - violao                          |\n");
				  printf("\n|           3 - baixo                           |\n");
				  printf("\n|           4 - percucao                        |\n");
				  printf("\n|           5 - canto                           |\n");
				  printf("\n            0 - voltar ao menu                  |\n");
				  printf("\n|_______________________________________________|\n");

				  printf("\n<--! a idade minima para este curso e de 7 anos !-->\n");

				  printf("\n digite o nome do aluno:");
				  gets(nome_alunomodalidade[p]);
				  printf("\n informe sua idade:");
				  scanf("%d", &idade_alunomodalidade);

system("cls");

if ( idade_alunomodalidade >= 7 ) {

				 system("color f0");

				  printf("\n------------------------------------------------------------\n");
				  printf("%s %d","\n* o codigo da modalidade e:", p);
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* a modalidade escolhida foi: baixo\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* o valor para o curso e de: R$ 3,12 por hora\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* sendo 4 horas por dia e 3 vezes na semana");
				  printf("\n------------------------------------------------------------\n");

} else   {

				 printf("\n =========================================\n");
				 printf("\n ===  <----   IDADE INVALIDA  ---->    ===\n");
				 printf("\n =========================================\n");
				 printf("\n =========        * MENU *       =========\n");
				 printf("\n ====    [1] CADASTRO DE ALUNOS       ====\n");
				 printf("\n ====    [2] CADASTRO DE PROFESSORES  ====\n");
				 printf("\n ====    [3] CADASTRO DE MODALIDADES  ====\n");
				 printf("\n ====    [4] CADASTRO DE TURMAS       ====\n");
				 printf("\n ====    [5] CADASTRO DE MATRICULAS   ====\n");
				 printf("\n =========================================\n");
				 printf("\n           O que deseja fazer?           |\n");
				 scanf("%d", &opcao);

}



getche();
break;

		case 4:
		p++;

				  printf("\n _______________________________________________ \n");
				  printf("\n|       MODALIDADES OFERECIDAS PELA ESCOLA      |\n");
				  printf("\n|   Digite a letra correspondente a modalidade  |\n");
				  printf("\n|           1 - teclado                         |\n");
				  printf("\n|           2 - violao                          |\n");
				  printf("\n|           3 - baixo                           |\n");
				  printf("\n|           4 - percucao                        |\n");
				  printf("\n|           5 - canto                           |\n");
				  printf("\n            0 - voltar ao menu                  |\n");
				  printf("\n|_______________________________________________|\n");

				  printf("\n <--! a idade minima para este curso e de 7 anos !-->\n");

				  printf("\n digite o nome do aluno:");
				  gets(nome_alunomodalidade[p]);
				  printf("\n informe sua idade:");
				  scanf("%d", &idade_alunomodalidade);

system("cls");

if ( idade_alunomodalidade >= 7 ) {

		  system("color f0");

				  printf("\n------------------------------------------------------------\n");
				  printf("%s %d","\n* o codigo da modalidade e:", p);
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* a modalidade escolhida foi: percucao\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* o valor para o curso e de: R$ 3,12 por hora\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* sendo 4 horas por dia e 3 vezes na semana");
				  printf("\n------------------------------------------------------------\n");




}else {

				 printf("\n =========================================\n");
				 printf("\n ===  <----   IDADE INVALIDA  ---->    ===\n");
				 printf("\n =========================================\n");
				 printf("\n =========        * MENU *       =========\n");
				 printf("\n ====    [1] CADASTRO DE ALUNOS       ====\n");
				 printf("\n ====    [2] CADASTRO DE PROFESSORES  ====\n");
				 printf("\n ====    [3] CADASTRO DE MODALIDADES  ====\n");
				 printf("\n ====    [4] CADASTRO DE TURMAS       ====\n");
				 printf("\n ====    [5] CADASTRO DE MATRICULAS   ====\n");
				 printf("\n =========================================\n");
				 printf("\n           O que deseja fazer?           |\n");
				 scanf("%d", &opcao);



}



getche();
break;

		case 5:
		p++;

				  printf("\n _______________________________________________ \n");
				  printf("\n|       MODALIDADES OFERECIDAS PELA ESCOLA      |\n");
				  printf("\n|   Digite a letra correspondente a modalidade  |\n");
				  printf("\n|           1 - teclado                         |\n");
				  printf("\n|           2 - violao                          |\n");
				  printf("\n|           3 - baixo                           |\n");
				  printf("\n|           4 - percucao                        |\n");
				  printf("\n|           5 - canto                           |\n");
				  printf("\n            0 - voltar ao menu                  |\n");
				  printf("\n|_______________________________________________|\n");

				  printf("\n <--! a idade minima e de 7 anos !-->\n");

				  printf("\n digite o nome do aluno:");
				  gets(nome_alunomodalidade[p]);
				  printf("\n informe sua idade:");
				  scanf("%d", &idade_alunomodalidade);

system("cls");

if ( idade_alunomodalidade >= 7 ) {

		  system("color f0");
				  printf("\n------------------------------------------------------------\n");
				  printf("%s %d","\n* o codigo da modalidade e:", p);
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* a modalidade escolhida foi: canto\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* o valor para o curso e de: R$ 3,12 por hora\n");
				  printf("\n------------------------------------------------------------\n");
				  printf("\n* sendo 4 horas por dia e 3 vezes na semana");
				  printf("\n------------------------------------------------------------\n");

}else {

				 printf("\n =========================================\n");
				 printf("\n ===  <----   IDADE INVALIDA  ---->    ===\n");
				 printf("\n =========================================\n");
				 printf("\n =========        * MENU *       =========\n");
				 printf("\n ====    [1] CADASTRO DE ALUNOS       ====\n");
				 printf("\n ====    [2] CADASTRO DE PROFESSORES  ====\n");
				 printf("\n ====    [3] CADASTRO DE MODALIDADES  ====\n");
				 printf("\n ====    [4] CADASTRO DE TURMAS       ====\n");
				 printf("\n ====    [5] CADASTRO DE MATRICULAS   ====\n");
				 printf("\n =========================================\n");
				 printf("\n           O que deseja fazer?           |\n");
				 scanf("%d", &opcao);
}
}



getche();
break;

case 4:

p++;

		   printf("\ninforme a modalidade a ser trabalhada nesta turma:");
		   gets(modalidade_trabalhada[p]);
		   printf("\n -------------------------------------------------------------------\n");
		   printf("\n ! esta turma nao pode exceder o numero maximo de 20 alunos ! \n");
		   printf("\n -------------------------------------------------------------------\n");
		   printf("%s %d","\n o codigo da turma e:", p);
		   printf("\n -------------------------------------------------------------------\n");
		   printf("\n informe o numero de alunos na turma:");
		   scanf("%d", &numero_alunosturma);

if (numero_alunosturma <= 20) {

		   printf("\n------------------------------------------------------------------------\n");
		   printf("\n* digite a hora em que esta sendo feito o cadastro: ");
		   scanf("%d", &horarioCadastro);
		   printf(":");
		   scanf("%d",&horarioCadastro2);
		   printf("\n------------------------------------------------------------------------\n");
		   printf("\n* digite o codigo do professor:");
		   scanf("%d", &p);
system("cls");
		   printf("\n========================================================================\n");
		   printf("%s %s","\nesta turma sera lecionada pelo professor:", nome_professor[p]);
		   printf(" ");
		   printf("\n========================================================================\n");
		   printf("\n===============            HORARIOS DA ESCOLA            ===============\n");
		   printf("\n==== Aulas realizadas tres vezes por semana podendo ser agendadas   ====\n");
		   printf("\n==========      Horario da aula - manha: 09h as 11h           ==========\n");
		   printf("\n==========      Horario da aula - tarde: 14h as 16h   	      ==========\n");
		   printf("\n==========      Horario da aula - noite: 19h as 21h           ==========\n");
		   printf("\n========================================================================\n");

} else {
			printf("  <-----!  esta turma excedeu o numero de alunos  !----->");
}



getche();
break;

case 5:
		  printf("\ndigite o codigo da turma:");
		  scanf("%d", &p);
		  printf("%s %s", "\n modalidade:", modalidade_trabalhada[p]);
					  printf("\n---------------------------------");
		  // consulta o aluno - ok
		  printf("\n digite o codigo do aluno:");
		  scanf("%d", &p);
		  printf("%s %s","\n o aluno:", nome_aluno[p]);
					  printf("\n---------------------------------\n");
		  //cosulta  o professor    ok
		  printf("\n digite o codigo do professor: ");
		  scanf("%d", &p);
		  printf("%s %s", "\n professor:", nome_professor[p]);
					  printf("\n---------------------------------");
		  // consulta horario do cadastro
		  printf("%s %d %s %d", "\nhorario do cadastro:", horarioCadastro,":",horarioCadastro2);
getche();
break;



} // final while
}//switch opcao

	return 0;
}//final programa
//---------------------------------------------------------------------------

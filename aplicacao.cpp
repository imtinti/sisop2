#include "../global.h"

//cria o diretorio "sync_dir" e inicia atividades de sincroniza��o
bool get_sync_dir() {


}



// lista os arquivos salvos no diretorio "sync_dir"
bool list_client(){


}



// lista os arquivos salvos no servidor associado ao usu�rio
bool list_server() {


}


// envia o arquivo filename.ext para o servidor associado ao usu�rio
bool upload(char* path, char* filename) {


}


//faz uma "copia n�o sincronizada" do arquivo filename.ext do servidor para\n 
//o diret�rio local (de onde o servidor foi chamado)
bool download(char* path, char* filename){

}



bool delete(char* path, char* filename){


}


bool exit() {


}



using namespace std;
int main() {
//sobre atributos de entrada na fun��o main:: https://docs.microsoft.com/pt-br/cpp/cpp/main-function-command-line-args?view=msvc-170




	//testa se a quantidade de par�metros de entrada � igual a 3
	if (!qntdArgumentosOK(argc))
	{
		printf("N�mero incorreto de par�metros\n");
		printf("Exemplo: ./myClient <username> <server_ip_address> <port> ");
		return 0;
	}



	 if(trataEntrada(inputUSERNAME, argv[0]) //testa se � um nome v�lido
		username = argv[0];//captura o primeiro argumenrto de entrada do usu�rio
	 else
		 printf("Nome de usu�rio inv�lido\n");
		 return 0;


	if(trataEntrada(inputIP, argv[1]))//testa se � um IP v�lido
		server_ip_address = argv[1] //captura o segundo argumento de entrada do usu�rio
	else
		printf("Ip inv�lido\n");
		return 0;

	if (trataEntrada(inputPORT, arqv[2]))//testa se � uma porta v�lida (algum valor inteiro maior q zero)
		port = arqv[2]; //captura o terceiro argumento de entrada do usu�rio
	else
		printf("Port inv�lido\n");


		while (true) {


			getUserInput();

			//trata a entrada do usu�rio. invoca as devidas fun��es de acordo com o comando de entrada do usu�rio
			//a vari�vel userInput � passada como par�metro para fun��o que retorna um inteiro associado aquela string
			switch (str2int(comando))
			{

			case str2int(GET_SYNC_DIR):

				get_sync_dir()

					break;

			case str2int(LIST_CLIENT):

				list_client();

				break;

			case str2int(LIST_SERVER):

				list_server();

				break;

			case str2int(UPLOAD):


				upload(path, filename);

				break;

			case str2int(DOWNLOAD):


				break;

			case str2int(DELETE):


				break;


			default:

			}

		}

		return 0;

	}
#include "global.h"

//cria o diretorio "sync_dir" e inicia atividades de sincronização
bool get_sync_dir() {


}; 



// lista os arquivos salvos no diretorio "sync_dir"
bool list_client(){


}; 



// lista os arquivos salvos no servidor associado ao usuário
bool list_server() {


};


// envia o arquivo filename.ext para o servidor associado ao usuário
bool upload(char* path, char* filename) {


}; 


//faz uma "copia não sincronizada" do arquivo filename.ext do servidor para\n 
//o diretório local (de onde o servidor foi chamado)
bool download(char* path, char* filename);



bool delete(char* path, char* filename){


};


bool exit() {


};



using namespace std;
int main() {
//sobre atributos de entrada na função main:: https://docs.microsoft.com/pt-br/cpp/cpp/main-function-command-line-args?view=msvc-170




	//testa se a quantidade de parâmetros de entrada é igual a 3
	if (!qntdArgumentosOK(argc))
	{
		printf("Número incorreto de parâmetros\n");
		printf("Exemplo: ./myClient <username> <server_ip_address> <port> ");
		return 0;
	}

	 if(trataEntrada(inputUSERNAME, argv[0]) //testa se é um nome válido
		username = argv[0];//captura o primeiro argumenrto de entrada do usuário
	 else
		 printf("Nome de usuário inválido\n");
		 return 0;


	if(trataEntrada(inputIP, argv[1]))//testa se é um IP válido
		server_ip_address = argv[1] //captura o segundo argumento de entrada do usuário
	else
		printf("Ip inválido\n");
		return 0;

	if (trataEntrada(inputPORT, arqv[2]))//testa se é uma porta válida (algum valor inteiro maior q zero)
		port = arqv[2]; //captura o terceiro argumento de entrada do usuário
	else
		printf("Port inválido\n");


		while (true) {


			getUserInput();

			//trata a entrada do usuário. invoca as devidas funções de acordo com o comando de entrada do usuário
			//a variável userInput é passada como parâmetro para função que retorna um inteiro associado aquela string
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
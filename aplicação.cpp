#include "global.h"


//cria o diretorio "sync_dir" e inicia atividades de sincroniza��o
get_sync_dir() {


}; 



// lista os arquivos salvos no diretorio "sync_dir"
list_client(){


}; 



// lista os arquivos salvos no servidor associado ao usu�rio
list_server() {


};


// envia o arquivo filename.ext para o servidor associado ao usu�rio
upload(char* path, char* filename) {


}; 

download(path / filename.ext); //faz uma "copia n�o sincronizada" do arquivo filename.ext do servidor para\n 
							   //o diret�rio local (de onde o servidor foi chamado)

delete(char* filename.ext);


exit();



//funcao que retorna um valor inteiro �nico para uma dada string. 
// retorna um c�digo pra cada entrada do usu�rio. 
//retirado de: https://stackoverflow.com/questions/16388510/evaluate-a-string-with-a-switch-in-c
constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}


main() {
	//	iniciarSessao();
	//Um cliente deve poder estabelecer uma sess�o com o servidor via linha de comando utilizando :
	//# . / myClient <username> <server_ip_address> <port>
	//Equivalente a //	loginUsuario();

	char*	userInput = getUserInput(); //armazena em uma string a entrada do usu�rio



		//trata a entrada do usu�rio. invoca as devidas fun��es de acordo com o comando de entrada do usu�rio
		//a vari�vel userInput � passada como par�metro para fun��o que retorna um inteiro associado aquela string
		switch (str2int(userInput))
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

			//considerando 
			path = [0]; //entrada do usuario 0
			filename = [1]; //entrada do usuario 1

			char* path;
			char* filename;

			upload(path, filename);

			break;

		case str2int(DOWNLOAD):


			break;

		case str2int(DELETE):


			break;


		default:

		}
	}





	bool iniciarSessao(char* username, char* server_ip_address, int port);//retorna true em caso de sucesso de conex�o e false caso contrario

//	loginServer();







}
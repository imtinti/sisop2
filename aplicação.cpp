#include "global.h"a


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
upload(path / filename.ext) {


}; 

download(path / filename.ext); //faz uma "copia n�o sincronizada" do arquivo filename.ext do servidor para\n 
							   //o diret�rio local (de onde o servidor foi chamado)

delete(char* filename.ext);


exit();

main() {


	//	iniciarSessao();
	//Um cliente deve poder estabelecer uma sess�o com o servidor via linha de comando utilizando :
	//# . / myClient <username> <server_ip_address> <port>
	//Equivalente a //	loginUsuario();

	bool iniciarSessao(char* username, char* server_ip_address, int port);//retorna true em caso de sucesso de conex�o e false caso contrario

//	loginServer();







}
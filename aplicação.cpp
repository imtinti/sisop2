#include "global.h"a


//cria o diretorio "sync_dir" e inicia atividades de sincronização
get_sync_dir() {


}; 



// lista os arquivos salvos no diretorio "sync_dir"
list_client(){


}; 



// lista os arquivos salvos no servidor associado ao usuário
list_server() {


};


// envia o arquivo filename.ext para o servidor associado ao usuário
upload(path / filename.ext) {


}; 

download(path / filename.ext); //faz uma "copia não sincronizada" do arquivo filename.ext do servidor para\n 
							   //o diretório local (de onde o servidor foi chamado)

delete(char* filename.ext);


exit();

main() {


	//	iniciarSessao();
	//Um cliente deve poder estabelecer uma sessão com o servidor via linha de comando utilizando :
	//# . / myClient <username> <server_ip_address> <port>
	//Equivalente a //	loginUsuario();

	bool iniciarSessao(char* username, char* server_ip_address, int port);//retorna true em caso de sucesso de conexão e false caso contrario

//	loginServer();







}
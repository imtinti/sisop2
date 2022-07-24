#include "global.h"

// check if the given string is a numeric string or not
bool chkNumber(const string& str) {
	return !str.empty() &&
		(str.find_first_not_of("[0123456789]") == std::string::npos);
}

// Function to split string str using given delimiter
vector<string> split(const string& str, char delim) {
	auto i = 0;
	vector<string> list;
	auto pos = str.find(delim);
	while (pos != string::npos) {
		list.push_back(str.substr(i, pos - i));
		i = ++pos;
		pos = str.find(delim, pos);
	}
	list.push_back(str.substr(i, str.length()));
	return list;
}

//Fonte: https://www.tutorialspoint.com/validate-ip-address-in-cplusplus
// Function to validate an IP address
bool validateIP(string ip) {
	// split the string into tokens
	vector<string> slist = split(ip, '.');
	// if token size is not equal to four
	if (slist.size() != 4)
		return false;
	for (string str : slist) {
		// check that string is number, positive, and range
		if (!chkNumber(str) || stoi(str) < 0 || stoi(str) > 255)
			return false;
	}
	return true;
}

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



//funcao que retorna um valor inteiro único para uma dada string. 
// retorna um código pra cada entrada do usuário. 
//retirado de: https://stackoverflow.com/questions/16388510/evaluate-a-string-with-a-switch-in-c
constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}


//testa se é um numero inteiro
bool validatePort(string argumento) {

	if ((argumento.find_first_not_of("0123456789") == string::npos) = true)
		return true;
	else
		return false;

}


bool trataEntrada(int codIn, char* argumento) {

	//./myClient <username>[0] <server_ip_address>[1] <port>[2]

	switch (codIn)
	{
		case 0:

			return true;
			break;

		case 1:

			if (validateIP(argumento))
				return true;
			else
				return false;
			break;

		case 2:

			if (validatePort(argumento))
				return true;
			else
				return false;

		default:
			return false;
	}


};

bool qntdArgumentosOK(int nroParametrosEntrada) {

	if (nroParametrosEntrada = 3)
		return true;
	else
		return false;
}


using namespace std;
int main(int argc, char* argv[]) {
//sobre atributos de entrada na função main:: https://docs.microsoft.com/pt-br/cpp/cpp/main-function-command-line-args?view=msvc-170


	//Um cliente deve poder estabelecer uma sessão com o servidor via linha de comando utilizando :
	//# ./myClient <username> <server_ip_address> <port>
	//Equivalente a //	loginUsuario();
	char* username;
	char* server_ip_address;
	char* port;

	//testa se a quantidade de parâmetros de entrada é igual a 3
	if (!qntdArgumentosOK(argc))
	{
		printf("Número incorreto de parâmetros\n");
		printf("Exemplo: ./myClient <username> <server_ip_address> <port> ");
		return 0;
	}

	 if(trataEntrada(inputUSERNAME, argv[0]) 
		username = argv[0];//captura o primeiro argumenrto de entrada do usuário
	 else
		 printf("Nome de usuário inválido\n");
		 return 0;


	if(trataEntrada(inputIP, argv[1]))
		server_ip_address = argv[1] //captura o segundo argumento de entrada do usuário
	else
		printf("Ip inválido\n");
		return 0;

	if (trataEntrada(inputPORT, arqv[2]))
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
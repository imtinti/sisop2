#include "glboal.h"
#include "aplicaçao.cpp"

bool qntdArgumentosOK(int nroParametrosEntrada) {

	if (nroParametrosEntrada = 3)
		return true;
	else
		return false;
}

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

public class myClient
{
	

	protected: //atributos myClient

	char* userSession[2]; //userSeeion[ON/OFF, ON/OFF] 

	char* username;
	char* port;
	char* server_ip_address;

		list arquivos[File]; //usar uma tabela hash)?



}

	public:			//metodos myClient




		//retorna arquivos atrelados a um usuário (independente da sessão)
		list listServer(void){

			return this.arquivos.list();

		};


		//Um cliente deve poder estabelecer uma sessão com o servidor via linha de comando utilizando :
	    //# ./myClient <username> <server_ip_address> <port> //cada vez que esse comando for utilizado, vai ser instanciada uma nova classe. ou seja, uma classe para cada sesssão
		bool myClient(int argc, char* argv[])
		{

			//testa se a quantidade de parâmetros de entrada é igual a 3
			if (!qntdArgumentosOK(argc))s
			{
				printf("Número incorreto de parâmetros\n");
				printf("Exemplo: ./myClient <username> <server_ip_address> <port> ");
				return 0;
			}

			//testa se é um nome válido
			if (trataEntrada(inputUSERNAME, argv[0])
				this.username = argv[0];//captura o primeiro argumenrto de entrada do usuário
			else
			{
				printf("Nome de usuário inválido\n");
					return 0;
			}

			//testa se é um IP válido
			if (trataEntrada(inputIP, argv[1]))
				this.server_ip_address = argv[1] //captura o segundo argumento de entrada do usuário
			else
			{
				printf("Ip inválido\n");
				return 0;
			}

			//testa se é uma porta válida (algum valor inteiro maior q zero
			if (trataEntrada(inputPORT, arqv[2])))
				this.port = arqv[2]; //captura o terceiro argumento de entrada do usuário
			else
			{

				printf("Port inválido\n");
				return 0;
			}

			
			//Se todos os parâmetros de entrada deram certo, então invoca-se a aplicação, que ficará rodando em loop enquanto durar a sessão do usuário
			

		}




};
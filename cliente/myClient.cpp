#include "../global.h"
#include "../aplicacao.cpp"

bool qntdArgumentosOK(int nroParametrosEntrada) {

	if (nroParametrosEntrada = 3)
		return true;
	else
		return false;
}

//funcao que retorna um valor inteiro �nico para uma dada string. 
// retorna um codigo pra cada entrada do usu�rio. 
//retirado de: https://stackoverflow.com/questions/16388510/evaluate-a-string-with-a-switch-in-c
constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}


//testa se � um numero inteiro
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




		//retorna arquivos atrelados a um usu�rio (independente da sess�o)
		list listServer(void){

			return this.arquivos.list();

		};


		//Um cliente deve poder estabelecer uma sess�o com o servidor via linha de comando utilizando :
	    //# ./myClient <username> <server_ip_address> <port> //cada vez que esse comando for utilizado, vai ser instanciada uma nova classe. ou seja, uma classe para cada sesss�o
		bool myClient(int argc, char* argv[])
		{

			//testa se a quantidade de par�metros de entrada � igual a 3
			if (!qntdArgumentosOK(argc))s
			{
				printf("N�mero incorreto de par�metros\n");
				printf("Exemplo: ./myClient <username> <server_ip_address> <port> ");
				return 0;
			}

			//testa se � um nome v�lido
			if (trataEntrada(inputUSERNAME, argv[0])
				this.username = argv[0];//captura o primeiro argumenrto de entrada do usu�rio
			else
			{
				printf("Nome de usu�rio inv�lido\n");
					return 0;
			}

			//testa se � um IP v�lido
			if (trataEntrada(inputIP, argv[1]))
				this.server_ip_address = argv[1] //captura o segundo argumento de entrada do usu�rio
			else
			{
				printf("Ip inv�lido\n");
				return 0;
			}

			//testa se � uma porta v�lida (algum valor inteiro maior q zero
			if (trataEntrada(inputPORT, arqv[2])))
				this.port = arqv[2]; //captura o terceiro argumento de entrada do usu�rio
			else
			{

				printf("Port inv�lido\n");
				return 0;
			}

			
			//Se todos os par�metros de entrada deram certo, ent�o invoca-se a aplica��o, que ficar� rodando em loop enquanto durar a sess�o do usu�rio
			

		}




};
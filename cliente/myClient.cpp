public class myClient
{

	
	protected: //atributos myClient

		char* userSession[2];
		char* username;


		list arquivos[File]; //usar uma tabela hash)?


	public:			//metodos myClient


		//retorna arquivos atrelados a um usu�rio (independente da sess�o)
		list listServer(void){

			return this.arquivos.list();

		};




};
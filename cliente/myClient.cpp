public class myClient
{

	
	protected:

		char* userSession[2];
		char* username;


		list arquivos[File]; //usar uma arvore trie talvez? hash?(talvez � melhor)


	public:

		File listUserFiles(){

			return this.arquivos.list();

		};




};
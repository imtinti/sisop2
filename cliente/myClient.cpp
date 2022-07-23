public class myClient
{

	
	protected:

		char* userSession[2];
		char* username;


		list arquivos[File]; //usar uma arvore trie talvez? hash?(talvez é melhor)


	public:

		File listUserFiles(){

			return this.arquivos.list();

		};




};
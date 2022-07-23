public class myServer {

	struct structClient{
	
		char*  userSessions[2];
		char* username;
		int numeroArquivos;
		list structFile;
	
	};

	struct structFile {

		char* fileName;
		int fileSize;
		date lastModification;
	};

	list listClients[structClient];


};

class myClient {

	char* userName;
	char* pathSyncDir;





};
// Biblioteca geral
// Conte�do:
// - todas as bibliotecas utilizadas no projeto
// - Defines globais
// - vari�veis glob�is
// - declara��es de fun��es globais, chamadas por diferentes arquivos (h� fun��es locais que s�o chamadas apenas dentro dos arquivos, n�o est�o aqui)
/*================================================================================================================================================*/


//Enbtradas de usu�rio por linha de comando

#define GET_SYNC_DIR "get_sync_dir"
#define LIST_CLIENT "list_client"
#define LIST_SERVER "list_server"
#define UPLOAD "upload"
#define DOWNLOAD "download"
#define DELETE "delete"
#define EXIT "exit"

/*======================================================================*/
/*==============================BIBLIOTECAS=============================*/
/*======================================================================*/


#include <stdio.h>
#include <string.h>

//
//Structs destinadas a manter salvo, no servidor, as informa��es(metadados) referentes aos arquivos mantidos no servidor. Para n�o ser necess�rio o servidor fazer uma consulta 
// em todo os arquivos, de forma a otimizar o acesso �s informa��es dos arquivos.
//
struct structArquivo{


}

// Para MetaDados //Structs destinadas a manter salvo, no cliente, os metadados referentes aos arquivos salvo
//
struct structClient {




};
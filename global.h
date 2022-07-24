// Biblioteca geral
// Conte�do:
// - todas as bibliotecas utilizadas no projeto
// - Defines globais
// - vari�veis glob�is
// - declara��es de fun��es globais, chamadas por diferentes arquivos (h� fun��es locais que s�o chamadas apenas dentro dos arquivos, n�o est�o aqui)
/*================================================================================================================================================*/

/*======================================================================*/
/*==============================BIBLIOTECAS=============================*/
/*======================================================================*/


#include <stdio.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <string>



//Enbtradas de usu�rio por linha de comando:
#define GET_SYNC_DIR "get_sync_dir"
#define LIST_CLIENT "list_client"
#define LIST_SERVER "list_server"
#define UPLOAD "upload"
#define DOWNLOAD "download"
#define DELETE "delete"
#define EXIT "exit"


//Posi��es dos argumentos de entrada na main do programa, no formato:
//usado na funcao int main()
//./myClient <username> <server_ip_address> <port>
#define inputUSERNAME 0
#define inputIP 1 
#define inputPORT 2

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
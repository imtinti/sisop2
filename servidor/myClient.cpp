// Client side C/C++ program to demonstrate Socket
// programming


#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080


typedef struct packet {
	uint16_t type; //Tipo do pacote (p.ex. DATA | CMD)
	uint16_t seqn; //Numero de sequencia
	uint32_t total_size; //Nemero total de fragmentos
	uint16_t length; //Comprimento do payload
	const char* _payload; //Dados do pacote
} packet;

int main(int argc, char const* argv[])
{
	int sock = 0, valread, client_fd;
	
	struct sockaddr_in serv_addr;
	
	char hello[] = "Hello from client";
	
	char buffer[1024] = { 0 };
	
	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		printf("\n Socket creation error \n");
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);

	// Convert IPv4 and IPv6 addresses from text to binary
	// form

	if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)
		<= 0) {
		printf(
			"\nInvalid IP address/ Address not supported \n");
		return -1;
	}
	
	packet Packet;
	
	char* message;
	
	
	
	while(true){
	
		if ((client_fd
		= connect(sock, (struct sockaddr*)&serv_addr,
				sizeof(serv_addr)))
		< 0) {
		printf("\nConnection Failed. Maybe the server is offline.\n\n");
		return -1;
	}
	
		printf("digite a msg: \n");
		
		scanf("%s", message);
	
		Packet._payload = "enviando essa msg aq";
		
	//	send(new_socket, hello, strlen(hello), 0);
		
		//para enviar um pacote para o servidor, 
		
		send(sock, Packet._payload, strlen(Packet._payload), 0);
		//Syntax
		//https://pubs.opengroup.org/onlinepubs/000095399/functions/send.html	
		//#include <sys/socket.h> ssize_t send(int socket, const void *buffer, size_t length, int flags);	
					

		valread = read(sock, buffer, 1024);
			
		printf("%s\n", buffer);
	
	
	}
	

	// closing the connected socket
	close(client_fd);
	return 0;
}
//stwórz serwer

#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>


int main()
{
    int sockfd, connfd, len, read_size;
    struct sockaddr_in servaddr, client;
    char client_message[1000];

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(5000);
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);

    // stworzenie i weryfikacja gniazda
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        printf("Utworzenie gniazda nie powiodło się.\n");
        exit(0);
    }
    else
        printf("Utworzenie gniazda powiodło się.\n");
    bzero(&servaddr, sizeof(servaddr));

    if ((bind(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr))) != 0) {
        printf("Połączenie gniazda nie powiodło się.\n");
        exit(0);
    }
    else
        printf("Połączenie gniazda powiodło się.\n");


    listen(sockfd, 3);
    len = sizeof(client);
    connfd = accept(sockfd, (struct sockaddr *)&client, &len);
    printf("Połączenie otwarte");

    while( (read_size = recv(connfd, client_message, 1000, 0)) > 0){}
        printf("%s \n", client_message);

    // Zamykanie
    close(sockfd);

}

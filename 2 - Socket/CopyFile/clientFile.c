#include <stdio.h>
#include <stdlib.h>
#include "network.h"

int main(void){
    char response[100];
    connection_t connection;

    printf("[CLIENT] Creo una connessione logica col server\n");
    connection = createTCPConnection("localhost", 35000);
    if (connection < 0) {
        printf("[CLIENT] Errore nella connessione al server: %i\n", connection);
    }
    else
    {

        printf("[CLIENT] Nome del file sorgente:\n");
        scanf("%s", response);
        printf("[CLIENT] Invio risposta al server\n");
        TCPSend(connection, &response, sizeof(response));

        printf("[CLIENT] Nome del file destinazione:\n");
        scanf("%s", response);
        printf("[CLIENT] Invio risposta al server\n");
        TCPSend(connection, &response, sizeof(response));

        closeConnection(connection);
        printf("[CLIENT] Connessione chiusa, file copiato.\n");
    }
    return 0;
}

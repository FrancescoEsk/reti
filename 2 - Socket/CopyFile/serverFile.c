#include <stdio.h>
#include <stdlib.h>
#include "network.h"

int main (void) {
    FILE *fptr1, *fptr2;
    char request[100], c;
    socketif_t socket;
    connection_t connection;

    socket = createTCPServer(35000);
    if (socket < 0){
        printf("[SERVER] Errore di creazione del socket: %i\n", socket);
    } else
    {
        printf("[SERVER] Sono in attesa di richieste di connessione da qualche client\n");
        connection = acceptConnection(socket);
        printf("[SERVER] Connessione instaurata\n");

        // ricevo il nome del file da copiare
        printf("[SERVER] In attesa del nome del file da copiare\n");
        TCPReceive(connection, &request, sizeof(request));
        printf("[SERVER] Ho ricevuto il seguente messaggio dal client: %s\n", request);

        // Apro il file in lettura
        fptr1 = fopen(request, "r");
        if (fptr1 == NULL) {
            printf("Errore apertura file %s \n", request);
            exit(0);
        }

        // ricevo il nome del file su cui copiare
        printf("[SERVER] In attesa del nome del file su cui effettuare la copia\n");
        TCPReceive(connection, &request, sizeof(request));
        printf("[SERVER] Ho ricevuto il seguente messaggio dal client: %s\n", request);
        // Apro il file destinazione in scrittura
        fptr2 = fopen(request, "w");
        if (fptr2 == NULL)
        {
            printf("Errore apertura file %s \n", request);
            exit(0);
        }

        // copia effettiva
        // Leggo il primo byte dalla sorgente
        c = fgetc(fptr1);
        while (c != EOF)
        {
            // Scrivo il byte nella destinazione
            fputc(c, fptr2);
            c = fgetc(fptr1);
        }

        printf("\n[SERVER] Contenuto copiato su %s\n", request);

        fclose(fptr1);
        fclose(fptr2);

        closeConnection(connection);
    }

    return 0;
}
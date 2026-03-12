# Risposte alle domande dell'esercizio 2

Occorre aprire il menu File/Open e selezionare il file simpleHTTP.cap.

1. **Colorare di rosso tutti i pacchetti che contengono UDP e di verde tutti i pacchetti che contengono TCP. (suggerimento: nell'editor delle regole di colorazione è sufficiente portare in alto due regole già esistenti e modificarle per cambiarne i colori di sfondo).**

2. **Cosa contengono i primi due pacchetti della sessione di cattura?**

** IP sorgente, IP destinazione.**
Src: 157.27.252.202, Dst: 157.27.10.10
** Tipo di protocollo di trasporto.**
Protocol: UDP (17)
** Tipo di protocollo di livello Applicazione. Come fa Wireshark a capirlo?**
Domain Name System
** Messaggio contenuto nel Payload di livello applicazione.**
Richiesta e risposta di un DNS request riguardo il sito 'www.polito.it' e 'web01.polito.it'
3. **Prendere in considerazione il pacchetto n. 3.**

** IP sorgente, IP destinazione.**
Source Address: 157.27.252.202
Destination Address: 130.192.73.1
** Tipo di protocollo di trasporto.**
Protocol: TCP (6)
** IP sorgente e destinazione sono in qualche modo collegati con i messaggi scambiati a livello applicazione nei primi due pacchetti? È possibile fare delle ipotesi su cosa serve il protocollo di livello applicazione dei primi due pacchetti?**
Si, perchè la DNS response ha dato come indirizzo IP del sito richiesto: *130.192.73.1*, e questo pacchetto ha come destinazione esattamente tale IP.
4. **Prendere in considerazione il pacchetto n. 6.**

** IP sorgente, IP destinazione.**
Src: 157.27.252.202, Dst: 130.192.73.1
** Tipo di protocollo di trasporto.**
Protocol: TCP (6)
** Tipo di protocollo di livello Applicazione.**
GET / HTTP/1.1
** Perché prima della trasmissione del primo messaggio HTTP c'è lo scambio di tre pacchetti puramente TCP? Quali sono i flag settati nell'header TCP di questi tre pacchetti?**
Si legge chiaramente uno scambio di SYN - SYN ACK - ACK. È il classico instauro della connessione che accade per comunicare con il protocollo TCP.
Solo dopo la conferma della creazione del tunnel di connessione fra i due host, allora procedono a scambiare i dati effettivi per il livello applicazione.
4. **Creare un filtro per visualizzare solo i pacchetti TCP (compresi i pacchetti HTTP) e determinarne il numero.**
	*tcp && http* --> 134
5. **Creare un filtro per visualizzare solo i pacchetti TCP (esclusi i pacchetti HTTP) e determinarne il numero.**
	*tcp* --> 807
** Qual è la percentuale sul totale dei pacchetti TCP trovata al punto 5?**
98.1 %
** A cosa servono tali pacchetti?**
Servono ad uno scambio di dati tramite il protocollo TCP, comprendono l'instauro della connessione, lo scambio di dati, e la chiusura della connessione.
** Se il protocollo DNS dei pacchetti 1 e 2 avesse usato il protocollo TCP, quanti pacchetti IP sarebbero stati generati? Sarebbe stato utile?**
3 Pacchetti per l'apertura, 2 per l'effettivo scambio di DNS request e response, ed infine 2 pacchetti per la chiusura. 
Sarebbe stato uno spreco, in quanto avrei potuto effettuare la DNS request altre 2 vote ed essere comunque a meno pacchetti del TCP.
6. **Selezionare il pacchetto 3 e seguire lo stream TCP col comando da menu Analyze/Follow TCP Stream.**

** Cosa si può leggere?**
Si legge che è stata effettuata una HTTP GET, ha ottenuto una response 200 Ok, e successivamente ha ottenuto il file della pagina html interessata.

** Qual è il messaggio contenuto nel payload della PDU di livello Applicazione?**
L'intera pagina HTML del sito richiesto.
Successivamente, l'host effettua altre get per ottenere relative immagini ed icone del sito in questione.
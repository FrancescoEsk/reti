## Cosa succede se inverto l'esecuzione? Ossia, prima il Client, e poi il Server?
Il client rimane appeso ad aspettare una risposta del Server, il server invece, non riceve il pacchetto essendo che il client lo ha già mandato, e quindi anche lui si blocca ad aspettare.

## Fai in modo che il server riceva sul 10000 e il client risponda sulla 30000
Sostituendo le porte in modo corretto, quindi inviando al 10000 dal client, non cambia nulla per l'esecuzione effettiva del programma.

## Mettere il server in ascolto sulla porta 100 e osservare cosa succede
### Bisogna anche modificare il client? Dove?
Si, va modificato anche nella riga UDPSend.
Non cambia niente in termini di comunicazione, affinché le porte combacino

## Sostituire 127.0.0.1 prima con localhost e poi con pippo. Osservare cosa succede
Sostituito con localhost non cambia nulla, questo perché localhost è equivalente a scrivere 127.0.0.1.
Mettendo pippo, invece, non essendo un indirizzo ip o un host noto, il client non lo riconosce, e quindi termina subito nel tentativo di inviare il messaggio.

## Lanciare due volte il server su due terminali. Cosa si osserva? Funzionano entrambi?
Nel tentativo di avviare un server la seconda volta, probabilmente, il so riconosce che esiste già un processo del server in esecuzione, e quindi si rifiuta di far partire il secondo server in ascolto.

## Modificare il server in maniera che soddisfi 5 richieste prima di terminare
### E se volessi che non terminasse mai?
Per non terminare mai, in realtà il programma è già impostato, lo si evince dal fatto che le UDPReceive e Send si trovano all'interno di un while(true).
Per fare in modo che soddisfi solamente 5 richieste, è necessario sostituire il while(true) con una condizione basata su di una variabile, incrementata ogni volta che si esegue una receive.

### Lanciare due volte il server usando due terminali. Cosa si osserva? Funzionano entrambi?
Non posso lanciare due server siccome entrambi cercano di appropriarsi la stessa porta.

### Scrivere la sommatrice usando TCP, compilare ed eseguire.
Fatto

### Provare a rifare il caso dell'esercizio 10 ma con questa nuova versione della sommatrice. Cosa si può osservare? Che soluzione si può trovare? C'è influenza reciproca tra i due client?
Noto che questa volta, il secondo client in esecuzione sembra comunicare, ma successivamente ricevere la seguente risposta dal server: -98561336.
Questo significa che molto probabilmente, non ha mai instaurato veramente la connessione con il server, essendo che c'è n'era già una aperta con il client n.1


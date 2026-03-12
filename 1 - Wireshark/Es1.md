# Risposte alle domande dell'esercizio 1

1. Che tipo di protocollo di livello Data-link è utilizzato? Come fa Wireshark a capirlo?
   Ethernet, lo trova scritto nell’header precedente

2. Disegnare la PDU di livello Data-link indicando il valore dei vari campi.
   Encapsulation type: Ethernet
   Frame Number: 9
   Frame Length: 227 bytes (1816 bits)
   Capture Length: 227 bytes (1816 bits)
   Character encoding: ASCII (0)
   e il resto DATI

3. Qual è il MAC sorgente? Di che tipo è: unicast o broadcast?
   MAC Sorgente: 00:e0:81:24:dd:64 - Unicast

4. Qual è il MAC destinazione? Di che tipo è: unicast o broadcast?
   MAC Destinatario: ff:ff:ff:ff:ff:ff - Broadcast

5. Che tipo di protocollo di livello Network è utilizzato? Come fa Wireshark a capirlo?
   iPv4, legge dall'header

6. Qual è la lunghezza dell'header IP?
   Lunghezza header ip: 213

7. Quali sono gli indirizzi IP sorgente e destinazione?
   Src: 157.27.252.223, Dst: 157.27.252.255

8. Che tipo di protocollo di livello trasporto è contenuto in IP? Come fa Wireshark a capirlo?
   Protocol: UDP (17)

9. Quali sono le porte sorgente e destinazione a livello trasporto?
   Src Port: 631, Dst Port: 631

10. Creare un filtro per visualizzare solo i pacchetti che hanno ARP come protocollo
    (suggerimento: basta scrivere arp nella barra Filter sotto la toolbar; si ricordi di premere su
    Apply dopo aver scritto arp).


11. Dopo aver applicato il filtro precedente qual è la percentuale di pacchetti che rimangono
    visualizzati rispetto al totale?
    (suggerimento: vedere entrambi i valori nella barra di stato in basso).
    
    63.6%

12. Creare un filtro per visualizzare solo i pacchetti che hanno destinazione MAC
    00:01:e6:57:4b:e0.
    (suggerimento: usare l'editor di espressioni; la categoria da selezionare è Ethernet; 
    per l'indirizzo MAC usare la notazione esadecimale con i due punti come separatori; 
    si ricordi di premere su Apply dopo aver creato l'espressione).

    eth.dst == 00:01:e6:57:4b:e0

13. Dopo aver applicato il filtro precedente qual è la percentuale di pacchetti che rimangono
    visualizzati rispetto al totale?
    (suggerimento: vedere entrambi i valori nella barra di stato in basso).

    0.4%

14. Creare un filtro per visualizzare solo i pacchetti che hanno destinazione MAC broadcast.
    (suggerimento: nell'editor di espressioni la categoria da usare è Ethernet; per l'indirizzo
    MAC usare la notazione esadecimale con i due punti come separatori; si ricordi di premere
    su Apply dopo aver creato l'espressione).

    eth.dst == ff:ff:ff:ff:ff:ff

15. Dopo aver applicato il filtro precedente qual è la percentuale di pacchetti che rimangono
    visualizzati rispetto al totale? Sono molti? Perché?

    83.8%
     Sono molti perché molto spesso gli host non conoscono l'indirizzo MAC di chi stanno cercando di contattare, ma solamente l'indirizzo IP. Tramite un Broadcast, sperano che l'host con indirizzo IP che stanno cercando gli risponda, in modo da collegare il suo MAC al suo IP, nella tabella ARP (sia router che host).
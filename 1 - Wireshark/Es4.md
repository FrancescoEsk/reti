
Occorre aprire il menu File/Open e selezionare il file pingCapture.cap.

1. **Individuare le richieste ping inviate e le relative risposte. Quante sono?**
	*icmp* -> sono 22
	
2. **Quali sono IP sorgente e destinazione della richiesta ICMP? A quale ente o azienda sono intestati?**
	Ethernet II, Src: **Apple_8d:58:17** (f4:5c:89:8d:58:17), Dst: **PaloAltoNetw_00:01:30** (00:1b:17:00:01:30)
	
3. **Provare a invocare il comando ping dal proprio PC verso www.google.com e verso il proprio Default Gateway (come faccio a sapere il suo IP?) e osservare il RTT medio e la sua variazione. Chi mostra la media più grande? Perché? Chi mostra la variazione più grande? Perché?**
	RTT medio verso Default gateway: 18.686 ms
	RTT medio verso www.google.com: 10.864 ms
	La variazione più grande la mostra il Default gateway. Questo deve essere dovuto dal fatto che la rete universitaria deve essere molto trafficata, ed avere solamente un gateway.
	Google, a sua volta, ha molti server, e sicuramente sono più forti nel mantenere alte le prestazioni anche a carichi molto maggiori.
	```
francescofrison-privato@MacBook-Air-4 ~ % ping 157.27.128.1

PING 157.27.128.1 (157.27.128.1): 56 data bytes

64 bytes from 157.27.128.1: icmp_seq=0 ttl=254 time=58.001 ms

64 bytes from 157.27.128.1: icmp_seq=1 ttl=254 time=7.669 ms

64 bytes from 157.27.128.1: icmp_seq=2 ttl=254 time=8.135 ms

64 bytes from 157.27.128.1: icmp_seq=3 ttl=254 time=10.484 ms

©64 bytes from 157.27.128.1: icmp_seq=4 ttl=254 time=19.803 ms

64 bytes from 157.27.128.1: icmp_seq=5 ttl=254 time=8.021 ms

^C

--- 157.27.128.1 ping statistics ---

6 packets transmitted, 6 packets received, 0.0% packet loss

round-trip min/avg/max/stddev = 7.669/18.686/58.001/18.077 ms

francescofrison-privato@MacBook-Air-4 ~ % ping www.google.com

PING www.google.com (142.251.141.228): 56 data bytes

64 bytes from 142.251.141.228: icmp_seq=0 ttl=117 time=16.029 ms

64 bytes from 142.251.141.228: icmp_seq=1 ttl=117 time=8.347 ms

64 bytes from 142.251.141.228: icmp_seq=2 ttl=117 time=11.501 ms

64 bytes from 142.251.141.228: icmp_seq=3 ttl=117 time=8.253 ms

64 bytes from 142.251.141.228: icmp_seq=4 ttl=117 time=7.768 ms

64 bytes from 142.251.141.228: icmp_seq=5 ttl=117 time=13.288 ms

^C

--- www.google.com ping statistics ---

6 packets transmitted, 6 packets received, 0.0% packet loss

round-trip min/avg/max/stddev = 7.768/10.864/16.029/3.047 ms
```

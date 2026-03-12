Occorre aprire il menu File/Open e selezionare il file busyNetwork.cap.

1. **Elencare i protocolli di livello Applicazione che entrano in azione in questa cattura classificandoli in base al livello Trasporto utilizzato.**
HTTP -> TCP
FTP -> TCP
SSH -> TCP
DNS -> UDP

**3. Provare ad analizzare diversi stream TCP con sopra diversi protocolli di livello applicazione. Che differenza c’è tra il contenuto trasmesso in una connessione TCP per il protocollo FTP e quello trasmesso per il protocollo SSH?**
Il protocollo SSH non è leggibile attraverso il TCP Stream di wireshark, forse perché potrebbe essere un messaggio a livello applicativo criptato.
L'FTP, invece, è leggibile, e mostra chiaramente il contenuto della conversazione.

FTP: 
```
220 ftp.azc.ua

USER anonymous

331 Guest logi

PASS mozilla@e

230 Guest logi

SYST

  

215 UNIX Type:

PWD

  

257 "/" is cur

TYPE I

  

200 Type set t

PASV

  

227 Entering P

SIZE /mirrors/

500 'SIZE /mir

MDTM /mirrors/

500 'MDTM /mir

RETR /mirrors/

550 /mirrors/e

PASV

  

227 Entering P

CWD /mirrors/e

250 CWD comman

LIST

  

150 Binary dat226 Binary Tra

PASV

  

227 Entering P

SIZE /mirrors/

500 'SIZE /mir

MDTM /mirrors/

500 'MDTM /mir

RETR /mirrors/

150 Binary dat226 Binary Tra

PASV

  

227 Entering P

SIZE /mirrors/

500 'SIZE /mir

MDTM /mirrors/

500 'MDTM /mir

RETR /mirrors/

150 Binary dat226 Binary Tra

PASV

  

227 Entering P

SIZE /mirrors/

500 'SIZE /mir

MDTM /mirrors/

500 'MDTM /mir

RETR /mirrors/

550 /mirrors/e

PASV

  

227 Entering P

CWD /mirrors/e

250 CWD comman

LIST

  

150 Binary dat226 Binary Tra

PASV

  

227 Entering P

SIZE /mirrors/

500 'SIZE /mir

MDTM /mirrors/

500 'MDTM /mir

RETR /mirrors/

150 Binary dat226 Binary Tra

PASV

  

227 Entering P

SIZE /mirrors/

500 'SIZE /mir

MDTM /mirrors/

500 'MDTM /mir

RETR /mirrors/

550 /mirrors/e

PASV

  

227 Entering P

CWD /mirrors/e

250 CWD comman

LIST

  

150 Binary dat226 Binary Tra
```

SSH:
```
...r...e.%..tI

3..gDf.....:.O

....>)&_[.h~..

|....~L..)Kuf.

.C....a....S..

%.\.H.?j7.:Q./

@.i.$...!n..'.

..2.^.I.....kC

...#p.........

...8M....C@

.8

..[......|...l

U.M\...<.....2

."..k..#..8.+.

r"..J....B...f

.B.tV...q..<..

....0#...C....

...'.de~.F.@.(

eAT.W..?.v3V

.

6a

O'.J....@.I

....].f.'.....P....Kt......O

.Wj43OSpsaP.{.

E..r^1l.LT ..3

.<..:.......G`

N;<....l.....K

.u.1#....J..cK

E..';R9......(..CT..p.r.kqh.

M...... ..0\..

>" D..96..M|.:

.D.d:.R..%0(..

.u......Yz.-Y.

2.S8x.V.f.....

.O... ....4..$

.+.._e...J..3.

.g#.6.#..1"..u

a..T.a..9J...g

Q._.o..b....gL....Q...E.;A."

...F....r...5U

P.Q0/..._^.I.4

.}.B.u.....T.(

.C.=......B...

..@b..6>J....:

.....J........

.>.....\.....(

..!....9A...(w

f....Y.u+.FT.Z

.....q.......4...eb.u.>.<|. Se.......k..r.f..K....T..#.......sw ..gbA...?....6U...E..

m&.u.s!q1Z......S0f..a.u.2,..r#..S.gh......q..$E.....*e4.x..........

.Lh.......F...

`..7...

...U.a..7....0..e^4Q

  

T5.#.c.c.^...

.4%...0Q.Mn}=.!...Z.."lec.|.

.(.z...4x..;..

....._9..J-..........;.V...!.....>..D%..2k

F3.2g(..%...x.

!...K.. .... .

.)J.3

..Lp..#.

DAD.. .aC;.O7.i.a'..

....)s2

*RT

F}

!.uA!.B

3....6.......B.Z....{`....z.

#....".....}3D

...C.a:Q..u...#.....O.8.p...

..`.?.....)...

...........

d.

I..)9../K.z.s.

.....".!.c..*m

.H;*.;^......(

..Z......o@S..

e....7..|....}

.b..kZ......:.

......."...l..

.rW .Z...PR}r~

..\.4.V.. ....

..?.i.........

>..@|.....tCh.

k...H.2....#..

#"....B..H,SX.

.;Wk.i.PI.9\}.

.k>m....;..2..

L.).........i.

C....-.\F8....

../....,..eZ[M

.a.t..D.>.5,E8

..`.... .3V1..

..)6.y.M....~.

.....R... .u.-

!U34.....lm..k

j.\%..W.."....

......S.....}s

..xiuX..r......O..U.S.....t.

Q...4...&...$V

q..

..%>..>..J

......o.*..z.@

......eG....}.

. .C..h....D..

.M..6.'r.Q/.[h

..X/ll.;31<Ik.

.S......-..C..

.....t.$.p..3.

..yy..z;)T..OE

.3>..B`W...|.d

..\....u9.Q..\

..-.S. =......

....at....g..{

.H@..3..`.P..6NJ....Y!.....0}..v.L~$....av

../...G.8....;w..^:..0...y..tj......r.?:.......i.m.X..^.._..^I.....p...A..-/]Y.8...k...CP.g.../ik.
```
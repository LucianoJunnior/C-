Program PLANO_DE_CARREIRA;
Var
NFLS:STRING;
SBLS:REAL;
TBLS:INTEGER;
ECLS:INTEGER;
CLASSELS:STRING;
SBRUTOLS:REAL;

 Begin
 WRITELN('PROGRMA DE CARREIRA-----');
 WRITELN('------------------------');
 WRITE('DIGIE O NOME DO FUCIONARIO');
 READLN(NFLS);
 WRITE('DIGITE O SAL�IO BASE------');
 READLN(SBLS);
 WRITE('DIGITE O TEMPO DE TRAALHO-');
 READLN(TBLS);
 WRITE('DIGITE A ESCOLARIDADE-----');
 READLN(ECLS);
 WRITELN ('-----------------------');
 IF (ECLS<3) OR (TBLS<3) THEN
 BEGIN 
 CLASSELS:='JUNIOR';
 SBRUTOLS:=SBLS;
 END;
 IF (ECLS>=3) AND (TBLS>=3)THEN
 BEGIN
 CLASSELS:='PLENO';
 SBRUTOLS:=SBLS*1.5;
 END;
 IF((ECLS>=4)AND (TBLS>=15)) OR (ECLS=6) THEN 
 BEGIN
 CLASSELS:='SENIOR';
 SBRUTOLS:=SBLS*2;
 END;
 WRITELN ('SA�DAS');
 WRITELN ('CLASSE........',CLASSELS);
 WRITELN ('SAL�RIO BRUTO:',SBRUTOLS:0:2);   
 End.

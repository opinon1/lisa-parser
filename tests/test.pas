program SimpleVariables;

Const   fi = 'MAPHUONG.INP';
        fo = 'should not tun';
Var     a: Array [1..1000, 1..1000] Of LONGINT;
        lux: Array [1..1000, 1..1000] Of CHAR;
        m, n: LONGINT;
Procedure readFile();
Begin
        Assign(INPUT, fi); Reset(INPUT);
        Readln(n);
        Close(INPUT);
End;
Procedure writeFile();
Var     i, j: LONGINT;
Begin
        Assign(OUTPUT, fo); Rewrite(OUTPUT);
        For i:=1 To n Do
        Begin
                For j:=1 To n-1 Do Write(a[i][j], ' ');
                Writeln(a[i][n]);
        End;
        Close(OUTPUT);
End;
Procedure fillInOddOrderTab(n: LONGINT);
Var     cur, i, j: LONGINT;
Begin
        cur:=1;
        i:=n Div 2 + 1;
        j:=n Div 2 + 2;
        While cur<=n*n Do
        Begin
                a[i][j]:=cur;
                If cur Mod n = 0 Then Inc(j, 2) Else
                Begin Dec(i); Inc(j); End;
                If i<1 Then i:=n Else
                If j>n Then j:=1;
                Inc(cur);
        End;

End;
Procedure creatLuxTable(m: LONGINT);
Var     i, j: LONGINT;
Begin
        For i:=1 To m+1 Do
                For j:=1 To 2*m+1 Do lux[i][j]:='L';
        For j:=1 To 2*m+1 Do lux[m+2][j]:='U';
        For i:=1 To m-1 Do
                For j:=1 To 2*m+1 Do lux[m+2+i][j]:='X';
        lux[m+1][(2*m+1) Div 2 + 1]:='U';
        lux[m+2][(2*m+1) Div 2 + 1]:='L';
End;
Procedure fill(i, j: LONGINT; c: CHAR; Var cur: LONGINT);
Begin
        If c = 'L' Then
        Begin
                a[i*2-1][j*2]:=cur; Inc(cur);
                a[i*2][j*2-1]:=cur; Inc(cur);
                a[i*2][j*2]:=cur; Inc(cur);
                a[i*2-1][j*2-1]:=cur;
        End Else
        If c = 'U' Then
        Begin
                a[i*2-1][j*2-1]:=cur; Inc(cur);
                a[i*2][j*2-1]:=cur; Inc(cur);
                a[i*2][j*2]:=cur; Inc(cur);
                a[i*2-1][j*2]:=cur;
        End Else
        Begin
                a[i*2-1][j*2-1]:=cur; Inc(cur);
                a[i*2][j*2]:=cur; Inc(cur);
                a[i*2][j*2-1]:=cur; Inc(cur);
                a[i*2-1][j*2]:=cur;
        End;
End;
Procedure fillInEvenOrderTab(n: LONGINT);
Var     i, j, cur, cur2, k, l: LONGINT;
Begin
        If n Mod 4 = 0 Then
        Begin
                cur:=0;
                cur2:=n*n+1;
                For i:=1 To n Do
                For j:=1 To n Do
                Begin
                        Inc(cur);
                        Dec(cur2);
                        If (i Mod n = j Mod n) Or ((i + j) Mod n = 1) Then
                        a[i][j] := cur Else
                        a[i][j]:=cur2;
                End;
        End Else
        Begin
                m:=(n - 2) Div 4;
                creatLuxTable(m);
                cur:=1;
                i:=1; j:=(2*m+1) Div 2 + 1;
                While cur<=n*n Do
                Begin
                        fill(i, j, lux[i][j], cur);
                        If cur Mod n = 0 Then Inc(i) Else
                        Begin Dec(i); Inc(j); End;
                        If i<1 Then i:=2*m+1;
                        If j>2*m+1 Then j:=1;
                        Inc(cur);
                End;
        End;
End;
BEGIN 
        readFile();
        If odd(n) Then fillInOddOrderTab(n) Else fillInEvenOrderTab(n);
        writeFile();
END.

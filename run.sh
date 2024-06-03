flex lisa.l
bison -dv lisa.y
gcc lex.yy.c lisa.tab.c -ll
chmod +x a.out
./a.out tests/test.pas

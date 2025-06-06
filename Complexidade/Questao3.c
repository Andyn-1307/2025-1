//Questão 3: Depuração de código

/*
Área de depuração de código:

(gdb) start
Temporary breakpoint 1 at 0x4014a8: file fibonacci.c, line 10.
Starting program: ./fibonacci 
[New Thread 1234.0x5678]

Temporary breakpoint 1, main () at fibonacci.c:10
10          printf("Digite o valor de n: ");
(gdb) n
Digite o valor de n: 5
11          scanf("%d", &n);
(gdb) n
14          int R = x(n);
(gdb) n
15          printf("Resultado de %d eh %d\n", n, R);
(gdb) print R
$1 = 8
(gdb) print n
$2 = 5
(gdb) quit
A debugging session is active.

        Inferior 1 [process 17228] will be killed.

*/
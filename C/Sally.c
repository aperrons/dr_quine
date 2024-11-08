#include <stdio.h>
#include <stdlib.h>

#define N 5
#define QUINE "Sally"
#define SEED QUINE "_"
#define EXT ".c"
#define D(x) ((x) - 1)
#define CMD "gcc -Wall -Wextra -Werror -o "

#define SOURCE "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c%1$c#define N %2$d%1$c#define QUINE %3$cSally%3$c%1$c#define SEED QUINE %3$c_%3$c%1$c#define EXT %3$c.c%3$c%1$c#define D(x) ((x) - 1)%1$c#define CMD %3$cgcc -Wall -Wextra -Werror -o %3$c%1$c%1$c#define SOURCE %3$c%4$s%3$c%1$c%1$c#define EXEC(source) int main (void) { if (N<1) return 0; char filename[10], cmd[64]; snprintf(filename, sizeof(filename), SEED %3$c%%d%3$c EXT, D(N)); FILE *f=fopen(filename, %3$cw%3$c); if (f) { fprintf(f,source,10,D(N),34,source); } fclose(f); snprintf(cmd, sizeof(cmd), CMD SEED %3$c%%1$d%3$c %3$c %3$c SEED %3$c%%1$d%3$c EXT %3$c; ./%3$c SEED %3$c%%1$d%3$c, D(N)); system(cmd); return 0; }%1$c%1$cEXEC(SOURCE)"

#define EXEC(source) int main(void) { if (N<1) return 0; char filename[10], cmd[64]; snprintf(filename, sizeof(filename), SEED "%d" EXT, D(N)); FILE *f=fopen(filename, "w"); if (f) { fprintf(f,source,10,D(N),34,source); } fclose(f); snprintf(cmd, sizeof(cmd), CMD SEED "%1$d" " " SEED "%1$d" EXT "; ./" SEED "%1$d", D(N)); system(cmd); return 0; }

EXEC(SOURCE);
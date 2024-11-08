#include <stdio.h>

#define FILENAME "Grace_kid.c"

#define SOURCE "#include <stdio.h>%1$c%1$c#define FILENAME %2$cGrace_kid.c%2$c%1$c%1$c#define SOURCE %2$c%3$s%2$c%1$c%1$c#define EXEC(source) int main(void) { FILE *f=fopen(FILENAME, %2$cw%2$c); if (f) { fprintf(f,source,10,34,source); fclose(f); } return 0; }%1$c%1$cEXEC(SOURCE)"

#define EXEC(source) int main(void) { FILE *f=fopen(FILENAME, "w"); if (f) { fprintf(f,source,10,34,source); fclose(f); } return 0; }

EXEC(SOURCE)
#include <stdio.h>//Comment outside

void banana() { return ; }

int main(void) { /*Comment inside*/ banana(); char *s = "#include <stdio.h>//Comment outside%1$c%1$cvoid banana() { return ; }%1$c%1$cint main(void) { /*Comment inside*/ banana(); char *s = %2$c%3$s%2$c; printf(s,10,34,s); return 0; }"; printf(s,10,34,s); return 0; }
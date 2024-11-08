#include <stdio.h>

int main(void) { char *s = "#include <stdio.h>%1$c%1$cint main(void) { char *s = %2$c%3$s%2$c; printf(s,10,34,s); return 0; }"; printf(s,10,34,s); return 0; }
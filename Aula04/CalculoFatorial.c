#include <stdio.h>
int main() {
int n,s,p;
long r,r1,r2,r3;
    scanf("%d", &n);
    scanf("%d", &s);
r1 = n;
r2 = s;
p = n-s;
r3=p;

while(n>1){
    r1 = r1*(n-1);
    n--;
}
while(s>1){
    r2 = r2*(s-1);
    s--;
}
while(p>1){
    r3 = r3*(p-1);
    p--;
}
if(p==0||s==0){
    r=1;
    printf("%ld\n", r);
}else{
    r = r1/(r2*r3);
    printf("%ld\n", r);
}

return 0; }

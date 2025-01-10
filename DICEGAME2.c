#include <stdio.h>

int main() {
    int sum1, sum2, min1, min2, t, a1, a2, a3, b1, b2, b3;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3);
        min1=a1<a2&&a1<a3?a1:a2<a3?a2:a3;
        min2=b1<b2&&b1<b3?b1:b2<b3?b2:b3;
        sum1=min1==a1?a2+a3:min1==a2?a1+a3:a1+a2;
        sum2=min2==b1?b2+b3:min2==b2?b1+b3:b1+b2;
        printf(sum1>sum2?"Alice\n":sum1<sum2?"Bob\n":"Tie\n");
    }
    return 0;
}

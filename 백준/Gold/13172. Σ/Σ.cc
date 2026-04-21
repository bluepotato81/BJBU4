#include <stdio.h>

#define mod 1000000007

long long r(long long a,long long b) {

    while(b!=0) {
        int t=b;
        b=a%b;
        a=t;
    }

    return a;
}

long long f(long long base, long long exp) {
    long long res=1;
    while (exp>0) {
        if (exp%2==1) res=(res*base)%mod;
        base=(base*base)%mod;
        exp/=2;
    }
    return res;
}

int main() {
    long long m;
    scanf("%d", &m);
    long long ans=0;
    for(int i=0; i<m;i++) {
        long long n,s;
        scanf("%lld %lld", &n, &s);
        long long k=r(n,s);

        s/=k;
        n/=k;
        long long l=f(n, mod-2);
        long long o = (l*s)%mod;
        ans+=o;
        ans%=mod;

    }

    printf("%lld", ans%mod);

    return 0;
}

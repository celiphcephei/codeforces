// @author: RenatoGM
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define debug(x) cout << #x << " = " << x << endl;
#define gc getchar();

bool is_prime(int n){
    if(n<=1) return false;
    for(int i{2}; i*i<=n; ++i)
        if(n%i==0) return false;
    return true;
}

int main(){
    int w; scanf("%d", &w);
    (w > 2 && w % 2 == 0) ? printf("YES\n") : printf("NO\n");
    return 0;
}

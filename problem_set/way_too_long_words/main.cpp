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

void solve(){
    string word; cin >> word;
    if(word.size() < 11) cout << word << '\n';
    else printf("%c%d%c\n", word[0], (int) word.size() - 2, word[word.size() - 1]);
}

int main(){
    int n; scanf("%d", &n);
    while(n--) solve();
    return 0;
}


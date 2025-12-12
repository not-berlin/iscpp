#include <bits/stdc++.h>
const int N = 100002;
using namespace std;
int p[N];
void sang(){
    fill (p + 2, p + N, 1);
    for (int i = 1; i * i <= N; i++){
        if (p[i] == 0){
            for (int j = i*i; j <= N; j++) p[i] == 0;
        }
    }
}
int snum(int a){
    int t = 0;
    while (a > 0){
        t += (a % 10);
        a = a / 10;
    }
    return a;
}
int n, h;
int main(){
    cin >> n >> h;
    sang();
    
}
#include <bits/stdc++.h>

using namespace std;
int a[1005], b[1005];
int n, k;
vector<int> x;
vector<int> kq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("tree.inp","r",stdin);
    freopen("tree.out","w",stdout);
    cin >> n >> k;
    x.resize(n+2), kq.resize(n+2);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int kq_min = 1001;
    for (int b1 = 1; b1 <= 1000; b1++){
        b[1] = b1;//biết b1, biết tất cả các cây còn lại
        for (int i = 2; i <= n; i++){
            b[i] = b[i-1] + k; //cái này hiểu là hàng cây mong muốn khi b1 có giá trị như vậy
        }
        int ans = 0;
        for (int i = 1; i <= n; i++){
            if (a[i] != b[i]){ //nếu cây thứ i của nữ hoàng không giống với cây mong muốn
                ans++;// tăng thêm 1 bước để người làm vườn sửa
            }
            x[i] = b[i] - a[i];// cần cho cao hơn hay lùn đi bao nhiêu
        }
        if (kq_min > ans){
            kq_min = ans;
            kq = x; //có thể cho hai vector bằng nhau khi chúng cùng số phần tử
        }// nói cách khác, thay toàn bộ phần tử của kq bằng các phần tử của x
    }
    cout << kq_min << '\n'; //xuất ra cách làm ít công sức của người làm vườn nhất
    for (int i = 1; i <= n; i++){
        if (kq[i] != 0){
            if (kq[i] > 0){
                cout << "+ " << i << " " << kq[i] << '\n';
            } 
            if (kq[i] < 0){
                cout << "- " << i << " " << abs(kq[i]) << '\n';
            }
        }
    }
    return 0;
} 
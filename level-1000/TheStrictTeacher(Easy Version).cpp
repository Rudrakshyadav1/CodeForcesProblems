// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--){
//         int n, m, q, d;
//         cin >> n >> m >> q;
//         vector<int> teacher(m);
//         for (int i = 0; i < m; i++){
//             cin >> teacher[i];
//         }
//         cin >> d;
//         d--;  
//         sort(teacher.begin(), teacher.end());
//         int mini = teacher[0] - 1;
//         int maxi = teacher[m - 1] - 1;
//         int ans = 0;
//         if (d < mini){
//             cout << mini << endl;
//             continue;
//         }
//         else if (d > maxi){
//             cout << n - 1 - maxi << endl;
//             continue;
//         }
//         else{
//             for (int i = 0; i < m; i++){
//                 if (teacher[i] - 1 > d) {
//                     maxi = teacher[i] - 1;
//                     break;
//                 }
//             }
//             for (int i = m - 1; i >= 0; i--){
//                 if (teacher[i] - 1 < d) {
//                     mini = teacher[i] - 1;
//                     break;
//                 }
//             }
//             int gapleft = d - mini - 1;
//             int gapright = maxi - d - 1;
//             if(gapleft==0 && gapright==0){
//                 ans+=1;
//                 cout<<ans<<endl;
//                 continue;
//             }
//             if ((gapleft == 0 && gapright == 1) || (gapright == 0 && gapleft == 1)){
//                 ans += 1;
//                 cout << ans << endl;
//                 continue;
//             }
//             if (gapleft == gapright){
//                 ans += (gapleft + 1);
//                 cout << ans << endl;
//                 continue;
//             }
//             if ((gapleft == 2 && gapright == 1) || (gapright == 2 || gapleft == 1)){
//                 ans += 2;
//                 cout << ans << endl;
//                 continue;
//             }
//             else{
//                 if (gapleft > gapright){
//                     d--;
//                     mini++;
//                     maxi--;
//                     ans++;
//                     gapleft = d - mini - 1;
//                     gapright = maxi - d - 1;
//                 }
//                 else{
//                     d++;
//                     mini++;
//                     maxi--;
//                     ans++;
//                     gapleft = d - mini - 1;
//                     gapright = maxi - d - 1;
//                 }
//             }
//         }
//     }
// }

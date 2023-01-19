//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct Runner {
//    int x, y, d, l;
//};
//struct Catcher{
//    int x, y, d;
//};
//int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
//int menhatan(pair<int, int> a, pair<int, int> b) { return abs(a.first - b.first) + abs(a.second - b.second); }
//int N, M, H, K, board[100][100];
//vector<Runner> runners;
//int tree[100][100];
//int catcher_x, catcher_y,catcher_d;
//vector<Catcher> catchers;
//int score = 0;
//
//void playTurn() {
//    for (Runner &runner : runners){
//        if (runner.l == 1 &&
//            menhatan(make_pair(catcher_x, catcher_y), make_pair(runner.x, runner.y)) <= 3) {
//            int nx = runner.x + dx[runner.d], ny = runner.y + dy[runner.d];
//            if (1 <= nx and nx <= N and 1 <= ny and ny <= N) {
//                if (catcher_x == nx and catcher_y == ny) continue;
//                runner.x = nx, runner.y = ny;
//            }
//            else {
//                runner.d = (runner.d + 2) % 4;
//                nx = runner.x + dx[runner.d], ny = runner.y + dy[runner.d];
//                if (not (catcher_x == nx and catcher_y == ny))
//                    runner.x = nx, runner.y = ny;
//            }
//        }
//    }
//    return;
//}
//
//void catcherMove(int turn) {
//    int turn2 = (turn - 1 +1) % (2 * N*N - 2);
//    catcher_x = catchers[turn2].x;
//    catcher_y = catchers[turn2].y;
//    catcher_d = catchers[turn2].d;
//}
//
//void roll() {
//    int x = 1, y = 1,d=2;
//    int visited[100][100] = { {0,}, };
//    vector<Catcher> catchers2;
//    for (int i = 1; i <= N*N - 1; i++) {
//        int nx = x + dx[d], ny = y + dy[d];
//        if (nx < 1 or N < nx or ny < 1 or N < ny or visited[nx][ny] > 0)
//            d = (d + 3) % 4;
//        catchers2.push_back({ x,y,d });
//        visited[x][y] = i;
//        x += dx[d], y += dy[d];
//    }
//    visited[N / 2 + 1][N / 2 + 1] = N*N;
//    x = N / 2 + 1, y = N / 2 + 1, d = 0;
//    for (int i = 1; i <= N * N - 1; i++) {
//        int nx = x + dx[d], ny = y + dy[d];
//        if (nx < 1 or N < nx or ny < 1 or N < ny or visited[nx][ny] !=visited[x][y]-1)
//            d = (d + 1) % 4;
//        catchers.push_back({ x,y,d });
//        visited[x][y] = i;
//        x += dx[d], y += dy[d];
//    }
//    for (Catcher catcher : catchers2) catchers.push_back(catcher);
//    catchers.pop_back();
//}
//
//void _catch(int t) {
//    int x = catcher_x, y = catcher_y, d = catcher_d;
//    for (int s = 0; s < 3; s++) {
//        int nx = x + s   * dx[d], ny = y + s * dy[d];
//        if (1 <= nx and nx <= N and 1 <= ny and ny <= N and tree[nx][ny] == 0) {
//            for (Runner &runner : runners) if (runner.l == 1) {
//                    if (runner.x == nx and runner.y == ny) {
//                        runner.l = 0;
//                        score += t;
//                    }
//                }
//        }
//    }
//}
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cin >> N >> M >> H >> K;
//    catcher_x = N / 2 + 1, catcher_y = N/2 +1;
//    roll();
//    while (M--) {
//        int x, y, move_type;
//        cin >> x >> y >> move_type;
//        runners.push_back({ x,y,move_type==1 ? 1 : 2,1 });
//    }
//    while (H--) {
//        int x, y;
//        cin >> x >> y;
//        tree[x][y] = 1;
//    }
//    for (int turn = 1; turn <= K; turn++) {
//        playTurn();
//        catcherMove(turn);
//        _catch(turn);
//    }
//    cout << score;
//    return 0;
//}
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

vector<string> answer; //정답 저장용 벡터
vector<bool> visited; //방문 표시용
vector<string> routes; //dfs 루트 업데이트용
vector<vector<string>> gTickets; //전역 벡터 Tickets
string endRoute; //마지막 도착지
int n = 0; //tickets 사이즈

//내림차순 정렬이유: 내림차순해야 dfs 마지막으로 도는 것이 오름차순 순열로 나오기 때문
bool cmp(vector<string> a, vector<string> b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];
    }
    return a[0] > b[0];
}

void dfs(int cnt, string start) {
    if (cnt == n) {
        //인천에서 시작한 순열이 아니라면
        if (routes[0] != "ICN") {
            return;
        }
        //정답에 저장 후 마지막 도착지 push_back
        answer = routes;
        answer.push_back(endRoute);
        return;
    }

    for (int i = 0; i < gTickets.size(); i++) {
        //현재 출발지가 같은 표를 발견했다면
        if (!visited[i] && start == gTickets[i][0]) {
            visited[i] = true;
            routes[cnt] = gTickets[i][0];
            endRoute = gTickets[i][1];
            //표의 목적지를 출발지로 설정 후 dfs
            dfs(cnt + 1, gTickets[i][1]);
            visited[i] = false;
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {

    //티켓 사이즈만큼 초기화
    vector<bool> v(tickets.size(), 0);
    visited = v;
    vector<string> vv(tickets.size(), "");
    routes = vv;

    n = tickets.size();
    gTickets = tickets;

    sort(gTickets.begin(), gTickets.end(), cmp);

    dfs(0, "ICN");

    return answer;
}

int main() {

    return 0;
}
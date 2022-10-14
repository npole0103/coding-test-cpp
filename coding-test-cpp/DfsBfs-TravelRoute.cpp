#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

vector<string> answer; //���� ����� ����
vector<bool> visited; //�湮 ǥ�ÿ�
vector<string> routes; //dfs ��Ʈ ������Ʈ��
vector<vector<string>> gTickets; //���� ���� Tickets
string endRoute; //������ ������
int n = 0; //tickets ������

//�������� ��������: ���������ؾ� dfs ���������� ���� ���� �������� ������ ������ ����
bool cmp(vector<string> a, vector<string> b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];
    }
    return a[0] > b[0];
}

void dfs(int cnt, string start) {
    if (cnt == n) {
        //��õ���� ������ ������ �ƴ϶��
        if (routes[0] != "ICN") {
            return;
        }
        //���信 ���� �� ������ ������ push_back
        answer = routes;
        answer.push_back(endRoute);
        return;
    }

    for (int i = 0; i < gTickets.size(); i++) {
        //���� ������� ���� ǥ�� �߰��ߴٸ�
        if (!visited[i] && start == gTickets[i][0]) {
            visited[i] = true;
            routes[cnt] = gTickets[i][0];
            endRoute = gTickets[i][1];
            //ǥ�� �������� ������� ���� �� dfs
            dfs(cnt + 1, gTickets[i][1]);
            visited[i] = false;
        }
    }
}

vector<string> solution(vector<vector<string>> tickets) {

    //Ƽ�� �����ŭ �ʱ�ȭ
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
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int data;

    for (int move : moves) {
        for (int i = 0; i < board.size(); i++) {
            data = board[i][move - 1];
            if (data == 0) continue;
            if ((vector<int, allocator<int>>)data == board[board.size() - 1]) {
                board.pop_back();
                answer += 2;
            }
            else {
                board.push_back((vector<int, allocator<int>>)data);
            }
            board[i][move - 1] = 0;
            break;
        }
    };
    return answer;
}
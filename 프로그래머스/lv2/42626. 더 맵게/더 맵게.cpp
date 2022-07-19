#include <string>
#include <vector>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>

using namespace std;

#define MAX 1000001



int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    while (pq.size() > 1 && pq.top() < K) {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        pq.push(first + (second * 2));
        answer++;
    }
    return pq.top() < K ? -1 : answer;
}
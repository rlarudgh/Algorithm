#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct{
    string name;
    int korean, english, math;
}Students;

bool compare(Students a, Students b) {
    return a.korean == b.korean && a.english == b.english && a.math == b.math ? a.name < b.name : a.korean == b.korean && a.english == b.english ? a.math > b.math : a.korean == b.korean ? a.english < b.english : a.korean > b.korean;
}

int main() {
    int N;
    cin >> N;
    vector<Students>  v(N);
    for (int i=0; i<N; i++) cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++) cout << v[i].name << '\n';
 
}

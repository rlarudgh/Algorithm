#include<iostream>
#include<algorithm>

using namespace std;

typedef struct{
  int x, y;
}Point;

bool compare(const Point& p1, const Point& p2){
  return p1.y == p2.y ? (p1.x < p2.x) : (p1.y < p2.y);
}

int main(){
  int n;
  cin >> n;
  Point *p = new Point[n];
  for(int i = 0; i < n; i++){
    cin >> p[i].x >> p[i].y;
  }
  sort(p, p + n, compare);
  for(int i = 0; i < n; i++){
    cout << p[i].x << " " << p[i].y << '\n';
  }
  return 0;
}
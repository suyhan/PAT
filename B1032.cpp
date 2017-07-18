#include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};   // 记录每个学校的总分

int main(){
  int n, schID, score;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d%d", &schID, &score);  //学校ID、分数
    school[schID] += score;  //学校schID的总分增加score
  }
  int k = 1, MAX = -1;  //最高总分的学校以及其总分
  for(int i = 1; i <= n; i++){ //从所有学校中选出总分最高的一个
    if(school[i] > MAX){
        MAX = school[i];
        k = i;
    }

  }
  printf("%d %d\n", k, MAX);  //输出最高总分的学校ID及其总分
  return 0;
}

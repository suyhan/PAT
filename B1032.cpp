#include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};   // ��¼ÿ��ѧУ���ܷ�

int main(){
  int n, schID, score;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d%d", &schID, &score);  //ѧУID������
    school[schID] += score;  //ѧУschID���ܷ�����score
  }
  int k = 1, MAX = -1;  //����ֵܷ�ѧУ�Լ����ܷ�
  for(int i = 1; i <= n; i++){ //������ѧУ��ѡ���ܷ���ߵ�һ��
    if(school[i] > MAX){
        MAX = school[i];
        k = i;
    }

  }
  printf("%d %d\n", k, MAX);  //�������ֵܷ�ѧУID�����ܷ�
  return 0;
}

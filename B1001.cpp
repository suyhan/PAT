#include <cstdio>

int main(){
    int n, step = 0;
    scanf("%d", &n);  //������Ŀ������n
    while(n != 1){    //ѭ���ж�n�Ƿ�Ϊ1
      if(n % 2 == 0) n = n / 2; //���n��ż��
      else n = (3 * n + 1) / 2; //���n������
      step++;  //��������1

    }
    printf("%d\n", step);
    return 0;
}

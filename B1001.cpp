#include <cstdio>

int main(){
    int n, step = 0;
    scanf("%d", &n);  //输入题目给出的n
    while(n != 1){    //循环判断n是否为1
      if(n % 2 == 0) n = n / 2; //如果n是偶数
      else n = (3 * n + 1) / 2; //如果n是奇数
      step++;  //计数器加1

    }
    printf("%d\n", step);
    return 0;
}

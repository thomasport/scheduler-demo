#include <stdio.h>

int main() {
  int a[5];
  int n;
  int resto;
  int j;
  int flag =0;
  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i<=n; i++) {
      if(i!=0){
        for(j=0;j<=4;j++) {
          resto=i%a[j];
          if(resto==0)  {
            printf("%d", j);
            flag=1;
          }
        }
        if(flag==0){
          printf("-");
        }
        flag=0;
        printf("\n");
        }

  }

  return 0;
}

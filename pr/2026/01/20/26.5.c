#include <stdio.h>

int main(void)
{
 int total_second, hours, minutes, seconds;
 printf("total_second = ");
 scanf("%d", &total_second);
 hours = total_second / 3600;
 minutes = total_second % 3600 / 60;
 seconds = total_second % 60;

 printf("%d時間%d分%d秒です\n", hours, minutes, seconds);

return 0;
}

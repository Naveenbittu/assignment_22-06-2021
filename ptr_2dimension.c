#include<stdio.h>
int main()
{
    int arr[3][4]=
        {
            {10,11,12,13},
            {20,21,22,23},
            {30,31,32,33}
            };

        int i,j;
        for(i=0;i<3;i++)
        {
            printf("address of %dth array=%u  %u\n",*(arr+i));
            for(j=0;j<4;j++)
            {
                printf("arr[i][j]=%d\n ",arr[i][j]);
                printf("*(*(arr+i)+j)=%d\n" ,*(*(arr+i)+j));
                printf("*(*(arr+i)+j)=%d\n" ,*(*(arr+i)+j));
            }
            printf("\n");
        }
}
#if 0
address of 6356664th array=1990815293  1990815267
arr[i][j]=10
 *(*(arr+i)+j)=10
*(*(arr+i)+j)=10
arr[i][j]=11
 *(*(arr+i)+j)=11
*(*(arr+i)+j)=11
arr[i][j]=12
 *(*(arr+i)+j)=12
*(*(arr+i)+j)=12
arr[i][j]=13
 *(*(arr+i)+j)=13
*(*(arr+i)+j)=13

address of 6356680th array=1990815293  1990815267
arr[i][j]=20
 *(*(arr+i)+j)=20
*(*(arr+i)+j)=20
arr[i][j]=21
 *(*(arr+i)+j)=21
*(*(arr+i)+j)=21
arr[i][j]=22
 *(*(arr+i)+j)=22
*(*(arr+i)+j)=22
arr[i][j]=23
 *(*(arr+i)+j)=23
*(*(arr+i)+j)=23

address of 6356696th array=1990815293  1990815267
arr[i][j]=30
 *(*(arr+i)+j)=30
*(*(arr+i)+j)=30
arr[i][j]=31
 *(*(arr+i)+j)=31
*(*(arr+i)+j)=31
arr[i][j]=32
 *(*(arr+i)+j)=32
*(*(arr+i)+j)=32
arr[i][j]=33
 *(*(arr+i)+j)=33
*(*(arr+i)+j)=33
#endif // 0

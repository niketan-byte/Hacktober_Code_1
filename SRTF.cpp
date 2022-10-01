#include <stdio.h>
#include <conio.h>
int main() 
{
    int at[100],bt[100],y[100],smallest,count=0,time,n;
    double avg=0,turnaround=0,end;
    printf("enter the number of Processes:\n\t");
    scanf("%d",&n); 
    printf("enter arrival time\n");
    for(int i=0;i<n;i++)
        {printf("\t");
            scanf("%d",&at[i]);}
    printf("enter burst time\n");
    for(int i=0;i<n;i++)
        {printf("\t");
        scanf("%d",&bt[i]); }
    for(int i=0;i<n;i++)
        y[i]=bt[i];
    bt[9]=9999;
    for(time=0;count!=n;time++)
    {
        smallest=9;
        for(int i=0;i<n;i++)
        {
            if(at[i]<=time && bt[i]<bt[smallest] && bt[i]>0 )
                smallest=i;
        }
        bt[smallest]--;
        if(bt[smallest]==0)
        {
            count++;
            end=time+1;
            avg=avg+end-at[smallest]-y[smallest];
            turnaround=turnaround+end-at[smallest];
        }
    }
    printf("\nAverage waiting time = %lf\n",avg/n);
    printf("Average Turnaround time = %lf",turnaround/n);

    getch();
    return 0;
}

#include <stdio.h>

struct process{

    int process_id;
    int cpu_id;
    char state[10];
    int parent_id ; 
    int waiting_time; 
};

int main()
{
    struct process test[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Process Id: ");
        scanf("%d",&test[i].process_id);

        printf("Enter CPU Id: ");
        scanf("%d",&test[i].cpu_id);
    
        printf("Enter process state: ");
        scanf("%s",test[i].state);

        printf("Enter Parent Id: ");
        scanf("%d",&test[i].parent_id);

        printf("Enter Waiting Time : ");
        scanf("%d",&test[i].waiting_time);
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" \t %d process_id:  %d  , cpu_id:  %d \n",i+1,test[i].parent_id,test[i].cpu_id);
    }
    
    return 0 ; 
}
#include<stdio.h>
int main()
{
    int amount,i,notes[9]={500,200,100,50,20,10,5,2,1},num_of_notes[9];
    printf("Enter the amount\n");
    scanf("%d",&amount);

    for(i=0;i<9;i++)
    {
        num_of_notes[i]=amount/notes[i];
        amount=amount%notes[i];
    }
    for(i=0;i<9;i++)
    {
        printf("number of %d notes : %d \n",notes[i],num_of_notes[i]);
    }
    return 0;
}
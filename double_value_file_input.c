#include<stdio.h>
#include<stdlib.h>

    // failed sample............................................simple below
    // int main()
    // {
        // int n=1,*size,b;
        // char c;
        // FILE *ptr;
        // ptr= fopen("double_value.txt","r");
        // c = fgetc(ptr);
        // while (c != EOF)
        // {
            // if (c==' ')
            // {
                // n++;
            // }
            // c = fgetc(ptr);
        // }
        // size = &b;
        // b = malloc(n*sizeof(int));
        // for (int i = size; i <= b; i + sizeof(int))
        // {
            // fscanf(ptr,"%d",size);
            // printf("%d\n",*size);
        // }
        // 
        // return 0;
    // }
    int main()
    {
        int store[50];
        int i=0;
        FILE *ptr;
        ptr = fopen("double_value.txt","r");
        fscanf(ptr, "%d",&store[i]);
        //printf("%d\n",i);
        while (store[i] != 1)
        {
            store[i]= 2*store[i];
            i++;
            fscanf(ptr, "%d",&store[i]);
            
        }
        fclose(ptr);
        ptr = fopen("double_value.txt","w");
        for (int j = 0; j < i; j++)
        {
            printf("%d\n",store[j]);
            fprintf(ptr,"%d\n",store[j]);
        }
        fprintf(ptr,"1");
        fclose(ptr);
        return 0;
    }
    
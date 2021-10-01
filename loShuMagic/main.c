#include <stdio.h>
#include <stdbool.h>

const int SIZE = 3;


int checkRow(int array[][SIZE]);
int checkColumn(int array[][SIZE]);
int checkDiagonal(int array[][SIZE]);
int checkOtherDiagonal(int array[][SIZE]);
void swap(int array[][SIZE], int i, int j);
void shuffle(int array[][SIZE]);

int main(){
    int array[3][3]={1,2,3,4,5,6,7,8,9};
    int temp;
    int count =0;
    do{
        for(int i = 0; i<SIZE; i++){
            for (int j = 0; j < SIZE; j++){
                int a = rand()%3;
                int b = rand()%3;

                temp = array[i][j];
                array[i][j]=array[a][b];
                array[a][b]=temp;
            }
            
        }

        printf("Square:\n");
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++)
                printf("%3d ", array[i][j]);
        printf("\n");
        }
    count++;
        
    }while((checkColumn(array)+checkRow(array)+checkDiagonal(array)+checkOtherDiagonal(array))!=4);

    printf("count: %d\nbefore finding the magic square\n", count-1);

    printf("The Magic Square:\n");
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++)
                printf("%3d ", array[i][j]);
            printf("\n");
        }
}


int checkRow(int array[][SIZE]){
    int sum = 0;
    for(int row=0; row<SIZE;row++){
        sum=0;

        for(int column = 0; column<SIZE;column++)
            sum+=array[row][column];

        if(sum!=15)
            return 0;
    }
    return 1;
}

int checkColumn(int array[][SIZE]){
    int sum = 0;
    for(int column=0; column<SIZE;column++){
        sum=0;

        for(int row = 0; row<SIZE;row++)
            sum+=array[row][column];

        if(sum!=15)
            return 0;
    }
    return 1;
}

int checkDiagonal(int array[][SIZE]){
    int sum = 0;
    for(int i = 0; i<SIZE; i++){
        sum += array[i][i];
    }

    if(sum!=15)
        return 0;

    return 1;
}

int checkOtherDiagonal(int array[][SIZE]){
    int sum = 0;
    for(int i = SIZE-1; i>=0; i--){
        sum += array[i][i];
    }

    if(sum!=15)
        return 0;

    return 1;
}
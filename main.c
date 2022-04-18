#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int cokBoyutluDizi[3][2] = {1,2,3,4,5,6};
    int cokBoyutluDizi2 [3][2] = {{11,12},{13,14},{15,16}};

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){

        printf("%d",cokBoyutluDizi[i][j]);
        printf("\n");

        }
    }


    printf("***************************\n");



    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){

        printf("%d",cokBoyutluDizi2[i][j]);
        printf(" ");

        }
        printf("\n");
    }



    return 0;
}

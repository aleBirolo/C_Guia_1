#include <stdio.h>
#include <stdlib.h>
#define FIL 2
#define COL 3

int main()
{

    int i,
        j,
        mat[FIL][COL]={{1,2,3},{4,5,6}},
        *ptr;

    ptr=*mat;
    /*
    char *pa="a", *pb="b", *pc="c", *pd="d", *pe="e", *pf="f";

    char *mat[FIL][COL]={{pa,pb,pc},{pd,pe,pf}};
*/
    printf("\n%x", mat);
    printf("\n%x", &mat);
    printf("\n%x", *mat);
    printf("\n%x", &mat[0]);
    printf("\n%x", mat[0]);
    printf("\n%x", *mat[0]);
    printf("\n%x", *mat[0][0]);
    printf("\n%x", mat[0][0]);
    printf("\n%x", &mat[0][0]);
*/



    for (i=0; i< FIL; i++)
        for(j=0;j<COL;j++)
            printf(" %d ",*(ptr++));

}

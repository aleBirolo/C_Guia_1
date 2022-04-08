#include "Matrix.h"

void mostrar_mat (int m[][TAM],int f,int c){
    int i,j;
    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            printf("|%3d|",m[i][j]);
        }
        printf("\n");
    }
}

void debajo_diag_ppal (int m[][TAM],int ord){

    int i,j;
    for (i=0;i<ord;i++){
        for (j=0;j<i;j++){/// en vez de un if pongo j<i
            printf(" %3d |",m[i][j]);
        }
        printf("\n");
    }
}

/******************************* TRIANGULOS *************************************************/
void triangulo_superior (int m[][TAM],int ord){

    int i,j;
    for (i=0;i<=ord/2;i++){/// divido por 2 para no recorrer la mitad de abajo
        printf("%*s",3*i,"");
        for (j=i+1;j<(ord)-1-i;j++){/// j<ord-1-i por que j>i por un lado y j+i=orden-1
                printf("%-3d",m[i][j]);
            /*if ((j+i)<ord-1 && j>i) {printf("|+%-1d+|",m[i][j]);}
            else {printf("| %-1d |",m[i][j]);}*/
        }
        printf("\n");
    }

}

void triangulo_izquierda (int m[][TAM],int ord){

    int i,j;
    ///j+i < orden - 1 izq diagonal secundaria
    ///i>j debajo diagonal
    for (i=0;i<ord;i++){
        for (j=0;(j+i)<(ord)-1&&j<i;j++){
            printf("%-3d",m[i][j]);
        }
        printf("\n");
    }
}

void triangulo_derecha (int m[][TAM],int ord){

    int i,j,inij;
    ///i+j > orden - 1
    ///i<j arriba diagonal
    for (i=0;i<ord;i++){
        //inij=ord-1-i>i? ord-1-i:i;// equivalente inij=MAYOR(ord-1-i,i) es una macro
        inij=MAYOR(ord-1-i,i);
        printf("\n%*s",3*inij,"");/// aplicar esta manera de mostrar a los otros triagulos
        ///%* cant de caracteres pero por variable
        for (j=inij;j<ord;j++){// version profe
            //printf("i:%d + j;%d = %d\n",i,j,(j+i));
            printf("%3d",m[i][j]);
        }
    }

}

void triangulo_abajo (int m[][TAM],int ord){

    int i,j,inij;
    for (i=0;i<ord;i++){
        inij=MENOR(ord-1-i,i);
        printf("%*s",3*inij,"");
        for (j=0;j<i;j++){/// i+j < orden - 1 izq diagonal secundaria
                if((j+i)>ord-1)
                    printf("%-3d",m[i][j]);
        }
        printf("\n");
    }
}

/******************************* TRAZAS *************************************************/
int traza_mat (int m[][TAM],int ord){
    int i,sum=0;
    for (i=0;i<ord;i++){
        sum+=m[i][i];
    }
    return sum;
}

int traza_mat_sec (int m[][TAM],int ord){

    int i,j,sum=0;
    for (j=ord-1,i=0; i<ord; j--,i++){
        sum+=m[i][j];
    }
    return sum;
}

/********************************************************************************/
int es_simetrica(int m[][TAM],int ord){

    int i,j,res=0;
    mostrar_mat(m,ord,ord);
    for (i=0;i<ord;i++){
        for (j=0;j<i;j++){
            if ((m[i][j]- m[j][i])!=0)
                res=1;
        }
    }
    //printf("\nres: %d\n",res);
    return res;
}

/********************************************************************************/
void transponer_cuad (int m[][TAM],int ord){

    int i,j;
    for (i=0;i<ord;i++){
        for (j=0;j<i;j++){
            INTERCAMBIAR((m[i][j]),(m[j][i]));
        }
    }
}

void transponer (int m[][TAM],int f,int c){

    int i,j;
    int m_t[c][f];
    for (i=0;i<f;i++){
        //printf("\n#");
        for (j=0;j<c;j++){
            m_t[j][i]=m[i][j];
            //printf(" m:|%d| vs m_t:|%d| ",m[i][j],m_t[j][i]);
        }
    }

    printf("\ntranspuesta: \n\n");
    for (i=0;i<c;i++){
        for (j=0;j<f;j++){
            printf("|%3d|",m_t[i][j]);
        }
        printf("\n");
    }
    /// que tengo que hacer para que funcione mostrar mat
    //mostrar_mat(m_t,c,f);
}

void transponer_cuad_desde_centro(int m[][TAM],int ord){

    int i,j,i_t,j_t;// _t representa lo mismo pero en la otra punta
    for (i=0,i_t=ord-1; i<ord/2; i++,i_t--){
        for (j=0,j_t=ord-1; j<ord/2; j++,j_t--){
            INTERCAMBIAR((m[i][j]),(m[i_t][j_t]));
        }
    }
}
/****************** INTERCAMBIAR CUADRANTES ******************************************/
void intercambiar_cuadrantes_C1_C2(int m[][TAM],int ord){

    int i,j,j_t,i_t;// _t representa lo mismo pero en la otra punta
    //printf("ord/2: %d",ord);
    for (i=0,i_t=0; i<ord/2,i_t<ord/2; i++,i_t++){
        for (j=0,j_t=ord/2+1; j<ord/2,j_t<ord; j++,j_t++){
            INTERCAMBIAR((m[i][j]),(m[i_t][j_t]));
        }
    }
}

void intercambiar_cuadrantes_C1_C3(int m[][TAM],int ord){

    int i,j,j_t,i_t;// _t representa lo mismo pero en la otra punta
    //printf("ord/2: %d",ord);
    for (i=0,i_t=0; i<ord/2,i_t<ord/2; i++,i_t++){
        for (j=0,j_t=ord/2+1; j<ord/2,j_t<ord; j++,j_t++){
            INTERCAMBIAR((m[j][i]),(m[j_t][i_t]));
        }
    }
}

void intercambiar_cuadrantes_C1_C4(int m[][TAM],int ord){

    int i,j,j_t,i_t;// _t representa lo mismo pero en la otra punta
    //printf("ord/2: %d",ord);
    for (i=0,i_t=ord/2+1; i<ord/2,i_t<ord; i++,i_t++){
        for (j=0,j_t=ord/2+1; j<ord/2,j_t<ord; j++,j_t++){
            INTERCAMBIAR((m[i][j]),(m[i_t][j_t]));
        }
        ///return;
    }
}

void intercambiar_cuadrantes_C2_C3(int m[][TAM],int ord){

    int i,j,j_t,i_t;// _t representa lo mismo pero en la otra punta
    //printf("ord/2: %d",ord);
    for (i=0,i_t=ord/2+1; i<ord/2,i_t<ord; i++,i_t++){
        for (j=ord/2+1,j_t=0; j<ord,j_t<ord/2; j++,j_t++){
            INTERCAMBIAR((m[i][j]),(m[i_t][j_t]));
        }
    }
}

void intercambiar_cuadrantes_C2_C4(int m[][TAM],int ord){

    int i,j,j_t,i_t;// _t representa lo mismo pero en la otra punta
    //printf("ord/2: %d",ord);
    for (i=0,i_t=ord/2+1; i<ord/2,i_t<ord; i++,i_t++){
        for (j=ord/2+1,j_t=ord/2+1; j<ord,j_t<ord; j++,j_t++){
            INTERCAMBIAR((m[i][j]),(m[i_t][j_t]));
        }
    }
}

void intercambiar_cuadrantes_C3_C4(int m[][TAM],int ord){

    int i,j,j_t,i_t;// _t representa lo mismo pero en la otra punta
    //printf("ord/2: %d",ord);
    for (i=ord/2+1,i_t=ord/2+1; i<ord,i_t<ord; i++,i_t++){
        for (j=0,j_t=ord/2+1; j<ord/2,j_t<ord; j++,j_t++){
            INTERCAMBIAR((m[i][j]),(m[i_t][j_t]));
        }
    }
}
/********************************************************************************/
void rotacion_eje_inferior(int m [][TAM],int f,int c)
{
    int i,j;
    int m_r[f][c];
    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            m_r[j][c-i-1]=m[i][j];
            //printf("\n(i,j) (%d,%d) => (%d,%d)",i,j,j,c-i-1);
        }
    }

    for (i=0;i<c;i++){
        for (j=0;j<f;j++){
            printf("|%3d|",m_r[i][j]);
        }
        printf("\n");
    }
    //mostrar_mat(m_r,f,c);
}

int prod_mat (int m1[][TAM],int f1,int c1,int m2[][TAM],int f2,int c2){

    if (c1!=f2){
        printf("las columnas del primero tienen q ser iguales a las filas del primero");
        return 1;}

    int i,j,k,m_res[f1][c2],res=0;

    for (k=0;k<c2;k++){
        for (i=0;i<f1;i++){
                res=0;
            for (j=0;j<c1;j++){
                /*printf(" & ");
                printf("m1[%d][%d]=|%d| #",i,j,m1[i][j]);
                printf(" m2[%d][%d]=|%d|",j,k,m2[j][k]);*/
                res+=m1[i][j]*m2[j][k];
            }
            m_res[i][k]=res;
        }
    }

    for (i=0;i<f1;i++){
        for (j=0;j<c2;j++){
           m2[i][j]=m_res[i][j];
        }
        //printf("\n");
    }

    return 0;
}




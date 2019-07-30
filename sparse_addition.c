int main(){

int r,r1,c,c1,nz,nz1;

printf("WELCOME TO THE WORLD OF SPARSE MATRIX\n");

printf("ENTER THE DATA OF THE 1ST SPARSE MATRIX\n");

printf("ENTER THE NUMBER OF ROWS\n");
scanf("%d", &r);

printf("ENTER THE NUMBER OF COLUMNS\n");
scanf("%d", &c);

printf("ENTER THE NUMBER OF NON ZERO ELEMENTS\n");
scanf("%d", &nz);

int sparse[(nz+1)][3];

sparse[0][0] = r;

sparse[0][1] = c;

sparse[0][2] = nz;

for(int i=1;i<=nz;i++){
printf("ENTER THE ROW NUMBER THEN COLUMN NUMBER AND THEN THE ELEMENT OF THE SPARSE MATRIX\n\n");
scanf("%d", &sparse[i][0]);
scanf("%d", &sparse[i][1]);
scanf("%d", &sparse[i][2]);
    
}


printf("THE FIRST SPARSE MATRIX IS:\n\n");
for(int i=0;i<=nz;i++){
printf("%d", sparse[i][0]);
printf("%d", sparse[i][1]);
printf("%d", sparse[i][2]);
printf("\n");
}



printf("ENTER THE DATA OF THE 2nd SPARSE MATRIX\n");

printf("ENTER THE NUMBER OF ROWS\n");
scanf("%d", &r1);

printf("ENTER THE NUMBER OF COLUMNS\n");
scanf("%d", &c1);

printf("ENTER THE NUMBER OF NON ZERO ELEMENTS\n");
scanf("%d", &nz1);

int sparse1[(nz1+1+nz)][3];

memset(sparse1, 0, sizeof(sparse1[0][0]) * (nz1+1+nz) * 3); //This sets the value of all the elements of sparse1 matrix to zero

sparse1[0][0] = r1;

sparse1[0][1] = c1;

sparse1[0][2] = nz1;

for(int i=1;i<=nz1;i++){

printf("ENTER THE ROW NUMBER THEN COLUMN NUMBER AND THEN THE ELEMENT OF THE SPARSE MATRIX\n\n");
scanf("%d", &sparse1[i][0]);
scanf("%d", &sparse1[i][1]);
scanf("%d", &sparse1[i][2]);
    
}


printf("THE SECOND SPARSE MATRIX IS:\n\n");

for(int i=0;i<=nz1;i++){
printf("%d", sparse1[i][0]);
printf("%d", sparse1[i][1]);
printf("%d", sparse1[i][2]);
printf("\n");
}

//FROM HERE ADDITION PART OF THE PROGRAM (SPARSE MATRIX) STARTS..!!

int p=1,q=1;
while(p<=nz || q<=nz1){
    if((sparse[p][0]==sparse1[q][0])){
        if((sparse[p][1]==sparse1[q][1])){
        sparse1[p][2] = sparse1[p][2] + sparse[q][2];
    }
    }
    else if((sparse[p][0]>sparse1[q][0])) {
                    q++;
    }
    else if((sparse[p][0]<sparse1[q][0])){
                    p++;
    }

    p++;
    q++;
}

printf("THE SPARSE MATRIX AFTER ADDITION IS:\n\n");

for(int i=0;i<=(nz1+nz);i++){
printf("%d", sparse1[i][0]);
printf("%d", sparse1[i][1]);
printf("%d", sparse1[i][2]);
printf("\n");
}



if(p<=nz){

    while(sparse1[q][2]!=0)
    q++;
    
    p++;
    sparse1[q][0] = sparse[p][0];
    sparse1[q][1] = sparse[p][1];
    sparse1[q][2] = sparse[p][2];
    q++;
}

printf("THE SPARSE MATRIX AFTER ADDITION IS:\n\n");

for(int i=0;i<=(nz1+nz);i++){
printf("%d", sparse1[i][0]);
printf("%d", sparse1[i][1]);
printf("%d", sparse1[i][2]);
printf("\n");
}


}
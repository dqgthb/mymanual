#include<stdio.h>


void ch_ptr_value(int *p, int *x){
    printf("++++++++++++++++++++++++++++++ function begin +++++\n");
    printf("x is %p\n",x);
    printf("<<<<< COMMENT: This is the same as num's address\n");
    printf("p is %p\n",p);
    printf("p is pointing at %d\n",*p);
    printf("p's address is %p\n",&p);
    printf("<<<<< COMMENT: This is not the same as main's p's address\n");
    p = x;
    printf(">>>>>CODE: p = x;\n");
    printf("p is %p\n",p);
    printf("p is pointing at %d\n",*p);
    printf("p's address is %p\n",&p);
    printf("++++++++++++++++++++++++++++++ function end +++++++\n");
}

void ch_ptr_value2(int **p, int *x){
    printf("++++++++++++++++++++++++++++++ function begin +++++\n");
    *p = x;
    printf("++++++++++++++++++++++++++++++ function end +++++++\n");
}


int main(){
    int num = 35;
    printf("num is %d\n",num);
    printf("num's address is %p\n",&num);
    /*int *p=NULL; //segfault*/
    int *p;
    printf("p is %p\n",p);
    printf("p is pointing at %d\n",*p); //segfault, probably b/c of trying to read unauthorized sector
    printf("p's address is %p\n",&p);
    *p = num;
    printf(">>>>> CODE: *p = num;\n");
    printf("p is %p\n",p);
    printf("<<<<< COMMENT: P didn't change\n");
    printf("p is pointing at %d\n",*p);
    printf("p's address is %p\n",&p);
    // Instead of the below, let us do it by a function
    /*p = &num;
    printf(">>>>> CODE: p = &num;\n");
    printf("p is %p\n",p);
    printf("<<<<< COMMENT: now p is equal to num's address\n");
    printf("p is pointing at %d\n",*p);
    printf("p's address is %p\n",&p);
    printf("<<<<< COMMENT: P's address never changed since\n"); */
    ch_ptr_value(p, &num);
    // now check if p is changed
    printf("p is %p\n",p);
    printf("p is pointing at %d\n",*p);
    printf("p's address is %p\n",&p);
    printf("<<<<< COMMENT: p is not changed at all\n");

    // second trial using double pointer
    ch_ptr_value2(&p, &num);
    printf("p is %p\n",p);
    printf("<<<<< COMMENT: Now p is the same as num's address. Success!\n");
    printf("p is pointing at %d\n",*p);
    printf("p's address is %p\n",&p);
    
    return 0;
}

#include <iostream>

using namespace std;

// constructing node structure
struct node{
    int info;
    struct node *next;
};

typedef struct node *NODEPTR;
// setting head pointer to NULL

NODEPTR *head = NULL;

NODEPTR getnode(){
    NODEPTR p;
    p=(NODEPTR)malloc(sizeof(struct node));
    return p;
}

void freenode(NODEPTR p){
    free(p);
}

// int insafter(NODEPTR p,int x){
//     NODEPTR q:
//     if (p==NULL){
//         cout << "void insertion\n";
//         return 0;
//     }
//     q=getnode(x);
//     q->info=x;
//     q->next=p->next;
//     p->next=q;
//     return 1;
// }

void print_elements(){
    NODEPTR *r;
    r=head;
    while(r!=NULL){
        cout << r->info<< "";
        r = r->next;
    }
}
int main(){
    getnode(30);
    getnode(50);
    getnode(60);


}
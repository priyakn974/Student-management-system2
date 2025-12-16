#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *left;
struct node *right;
};typedef struct node *NODE;

NODE insert(NODE root)
{
NODE newnode,pres,prev;
newnode=(NODE)malloc(sizeof(struct node));
printf("Enter info\n");
scanf("%d",&newnode->info);
newnode->left=NULL;
newnode->right=NULL;
pres=root;
prev=NULL;
while(pres!=NULL)
{prev=pres;
if(newnode->info<pres->info)
pres=prev->left;
else
pres=pres->right;
}
if(prev==NULL)
root=newnode;
else if(newnode->info<prev->info)
prev->left=newnode;
else
prev->right=newnode;
return root;
}
 
void preorder(NODE root)
{
if(root != NULL)
{
printf("%d\t",root->info);
preorder(root->left);
preorder(root->right);
}
}

void inorder(NODE root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d\t",root->info);
inorder(root->right);
}
}

void postorder(NODE root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d\t",root->info);
}
}

void main()
{
int ch;
NODE root=NULL;
for(;;)
{
printf("1.Insert 2.Preorder 3.Inorder 4.Postorder.\n");
scanf("%d",&ch);
switch(ch)
{
case 1:root=insert(root);
break;
case 2:preorder(root);
break;
case 3:inorder(root);
break;
case 4:postorder(root);
break;
default:exit(0);
}
}
}
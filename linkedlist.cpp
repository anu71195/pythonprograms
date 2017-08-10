#include <iostream>

using namespace std;

class node
{
public:
	int data;
	node* left=NULL,*right=NULL;
};

node* createnode(node*head,int data)
{
	node*temp=new node[1];
	temp->data=data;
	if(head==NULL) return temp;
	head->right=createnode(head->right,data);
	head->right->left=head;
	return head;

}

void printlist(node*head)
{
	if(head==NULL) return;
	cout<<head->data;
	printlist(head->right);

}
node * findtail(node*head)
{
	if(head->right==NULL) return head ;
	node*temp;
	temp=findtail(head->right);
	return temp;
}
void printlist2(node*tail)
{
	if(tail==NULL) return;
	cout<<tail->data;
	printlist2(tail->left);
}
int main()
{
	node*head=NULL;
	head=createnode(head,3);
	head=createnode(head,4);
	head=createnode(head,5);

	head=createnode(head,6);
	head=createnode(head,8);

	printlist(head);
	cout<<endl;
	printlist2(findtail(head));

}
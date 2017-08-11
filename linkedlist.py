class node:
	def __init__(self, data,right=None):
		self.data=data;
		self.right=right;

def createnode(head,data):
	temp=node(data);
	if head==None :
		return temp;
	head.right=createnode(head.right,data)
	return head;

def printlist(head):
	if head==None:
		return;
	print(head.data);
	printlist(head.right)


head=None;
a=input().split();
for i in a:
	head=createnode(head,int(i));
printlist(head)

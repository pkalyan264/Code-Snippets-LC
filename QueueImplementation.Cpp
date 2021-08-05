int cnt=0;
int n=5;
int front=rear=0;
int arr[n]={0};
int qpush(int a)
{
	if(cnt==n)
	{
		cout<<"Queue is Full"<<endl;
		return -1;
	}
	else
	{
		arr[rear%n]=a;
		rear++;
		cnt++;
		return a;
	}
}

void pop()
{
	if(cnt==0)
	{
		arr[front%n]=-1;

	}
	front++;
	cnt--;
}
int top()
{
	if(cnt==0)return -1;
	return arr[front%n];
}

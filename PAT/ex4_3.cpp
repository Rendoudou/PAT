//ex4_3.cpp:��װһ������������ð������ʵ�ֶ�����������������
#include <iostream>
using namespace std;

void bubbleSort(int(&arr)[10], int len);
void printArray(int(&arr)[10], int len); //���������n


void bubbleSort(int(&arr)[10], int len)
{
	int temp=0;
	int i=0,j=0;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
					
			}
		}
	}
}

void printArray(int(&arr)[10],int len)
{
	cout<<"���������������"<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[10]={4,3,6,9,2,8,1,10,7,5};
	int len=sizeof(arr)/sizeof(arr[0]);

	cout<<"����ǰ�����������"<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	} 
	 cout<<endl;
	 
	 bubbleSort(arr,len);
	 printArray(arr,len);
	 return 0;
 }
 


/*
 *  (Finding the Largest & Smallest Elements in an Array)
 *
 * Created on :
 *     Author : abdelrahman sayed
 *
 * Description:
 */

#include <stdio.h>
void minmax(int *arr,int size,int* min,int* max)
{int i;
*min=*max=arr[0];
	 for(i=1;i<size;i++)
	 {
		 if(*min>arr[i])
			 *min=arr[i];
		 if(*max<arr[i])
			 *max=arr[i];
	 }
}

int main()
{
int arr[]={5,6,11,7,8,9,10,66,56,83,89,63,52};
int size=sizeof(arr)/sizeof(arr[0]);
int min,max;
minmax(arr,size,&min,&max);
printf("min=%d\n",min);
printf("max=%d",max);

}

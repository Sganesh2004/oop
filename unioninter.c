#include <stdio.h>
void set()
{
	int arr1[100], arr2[100],arr3[100], arr4[100];
     int size1, size2, j, i, k = 0,z,x;
	char ch;
 
	printf("Enter number of elements in set A\n");
	scanf("%d", &size1);
	printf("Enter elements in  set A\n");
	for (i = 0; i < size1; i++)
	{
    	scanf("%d", &arr1[i]);
	}
 
	printf("Enter number of elements in set B\n");
	scanf("%d", &size2);
	printf("Enter elements in  set B\n");
	for (j = 0; j < size2; j++)
	{
    	scanf("%d", &arr2[j]);
	}
 
	printf(" Press 1 for union of two sets\n press 2 for intersection of two sets\n Press 3 for set difference of two sets\n");
	
 
	scanf(" %c", &ch);
 
	switch (ch)
	{
	case '1':
    	for (i = 0; i < size1; i++)
    	{
        	arr3[i] = arr1[i];
    	}
    	k = size1;
    	for (j = 0; j < size2; j++)
    	{
        	x = 0;
        	for (i = 0; i < size1 + k; i++)
        	{
            	if (arr2[j] == arr3[i])
            	{
                	x = 1;
                	break;
            	}
        	}
        	if (x==0)
        	{
            	arr3[k] = arr2[j];
            	k++;
        	}
    	}
    	printf("The union of two sets is");
    	for (i = 0; i < k; i++)
    	{
        	printf(" %d ", arr3[i]);
    	}
    	break;
 
	case '2':
    	k = 0;
    	for (i = 0; i < size1; i++)
    	{
        	for (j = 0; j < size2; j++)
        	{
            	if (arr1[i] == arr2[j])
            	{
                	arr4[k++] = arr1[i];
                	break;
            	}
        	}
    	}
    	printf("The intersection of two sets is");
    	for (i = 0; i < k; i++)
    	{
        	printf(" %d ", arr4[i]);
    	}
    	break;
 
	case '3':
    	k = 0;
    	for (i = 0; i < size1; i++)
    	{
        	z = 0;
        	for (j = 0; j < size2; j++)
        	{
            	if (arr1[i] == arr2[j])
            	{
                	z = 1;
                	break;
            	}
        	}
   	     if (z==0)
        	{
            	arr3[k++] = arr1[i];
        	}
    	}
    	printf("The set difference  is");
    	for (i = 0; i < k; i++)
    	{
        	printf(" %d ", arr3[i]);
    	}
    	break;
    	default:
    	printf("No operation found\n.");
    	break;
	}
}
 
int main()
{
	set();
	return 0;
}
	
	
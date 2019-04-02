// hong_test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <Windows.h>

void PRINT_HELPER(int data[],int len)
{
    for(int i = 0 ;i < len; ++i)
        printf("%d ",data[i]);

    printf("\n");
}

int partition(int data[],int low, int hight)
{

    int x = data[hight]; //���һ������Ϊ��Ԫ;
    int i = low - 1; //i ��ʶ���һ������ԪС�������±�
    for(int j = low; j < hight; j++)
    {
        if(data[j] < x)
        {
            ++i;
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }

    }

    data[hight] = data[i+1];
    data[i+1] = x;
    return i + 1;
}


void quickSort(int data[], int low, int hight)
{
    if(low < hight)
    {
        int partitionIndex = partition(data,low,hight);
        quickSort(data,low,partitionIndex-1);
        quickSort(data,partitionIndex+1,hight);
    }
}


void 

int _tmain(int argc, _TCHAR* argv[])
{
    int data[] = {3,1,5,7,2,8,9,0,4,6};
    int len = 10;
    PRINT_HELPER(data,len);
    quickSort(data,0,9);
    PRINT_HELPER(data,len);
    Sleep(3000);
	return 0;
}


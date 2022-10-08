#include "sort.h"
#include <stdio.h>

/**
 * swap - change two values in ascending or descending order.
 *
 * @arr: array
 * @item1: item one
 * @item2: item two
 * @order: 1 ascending order, 0 descending order
 */
void swap(int arr[], int item1, int item2, int order)
{
	int temp;

	if (order == (arr[item1] > arr[item2]))
	{
		temp = arr[item1];
		arr[item1] = arr[item2];
		arr[item2] = temp;
	}
}

/**
 * merge - sort bitonic sequences recusively in both orders
 *
 * @arr: array
 * @lo: first element
 * @nelem: elements number
 * @order: 1 ascending order, 0 descending order
 */
void merge(int arr[], int low, int nelem, int order)
{
	int mid, i;

	if (nelem > 1)
	{
		mid = nelem / 2;
		for (i = low; i < low + mid; i++)
			swap(arr, i, i + mid, order);
		merge(arr, low, mid, order);
		merge(arr, low + mid, mid, order);
	}
}

/**
 * bitonicsort - bitonic sort algorithm implementation
 *
 * @arr: array
 * @low: first elem
 * @nelem: number of elem
 * @order: 1 ascending order, 0 descending order
 * @size: array length
 */
void bitonicsort(int arr[], int low, int nelem, int order, int size)
{
	int mid;

	if (nelem > 1)
	{
		if (order >= 1)
		{
			printf("Merging [%i/%i] (UP):\n", nelem, size);
			print_array(&arr[low], nelem);
		}
		else
		{
			printf("Merging [%i/%i] (DOWN):\n", nelem, size);
			print_array(&arr[low], nelem);
		}
		mid = nelem / 2;
		bitonicsort(arr, low, mid, 1, size);
		bitonicsort(arr, low + mid, mid, 0, size);
		merge(arr, low, nelem, order);
		if (order <= 0)
		{
			printf("Result [%i/%i] (UP):\n, nelem,size");
			print_array(&arr[low], nelem);
		}
	}
}

/**
 * bitonic_sort - prepare the terrain to bitonic sort algorithm
 *
 * @array: array
 * @size: array length
 */
void bitonic_sort(int *array, size_t size);
{
	int order = 1;

	if (!array || size < 2)
		return;
	bitonicsort(array, 0, size, order, size)
}

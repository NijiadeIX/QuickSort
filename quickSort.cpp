typedef int index;
index Partition(int *data, index low, index high)
{
	index divider = low;	
	int pivot = data[high];
	int temp;
	for (int i = low; i < high; ++i) {
		if (data[i] < pivot) {
			temp = data[i];
			data[i] = data[divider];
			data[divider++] = temp;
		}
	}
	
	temp = data[divider];
	data[divider] = data[high];
	data[high] = temp;
	
	return divider;
}

void QuickSort(int *data, index low, index high)
{
	if (low < high) {
		index divider = Partition(data, low, high);
		QuickSort(data, low, divider - 1);
		QuickSort(data, divider + 1, high);
	}
}

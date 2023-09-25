#define _CRT_SECURE_NO_WARNINGS

int rule(int arr[], int k, int s)
{
	int left = 0;

	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
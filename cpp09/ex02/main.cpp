/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:47:12 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/13 21:39:08 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<deque>
#include<vector>

template <typename T>
void merge(T & arr, int start, int mid, int end)
{

	int i = start;
	int j = mid + 1;
	int k = 0;
	int temp[end - start + 1];
	while (i <= mid && j <= end)
	{
		
		if (arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}
	while (j <= end)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}
	for (i = start; i <= end; i++)
	{
		arr[i] = temp[i - start];
		std::cout <<  " : " << arr[i];
	}
	std:: cout << std::endl;
}

template <typename T>
void insertion_sort(T & v, int start, int end)
{
	int i = start;
	int j = start + 1;
	while (j <= end)
	{
		i = j - 1;
		while (i >= start && v[i] > v[i + 1])
		{
			std::swap(v[i], v[i + 1]);
			i--;
		}
		j++;
	}
}

template <typename T>
void sort(T & v, int start, int end)
{
	if (end > start)
	{
		int mid = (end + start - 1) / 2;
		sort(v, start, mid);
		sort(v, mid + 1, end);
		std::cout << start << " " <<  mid <<  " " << end << std::endl;
	    merge(v, start, mid, end);
	}
	else
		insertion_sort(v, start, end);
}

template <typename T>
void mergeSort(T & v)
{
	sort(v, 0, v.size() - 1);
	for (typename T::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

int main(int argc, char **argv)
{
	int i = 1;
	double duration;
	std::deque<int> d;
	std::vector<int> v;
	while(i < argc)
	{
		v.push_back(atoi(argv[i]));
		i++;
	}
	i = 1;
	while(i < argc)
	{
		d.push_back(atoi(argv[i]));
		i++;
	}
	std::cout << "vector :" << std::endl;
	std::clock_t start = std::clock();
	mergeSort(v);
	std::clock_t end = std::clock();
	duration = (end - start) / (double)CLOCKS_PER_SEC * 1000;
	std::cout <<"Time to process a range of 5 elements with std:: deque: "<< duration << "ms" << std::endl;
// 	std::cout << "deque :" << std::endl;
// 	std::clock_t start1 = std::clock();
// 	mergeSort(d);
// 	std::clock_t end1 = std::clock();
// 	duration = (end1 - start1) / (double)CLOCKS_PER_SEC * 1000;
// 	std::cout <<"Time to process a range of 5 elements with std:: vector: "<< duration << "ms" << std::endl;
// }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-hach <zel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:47:23 by zel-hach          #+#    #+#             */
/*   Updated: 2023/05/16 15:32:03 by zel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include<deque>
#include<vector>

bool is_digit(char* & str);
int push_in_vector(int argc, char **argv, std::vector<int>& v);
int push_in_deque(int argc, char **argv,std::deque<int>& d);
int check_argv(int argc, char** argv);
void print_before(int argc, char **argv);
void print_after(std::vector<int>& v);

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
		arr[i] = temp[i - start];
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
	    merge(v, start, mid, end);
	}
	else
		insertion_sort(v, start, end);
}
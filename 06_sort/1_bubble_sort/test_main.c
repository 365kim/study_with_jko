/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <jko@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 00:16:57 by jko               #+#    #+#             */
/*   Updated: 2020/05/15 21:45:08 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	bubble_sort(void **items, int size, int (*cmp)(void *, void *));

typedef struct	s_item
{
	int	data;
	int index;
}				t_item;

int cmp(void *a, void *b)
{
	t_item *aa = a;
	t_item *bb = b;
	return (aa->data - bb->data);
}

void print_array(void **array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("data = % 4d, index = % 4d\n", 
				((t_item *)array[i])->data, ((t_item *)array[i])->index);
	}
	printf("\n");
}

int main(void)
{
	int		size = 25;
	int		data[25] = {1, 8, 0, 0, 3,
						3, 5, -1, -3, 2,
						32, 12, 1, 4, -3,
						-13, 1, 5, 4, 9,
						8, 7, 6, 5, 4};
	t_item	items[size];

	void	**array = malloc(sizeof(void *) * size);
	for (int i = 0; i < size; ++i)
	{
		items[i].data = data[i];
		items[i].index = i;
		array[i] = &items[i];
	}
	print_array(array, size);
	bubble_sort(array, size, cmp);
	print_array(array, size);

	free(array);
	system("leaks a.out > leaks_result && cat leaks_result | grep leaked");
	return (0);
}

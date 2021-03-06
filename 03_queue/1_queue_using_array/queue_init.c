/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 13:00:23 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/24 18:01:42 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_queue *queue_init(unsigned int max_size)
{
	t_queue *queue;

	queue = malloc(sizeof(t_queue));
	if (queue == NULL)
		return (NULL);
	queue->max_size = max_size;
	queue->last_index = -1;
	queue->data = malloc(sizeof(void *) * max_size);
	if (queue->data == NULL)
	{
		free(queue);
		return (NULL);
	}
	return (queue);
}

/*
** line 19 : malloc size 'sizeof(t_queue)', not 'sizeof(t_queue) * max_size'
*/

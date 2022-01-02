/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:08:26 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/02 17:58:30 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

static char	*g_ops[11] = {"sa", "sb", "ss", "pa", "pb", "ra", "rb", "rr",
	"rra", "rrb", "rrr"};


typedef struct s_stack
{
	int	top;
	int	*items;
	int	max;
	int	min;
	int	mid;
	int	selected;
}				t_stack;

void			check_if_duplicated(char **argv);


//----------------------------------------------ft_stack_utils

t_stack			*ft_init_stack(void); //-- initials stacks
int				ft_stack_size(t_stack *stk);
void			ft_stack_pop(t_stack **stk); //-- remove the last item from the stack
int				ft_is_sorted(t_stack *stk);  //-- Checks if the stack is sorted such as the smallest numbers are at the top. @return 1 if sorted in ascending order, 0 if not.

//----------------------------------------------ft_stack_utils2

void			ft_addto_top(t_stack **stk, int num); //-- Adds the given number at the end (top) of the list.
int				ft_rt_last_item(t_stack *stk); //-- return the last item in the stack (top)

//-----------------------------------------------------max_min_mid

int				ft_smallest_in_stack(t_stack *stk); //-- return the smallest item in the stack
int				ft_largest_in_stack(t_stack *stk); //-- return the largest item in the stack
int				ft_middle_in_stack(t_stack *stk); //-- return the middle num in the stack

//---------------------------------------------ft_actions
void			ft_push_to(t_stack **a, t_stack **b); //-- push top item from a to b
void			ft_swap_top(t_stack **stk); //-- swap the top 2 items
void			ft_rotate(t_stack **stk); //-- rotate the top item becomes at the bottom
void			ft_reverse_rotate(t_stack **stk); //-- rotate the bottom item to top

//--------------------------------------------call_action
void			check_type_1(t_stack **a, t_stack **b, int o);
void			check_type_2(t_stack **a, t_stack **b, int o);
void			call_and_action(t_stack **a, t_stack **b, int o);



void			ft_sort_small_nums(t_stack **a, t_stack **b);





/*
** @brief Print the items as a stack growing from left to right,
** divided by spaces, followed by '\\n'.
*/
void			ft_stkprintitems(t_stack *stk);

/*
** @brief Copies items of from to to.
*/
void			ft_stkdel(t_stack **stk);


int				ft_stkfind(t_stack *stk, int value);
void			ft_handle3items(t_stack **a, t_stack **b);
void			ft_handlemoreitems(t_stack **a, t_stack **b);
void			ft_handle2items(t_stack **a, t_stack **b);
int				ft_abs(int nb);
void			ft_quicksort(int *arr, int p, int r);
int				ft_findoptimalitem(t_stack **a, t_stack **b, int min, int max);
int				ft_findinrange(t_stack **b, int min, int max);
void			ft_surfaceitem_a(t_stack **a, t_stack **b, int index,
					int value);
void			ft_surfaceitem_b(t_stack **a, t_stack **b, int index,
					int value);
int				ft_findtopitem(t_stack *stk, int item);
int				ft_countsteps(t_stack **a, t_stack **b, int index, int value);
int				ft_selectoptimalitem(t_stack **a, t_stack **b);
int				get_next_line(int fd, char **line);
enum	e_operations
{
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rb,
	rr,
	rra,
	rrb,
	rrr
};

#endif

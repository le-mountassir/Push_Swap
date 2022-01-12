/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:37:16 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/01/06 08:37:16 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct stacks
{
	int		*a;
	int		*b;
	int		a_top;
	int		b_top;
	int		size;
}			t_holder;

typedef struct number_of_actions
{
	int		ra;
	int		rb;
	int		pb;
	int		pa;
}			t_cnt_acts;

typedef struct center_points_of_stk
{
	int		p1;
	int		p2;
}			t_centers;

// -------------------------------------------- Actions
void		sa(t_holder *stks, int flag);
void		sb(t_holder *stks, int flag);
void		ss(t_holder *stks);
void		pa(t_holder *stks);
void		pb(t_holder *stks);
void		ra(t_holder *stks, int flag);
void		rb(t_holder *stks, int flag);
void		rr(t_holder *stks);
void		rra(t_holder *stks, int flag);
void		rrb(t_holder *stks, int flag);
void		rrr(t_holder *stks);

//--------------------------------------------sorting
void		sort_3_args(t_holder *stks); //sort 3 args
void		sort_5_args(t_holder *stks); // sort 5 args
void		sort_many_args(t_holder *stks, int size); // sorts more than 5 args
t_centers	get_centers(t_holder *stks, int size, int flag);
void		small_sort_a(t_holder *stks, int size);
			// sort whats left in a
void		small_sort_b(t_holder *stks, int size);
			// sort whats left in b
void		sort_a_4_args(t_holder *stks);
			// sort the 4 nums left in stack a
void		p_small_nums_to_b(t_holder *stks, t_cnt_acts *cnt,
				t_centers point, int size);
// push all the small nums to stack b and keep only the third bigger in a
void		p_big_nums_to_a(t_holder *stks, t_cnt_acts *cnt,
				t_centers point, int size);
//look for the biggest nums in stack b with in the size and pushem to stack a
void		sort_b_and_pa(t_holder *stks, int size);
		// sort the top portion and push it to a

//--------------------------------------------------utils
int			check_sort_a(t_holder *stks, int size);
			// check if stack a is sorted
int			check_sort_b(t_holder *stks, int size);
			// check if stack b is sorted
void		fill_stacks(t_holder *stks, char *argv[], int argc);
			//-- init & fill stacks and check for dups
void		error_nd_exit(void);
			// prints Error and exit
void		reset_acts(t_cnt_acts *acts);
			//set the actions to 0
int			*copy_stk_2_arr(t_holder *stks, int size, int flag);
void		sort_tmp_arr(int arr[], int size); // sort the tmp array

char		**free_splited_arr(char **str);
char		**ft_split(char *s, char c);
void		ft_putstr(char *s);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			ft_atoi(char *str, int *result);
size_t		ft_strlen(const char *str);

void		push_swap(int argc, char *argv[]);

#endif

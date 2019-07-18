/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dholiday <dholiday@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 20:46:51 by dholiday          #+#    #+#             */
/*   Updated: 2019/07/07 15:46:37 by dholiday         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft.h"
# include <unistd.h>

# define ABS(Value) ((Value > 0) ? (Value) : (-Value))

typedef struct		s_print
{
	int				minus;
	int				plus;
	int				sharp;
	int				null;
	int				afterpoint;
	int				beforepoint;
	int				len;
	int				nullpoint;
	int				space;
	int				number;
	int				star;
	int				mode;
	char			*str;
	char			*str1;

}					t_print;

int					ft_find_null2(t_print *info);
int					ft_find_sharp3(t_print *info);
int					ft_find_plus2(t_print *info);
int					ft_find_minus2(t_print *info);
int					ft_find_space(char *str);

int					ft_printf(const char *restrict format, ...);
void				ft_putsrt(char const *str);
size_t				ft_srtlen(const char *str);
void				ft_make_info(t_print *info, char *str);

int					ft_char_comp(char c);
int					ft_understand(char *str);
char				*ft_type_d(va_list hello, t_print *info);
char				*ft_type_dd(va_list hello);
char				*ft_type_uu(va_list hello, char *str, int len);

int					ft_lets_check(char *str, va_list hello,
		char *surprise);
char				*ft_type_c(va_list hello, t_print *info);
char				*ft_type_o(va_list hello);
char				*ft_type_x(va_list hello);
char				*ft_type_u(va_list hello, t_print *info);
char				*ft_type_p2(va_list hello);
char				*ft_type_s(va_list hello);
void				ft_putnbr2(long long int nb);
char				*ft_itoa2(unsigned long long int n, int sign);

void				ft_print_null(t_print *info);
int					ft_find_null(char *str);
void				ft_find_sharp2(t_print *info);
int					ft_find_sharp(t_print *info, char c);
void				ft_print_sharp(t_print *info, char c);
void				ft_find_plus(t_print *info);
char				*ft_print_plus(char *str1, int plus, int flag);
int					ft_find_minus(char *str);
void				ft_swap_str(t_print *info);
void				ft_glue_space(t_print *info);

char				*ft_wide_diouxx(t_print *info, char c);
char				*ft_wide_f(t_print *info);

char				*ft_wide_s(t_print *info);
void				ft_find_a_and_b(t_print *info);
char				*ft_join_a(int afterpoint, char *str1, char *join, int a);
char				*ft_join_b(t_print *info, char *join);
char				*ft_join_b_junior(t_print *info, char *join, int k);
char				*ft_join_s_a(int afterpoint, char *str1);
char				*ft_join_s_b(int beforepoint, char *join);

char				*ft_conv_octal(unsigned long long int n);
char				*ft_conv_six(unsigned long long int n, char c);
char				*ft_strrev(char *str);
void				ft_print_memory(const void *addr, size_t size);
void				print_hex(unsigned char value, int index);
void				print_ascii(const char *addr, int i);
char				*print_address_hex(void *p0);
char				*ft_type_p(va_list hello, t_print *info);
char				*ft_join_a_for_p(int afterpoint, char *str1,
		char *join, int a);
char				*ft_type_f(va_list hello, t_print *info);
char				*ft_type_f_double(va_list hello, t_print *info);
char				*ft_itoa_float(double d, int z);
char				*ft_itoa_float_long(long double d, int z);
char				*ft_type_f_long_double(va_list hello, t_print *info);
char				*ft_approx(char *str, int a);
char				*ft_infinity(double d, t_print *info);
void				ft_read(t_print *info, va_list hello);
char				*ft_make_star2(t_print *info, char *str, va_list hello);
void				ft_sharp_o(t_print *info, char c);
char				*ft_not_only_null(char *str1, int plus);
int					ft_space_only(char *str);
char				*ft_twice_symb(t_print *info, char c, int i);
int					ft_k_4_u(va_list hello, const char *format, int *i);
void				ft_k_4_me(const char *format, int *j, int *return_value);
char				*ft_sputni_check(int n, char *format_i);
void				ft_k(const char *format, int *i,
		int *return_value, va_list hello);

#endif

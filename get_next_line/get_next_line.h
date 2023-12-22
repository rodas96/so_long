/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodas96 <rodas96@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:50:38 by rodas96           #+#    #+#             */
/*   Updated: 2023/12/22 16:51:20 by rodas96          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
int		ft_bufferclean(char *str);
char	*get_next_line(int fd);

#endif
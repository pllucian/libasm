/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:11:09 by pllucian          #+#    #+#             */
/*   Updated: 2021/05/12 22:36:14 by pllucian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int			main(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	buf[10];
	int		ret;

	str0 = "";
	str1= "abc";
	str2 = "asdf";
	str3 = "qwerty";

	printf("strlen:		%s	%ld\n", str0, strlen(str0));
	printf("ft_strlen:	%s	%ld\n\n", str0, ft_strlen(str0));

	printf("strlen:		%s	%ld\n", str1, strlen(str1));
	printf("ft_strlen:	%s	%ld\n\n", str1, ft_strlen(str1));

	strcpy(buf, str3);
	printf("strcpy:		%s	%s	%p	%p\n", buf, str3, buf, str3);
	ft_strcpy(buf, str3);
	printf("ft_strcpy:	%s	%s	%p	%p\n\n", buf, str3, buf, str3);

	printf("strcmp:		%s	%s	%d\n", str2, str1, strcmp(str2, str1));
	printf("ft_strcmp:	%s	%s	%d\n\n", str2, str1, ft_strcmp(str2, str1));
	printf("strcmp:		%s	%s	%d\n", str2, str2, strcmp(str2, str2));
	printf("ft_strcmp:	%s	%s	%d\n\n", str2, str2, ft_strcmp(str2, str2));
	printf("strcmp:		%s	%s	%d\n", str2, str3, strcmp(str2, str3));
	printf("ft_strcmp:	%s	%s	%d\n\n", str2, str3, ft_strcmp(str2, str3));

	printf("write:\n");
	ret = write(1, str1, 3);
	printf("	%d\n", ret);
	printf("ft_write:\n");
	ret = ft_write(1, str1, 3);
	printf("	%d\n\n", ret);

	printf("write:\n");
	errno = 0;
	ret = write(-1, str1, 3);
	printf("return = %d	errno = %d\n", ret, errno);
	printf("ft_write:\n");
	errno = 0;
	ret = ft_write(-1, str1, 3);
	printf("return = %d	errno = %d\n\n", ret, errno);

	printf("write:\n");
	errno = 0;
	ret = write(1, NULL, 3);
	printf("return = %d	errno = %d\n", ret, errno);
	printf("ft_write:\n");
	errno = 0;
	ret = ft_write(1, NULL, 3);
	printf("return = %d	errno = %d\n\n", ret, errno);

	printf("read:\n");
	ret = read(0, buf, 10);
	printf("	%d\n", ret);
	printf("ft_read:\n");
	ret = ft_read(0, buf, 10);
	printf("	%d\n\n", ret);

	printf("read:\n");
	errno = 0;
	ret = read(-1, buf, 10);
	printf("return = %d	errno = %d\n", ret, errno);
	printf("ft_read:\n");
	errno = 0;
	ret = ft_read(-1, buf, 10);
	printf("return = %d	errno = %d\n\n", ret, errno);

	printf("read:\n");
	errno = 0;
	ret = read(0, NULL, 10);
	printf("return = %d	errno = %d\n", ret, errno);
	printf("ft_read:\n");
	errno = 0;
	ret = ft_read(0, NULL, 10);
	printf("return = %d	errno = %d\n\n", ret, errno);

	errno = 0;
	str4 = strdup(str1);
	printf("strdup:		%s	%s	%p	%p	errno = %d\n", str1, str4, str1, str4, errno);
	free(str4);
	errno = 0;
	str4 = ft_strdup(str1);
	printf("ft_strdup:	%s	%s	%p	%p	errno = %d\n", str1, str4, str1, str4, errno);
	free(str4);

	return (0);
}

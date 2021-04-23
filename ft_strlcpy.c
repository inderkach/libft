/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:17:41 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/19 13:17:44 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t length;
    size_t ptrdst;

    length = 0;
    ptrdst = 0;
    while (*(src + length) != 0)
        length++;
    while (ptrdst < (dstsize - 1))
    {
        *(dst + ptrdst) = *(src + ptrdst);
        ptrdst++;
    }
    *(dst + ptrdst) = '\0';
    return (length);
}
int main()
{
    char a[20] = "1";
    char b[20] = "..";
    int st = ft_strlcpy(b, a, 10);
    printf("FT_STRLCPY IS\nst:%d\na:%s\nb:%s\n", st, a, b);
    
    st = strlcpy(b, a, 10);
    printf("STRLCPY IS\nst:%d\na:%s\nb:%s\n", st, a, b);
    return (0);
}

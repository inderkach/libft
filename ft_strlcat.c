/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdanny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:18:05 by fdanny            #+#    #+#             */
/*   Updated: 2021/04/19 13:18:09 by fdanny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t srcl, dstl;

    srcl = 0;
    dstl = 0;
    while (*(dst + dstl) != 0)      //  initial destinaton length
        dstl++;
    if (dstsize > dstl)
    {
        while (*(src + srcl) != 0 && (dstsize - 1 - dstl - srcl) != 0)    // source length
        {
            if ((dstsize - 1 - dstl - srcl) != 0)
            *(dst + dstl + srcl) = *(src + srcl);
            srcl++;
        }

    }

    

    if (dstsize > dstl)
        dstsize = srcl + dstl;
    else
        dstsize += srcl;
    return (dstsize);
}
int main()
{
    char a[20] = "......";
    char b[20] = "1234";
    int st /*= ft_strlcat(b, a, 12)*/;

    //printf("FT_STRLCAT IS\nst:%d\na:%s\nb:%s\n", st, a, b);
    st = strlcat(b, a, 5);
    printf("STRLCAT IS\nst:%d\na:%s\nb:%s\n", st, a, b);
    return (0);
}

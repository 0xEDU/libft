# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 15:51:38 by coder             #+#    #+#              #
#    Updated: 2022/10/14 15:50:58 by edu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_LIBSRCS = libsources
PATH_GNLSRCS = gnlsources
PATH_FT_PRINTFSRCS = ft_printfsources
PATH_INCL = includes
PATH_OBJS = .

CCFLAGS = -Wall -Wextra -Werror

LIBSRCS = $(addprefix $(PATH_LIBSRCS)/, ft_atoi.c \
	   ft_bzero.c      \
	   ft_calloc.c     \
	   ft_isalnum.c    \
	   ft_isalpha.c    \
	   ft_isascii.c    \
	   ft_isdigit.c    \
	   ft_isprint.c    \
	   ft_itoa.c       \
	   ft_memchr.c     \
	   ft_memcmp.c     \
	   ft_memcpy.c     \
	   ft_memmove.c    \
	   ft_memset.c     \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c  \
	   ft_putstr_fd.c  \
	   ft_split.c      \
	   ft_strchr.c     \
	   ft_strdup.c     \
	   ft_striteri.c   \
	   ft_strjoin.c    \
	   ft_strlcat.c    \
	   ft_strlcpy.c    \
	   ft_strlen.c     \
	   ft_strmapi.c    \
	   ft_strncmp.c    \
	   ft_strnstr.c    \
	   ft_strrchr.c    \
	   ft_strtrim.c    \
	   ft_substr.c     \
	   ft_tolower.c    \
	   ft_toupper.c)

GNLSRCS = $(addprefix $(PATH_GNLSRCS)/, get_next_line.c \
	   get_next_line_utils.c)

FT_PRINTFSRCS = $(addprefix $(PATH_FT_PRINTFSRCS)/, ft_printf.c \
				ft_printf_utils.c \
				ft_putchar.c \
				ft_putnbr.c \
				ft_putnbr_hex.c \
				ft_putstr.c)

LIBOBJS = $(LIBSRCS:$(PATH_LIBSRCS)/%.c=$(PATH_OBJS)/%.o)
GNLOBJS = $(GNLSRCS:$(PATH_GNLSRCS)/%.c=$(PATH_OBJS)/%.o)
FT_PRINTFOBJS = $(FT_PRINTFSRCS:$(PATH_FT_PRINTFSRCS)/%.c=$(PATH_OBJS)/%.o)

all: $(NAME)

$(NAME): $(LIBOBJS) $(GNLOBJS) $(FT_PRINTFOBJS)
	ar rcs $(NAME) $(LIBOBJS) $(GNLOBJS) $(FT_PRINTFOBJS)
	@rm -f $(LIBOBJS) $(GNLOBJS) $(FT_PRINTFOBJS)

$(LIBOBJS): $(LIBSRCS)
	$(CC) $(CCFLAGS) -I $(PATH_INCL)/ -c $(LIBSRCS)

$(GNLOBJS): $(GNLSRCS)
	$(CC) $(CCFLAGS) -D BUFFER_SIZE=1 -I $(PATH_INCL)/ -c $(GNLSRCS)

$(FT_PRINTFOBJS): $(FT_PRINTFSRCS)
	$(CC) $(CCFLAGS) -I $(PATH_INCL)/ -c $(FT_PRINTFSRCS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

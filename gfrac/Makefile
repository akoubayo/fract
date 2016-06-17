CC = gcc

SRC_NAME = ft_init_struct.c ft_put_pixel.c ft_mandelbrot.c\
ft_type.c ft_julia.c ft_newton.c ft_fractol.c ft_psy.c ft_func_m.c ft_func_r.c\
ft_func_mm.c ft_func_mr.c ft_func_p.c ft_write_fract.c
OBJET_NAME = $(SRC_NAME:.c=.o)

LIBRARY = libfract.a
LIBRARY_A = libftfract.a
LIBFT = libft.a
LIBMLX = LIB/libmlx.a
LIBPRINTF = LIB/libprintf.a

SRCDIR = SRC
OBJDIR = ./
HEADDIR = INC

SRC = $(addprefix $(SRCDIR)/, $(SRC_NAME))
OBJ = $(addprefix $(OBJDIR)/, $(OBJET_NAME))

all : $(LIBRARY_A)

$(LIBRARY_A) : $(LIBFT) $(LIBRARY)
	@libtool -static -o $(LIBRARY_A) libft/libft.a $(LIBMLX) $(LIBRARY) $(LIBPRINTF)
	rm $(LIBRARY)
	gcc fractol.c $(LIBRARY_A) -o fractol -framework OpenGL -framework Appkit

$(LIBFT) :
	@make -C libft

$(LIBRARY) : $(OBJ)
	@ar rc $(LIBRARY) $(OBJ)
	@echo "\033[0;32mLIBRARY PRINTF: DONE\033[0m"

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC)  -o $@ -c $<

exe : all 
	gcc -Wall -Werror -Wextra fractol.c libftfract.a -o fractol -framework OpenGL -framework Appkit
	./fractol M
exe2 : all
	gcc main1.c libftprintf.a
	./a.out
clean :
	@rm -rf $(OBJ)
	@echo "\033[0;31mDELETE OBJETS: DONE\033[0m"

fclean : clean
	@rm -rf $(OBJ)
	@rm -rf $(LIBRARY_A)
	@rm -rf $(LIBRARY)
	@rm -rf fdf
	@echo "\033[0;31mDELETE OBJETS AND LIBS: DONE\033[0m"

re : fclean all

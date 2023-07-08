CC					=	gcc
RM					=	rm -f
CFLAGS				=	-Wall -Werror -Wextra

##################################################
################## SOURCES #######################
SERVER				=	./src/server
SERVER_SRC			=	./src/server.c


CLIENT				=	./src/client
CLIENT_SRC			=	./src/client.c

##################################################
#####################INCLUDE######################
LIBFT				=	libft.a
LIBFT_SRC			=	./includes/libft/

##################### COLORS #####################

RED             =   \033[0;31m
GREEN           =   \033[0;32m
YELLOW          =   \033[0;33m
BLUE            =   \033[0;34m
PURPLE          =   \033[0;35m
CYAN            =   \033[0;36m
WHITE           =   \033[0;37m
RESET           =   \033[0m

##################################################
################## RULES #########################

all:		$(LIBFT) $(SERVER) $(CLIENT)
			@printf "$(CYAN)Compilation MINITALK terminé ✅\n$(RESET)"

$(LIBFT):
			@make -C $(LIBFT_SRC)

$(SERVER):			$(SERVER_SRC)
					$(CC) $(CFLAGS) $(SERVER_SRC) $(LIBFT_SRC)$(LIBFT) -o $(SERVER)
					@printf "$(GREEN)Server compiled ✅\n\n$(RESET)"

$(CLIENT):			$(CLIENT_SRC)
					$(CC) $(CFLAGS) $(CLIENT_SRC) $(LIBFT_SRC)$(LIBFT) -o $(CLIENT)
					@printf "$(GREEN)Client compiled ✅\n\n$(RESET)"

clean:
			@$(RM) $(CLIENT) $(SERVER) $(SERVER_BONUS) $(CLIENT_BONUS)
			@printf "$(RED)minitalk deleted 🗑️\n$(RESET)"

fclean:		clean
			@make -C ./includes/libft fclean

re:			fclean all
			@printf "$(CYAN)Minitalk recompiled 🔄\n$(RESET)"

.PHONY:		all clean fclean re bonus

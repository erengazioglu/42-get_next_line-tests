DIR			= ../get_next_line
GNL			= \
			$(DIR)/get_next_line_utils.c \
			$(DIR)/get_next_line.c
SRC			= \
			src/tests.c \
			src/suites.c \
			src/main.c
CFLAGS		= -g -Wall -Werror -Wextra
INCLUDE		= $(DIR)/get_next_line.h

test: $(GNL) $(SRC)
# 	@cc $^ && ./a.out
# 	@cc $(CFLAGS) -D BUFFER_SIZE=1024 $^ && ./a.out
	@cc $(CFLAGS) -D BUFFER_SIZE=42 $^ && ./a.out
# 	@cc $(CFLAGS) -D BUFFER_SIZE=4 $^ && ./a.out
# 	@cc $(CFLAGS) -D BUFFER_SIZE=1 $^ && ./a.out
# 	@cc $(CFLAGS) -D BUFFER_SIZE=0 $^ && ./a.out
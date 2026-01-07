DIR			= ../get_next_line
GNL			= \
			$(DIR)/get_next_line_utils.c \
			$(DIR)/get_next_line.c
SRC			= \
			src/tests.c \
			src/suites.c \
			src/main.c 
INCLUDE		= $(DIR)/get_next_line.h

test: $(GNL) $(SRC)
# 	@cc $^ && ./a.out
	@cc -g -D BUFFER_SIZE=64 $^ && ./a.out
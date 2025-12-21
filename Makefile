DIR			= ../get_next_line
GNL		= \
			$(DIR)/get_next_line_utils.c \
			$(DIR)/get_next_line.c
INCLUDE		= $(DIR)/get_next_line.h

test: $(GNL) tests.c
	@cc $^ && ./a.out
	@cc -D BUFFER_SIZE=42 $^ && ./a.out
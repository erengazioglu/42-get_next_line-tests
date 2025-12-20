DIR			= ../get_next_line
FILES		= \
			$(DIR)/get_next_line_utils.c \
			$(DIR)/get_next_line.c
INCLUDE		= $(DIR)/get_next_line.h

test: $(FILES)
	cc $^ && ./a.out
	cc -D BUFFER_SIZE=42 $^ && ./a.out
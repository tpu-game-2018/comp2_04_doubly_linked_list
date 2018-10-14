CC = gcc
CFLAGS = -std=c99
TARGET = a.out

$(TARGET): main.c
	$(CC) $(CFLAGS) $^ -o $(@)
	
test: $(TARGET)
	@./a.out < ${input} > result.txt
	@if diff result.txt ${expect} > /dev/null; then \
		echo "test: OK"; else \
		echo "test: NG"; \
		echo "* 入力:"; cat ${input}; \
		echo "* 期待される結果:"; cat ${expect}; \
		echo "* 実際の結果:"; cat result.txt; \
		exit 1; \
	fi

clean:
	rm -f output.txt $(TARGET)

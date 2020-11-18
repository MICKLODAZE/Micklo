JECT=llist
SRC=main.o
#SRC+=llist.o
#动态库
LDFLAGS+=-ldynamiclist -L.
# 头文件路径
CFLAGS+=-I/home/mcl/Micklo/c/ds/llist

# 目标:依赖
$(OBJECT):$(SRC)
	# 规则
	@gcc -o $@ $^ $(LDFLAGS) $(CFLAGS)

# 伪目标
clean:
	rm *.o llist


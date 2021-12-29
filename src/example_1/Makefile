PWD=$(shell pwd)
KERN_VERSION=$(shell uname -r)

obj-m += hello.o

all:
	$(MAKE) -C /lib/modules/$(KERN_VERSION)/build M=$(PWD) modules

clean:
	$(MAKE) -C /lib/modules/$(KERN_VERSION)/build M=$(PWD) clean

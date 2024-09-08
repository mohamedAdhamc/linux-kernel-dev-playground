1- Run `make` to build the module</br>
</br>
2- Use `sudo insmod hellomodule.ko` to load the compiled module into the kernel.</br>
</br>
3- Use `lsmod | grep hellomodule` to confirm that the module is indeed loaded.</br>
</br>
4- Use `sudo rmmod hellomodule` to remove the module from the kernel.</br>
</br>
5- Finally to view the kernel outputs use `sudo dmesg | tail`</br>

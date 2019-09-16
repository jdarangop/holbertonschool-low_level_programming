#!/bin/bash
wget -P ../ https://github.com/jdarangop/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libcrack.so
export LD_PRELOAD=../libcrack.so

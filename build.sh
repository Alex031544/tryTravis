#!/bin/bash

mkdir -p build

cd build; \
	cmake .. && \
	make; \
	cd ..	
	
rm -rf build


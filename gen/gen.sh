#!/bin/sh

echo "#pragma once" > gen/test.h
echo >> gen/test.h
python gen/ext00.py >> gen/test.h
echo >> gen/test.h
python gen/ext94.py >> gen/test.h

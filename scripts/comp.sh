#! /bin/sh

COMPILER="clang"
OPTION="-O2 -Weverything"
EXT=".c"

file=$1
stem=`basename ${file} ${EXT}`

${COMPILER} ${file} -o ${stem} ${OPTION}


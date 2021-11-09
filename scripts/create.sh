#!/bin/bash

ROOT_DIR="../"
TEMPLATE_DIR="${ROOT_DIR}/template/"
PREFIX="setsumon"
EXT=".c"

dir_name="$1"
file_count="$2"

cd `dirname $0`

if [ ! -d ${ROOT_DIR}/${dir_name} ]; then
    mkdir ${ROOT_DIR}/${dir_name}
fi

for i in $(seq 1 ${file_count}); do
    cp "${TEMPLATE_DIR}/basic.c" "../${dir_name}/${PREFIX}${i}${EXT}"
done


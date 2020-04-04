#!/usr/bin/env bash 

set -e

mcp(){
    path="$2"
    if test -d $2
    then
        filename=$(cut $1)
        path=${path}${filename}
        echo "directory: ${path}"
    else 
        echo "file: ${path}"
    fi
    if [ ! -f $path ]
    then
        echo " No such file : ${path}"
    else
        cp $path $1
    fi
}

cut(){
    echo ${1##*/}
}


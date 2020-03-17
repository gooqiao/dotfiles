#!/usr/bin/env bash 

# cat bootstrap | grep "cp "  | sed 's/cp/mcp/' >> cpp

set -e

mcp(){
    path="$2"
    if test -d $2
    then
        echo "directory"
        filename=$(cut $1)
        path=${path}${filename}
    else 
        echo "file"
    fi
    echo $(which mcp)
    cp $path $1
}

cut(){
    echo ${1##*/}
}

mcp ./git/work.gitconfig ~/work/.gitconfig
mcp ./git/global.gitconfig ~/.gitconfig
mcp ./bash/.bashrc ~/.bashrc
mcp ./bash/.bash_profile ~/.bash_profile
# mcp ./zsh/crispy.zsh-theme ~/.oh-my-zsh/themes/
mcp ./zsh/.zshrc ~/

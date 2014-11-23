#!/bin/bash

if [ "$TRAVIS_REPO_SLUG" == "GGist/RubyGL" ] && [ "$TRAVIS_PULL_REQUEST" == "false" ] && [ "$TRAVIS_BRANCH" == "master" ]; then
    echo -e "Publishing rdoc to gh-pages...\n"
    
    mkdir $HOME/rdoc-latest
    rake doc
    cp -r doc/* $HOME/rdoc-latest/.
    
    cd $HOME
    git config --global user.email "travis@travis-ci.org"
    git config --global user.name "travis-ci"
    git clone --quiet --branch=gh-pages https://${GH_TOKEN}@github.com/GGist/RubyGL gh-pages > /dev/null
    
    cd gh-pages
    cp -rf $HOME/rdoc-latest/* .
    git add -A
    git commit -m "Latest rdoc on successful travis build $TRAVIS_BUILD_NUMBER auto-pushed to gh-pages"
    git push -fq origin gh-pages > /dev/null
    
    echo -e "Published rdoc to gh-pages.\n"
fi
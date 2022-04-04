#!/bin/sh -l
set -x

REPO_DIR=/github/workspace

OUTPUT_BRANCH=$1

ConfigureGitUser() {
    git config user.name github-actions[bot]
    git config user.email github-actions[bot]@users.noreply.github.com
}

mkdir build && cd build
cmake $REPO_DIR
make Sphinx

cd $REPO_DIR
git remote update
git checkout "${OUTPUT_BRANCH}"
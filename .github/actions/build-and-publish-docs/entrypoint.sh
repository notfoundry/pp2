#!/bin/sh -l
set -x

OUTPUT_BRANCH=$1

ConfigureGitUser() {
    git config user.name github-actions[bot]
    git config user.email github-actions[bot]@users.noreply.github.com
}

mkdir build && cd build
cmake /github/workspace
make Sphinx

cd /github/workspace && git checkout ${OUTPUT_BRANCH}

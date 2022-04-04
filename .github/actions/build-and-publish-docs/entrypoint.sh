#!/bin/sh -l
set -x

WORKSPACE=/github/workspace

OUTPUT_BRANCH=$1

ConfigureGitUser() {
    git config user.name github-actions[bot]
    git config user.email github-actions[bot]@users.noreply.github.com
}

cd ${WORKSPACE}
mkdir build && cd build
cmake ${WORKSPACE}
make Sphinx

cd ${WORKSPACE}
git remote update
git checkout "${OUTPUT_BRANCH}"
mv -f ${WORKSPACE}/build/docs/sphinx/* ${WORKSPACE}
ls ${WORKSPACE}
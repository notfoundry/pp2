#!/bin/sh -l
set -x

WORKSPACE=/github/workspace

OUTPUT_BRANCH=$1


cd ${WORKSPACE}
mkdir build && cd build
cmake ${WORKSPACE}
make Sphinx

cd ${WORKSPACE}
git remote update
git checkout "${OUTPUT_BRANCH}"
mv -f ${WORKSPACE}/build/docs/sphinx/* ${WORKSPACE}


git add .
git config user.name github-actions[bot]
git config user.email github-actions[bot]@users.noreply.github.com
git commit -m "Auto-update documentation from ${GITHUB_REF}@${GITHUB_SHA}"
git push
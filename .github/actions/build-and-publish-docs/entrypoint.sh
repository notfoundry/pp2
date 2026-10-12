#!/bin/sh -l
set -eu

WORKSPACE=/github/workspace

OUTPUT_BRANCH=$1

chown -R $(id -u) ${WORKSPACE}

cd ${WORKSPACE}
mkdir build && cd build
cmake ${WORKSPACE} -DPP2_BUILD_TESTS=OFF -DPP2_BUILD_SINGLE_INCLUDE=OFF -DPP2_INSTALL=OFF
make Sphinx

cd ${WORKSPACE}
git remote update
git checkout -f "${OUTPUT_BRANCH}"
git ls-files | xargs rm -f
git ls-tree -d --name-only "${OUTPUT_BRANCH}" | xargs rm -rf
mv ${WORKSPACE}/build/docs/sphinx/* ${WORKSPACE}
rm -rf ${WORKSPACE}/build ${WORKSPACE}/docs
touch ${WORKSPACE}/.nojekyll


git add .
git config user.name github-actions[bot]
git config user.email github-actions[bot]@users.noreply.github.com
git commit -m "Auto-update documentation from ${GITHUB_REF}@${GITHUB_SHA}"
git push

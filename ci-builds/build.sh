#!/usr/bin/env bash

#this script assumes, that:
#  - BOOST_ROOT variable is pointing to Boost root directory
#  - COMPILER variable is set to proper compiler

# quit on errors
set -e

pushd `pwd`

./prepare-build.sh

echo "Building..."
make
echo "Compilation done."

./test.sh

popd

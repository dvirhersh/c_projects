#!/bin/bash

for dir in */; do
	file="${dir}dummy.md"
	echo "# Dummy file" > $file
	touch dummy.md
done

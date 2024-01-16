#!/bin/bash

# Generate c-tags based on included files (within reason)

local_files=$(find . -type f -regex '.*\.[ch]')
all_files=$(gcc -M $local_files | sed 's/\\/ /g' | sed 's/.*\.o: //g')
ctags -R --fields=+iaS --extra=+q $all_files


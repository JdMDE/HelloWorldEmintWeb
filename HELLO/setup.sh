#!/bin/bash
rm -f HelloWorld_localconf.emw
cat Local_part1 > HelloWorld_localconf.emw
echo " <ProjectDir>"`pwd`"/</ProjectDir>" >> HelloWorld_localconf.emw
cat Local_part2 >> HelloWorld_localconf.emw

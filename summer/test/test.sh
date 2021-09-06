#! /bin/bash

rm ./result.txt
for year in {1800..2150}; do
    echo ""$year" 2" | ../mycal | grep -E "\<29"
    if [ $? -eq 0 ]; then
        echo ok
        echo $year >> result.txt
    fi
done

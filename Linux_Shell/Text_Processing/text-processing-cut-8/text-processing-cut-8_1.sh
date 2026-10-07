while IFS= read -r line
do
    echo "$line" | cut -d' ' -f0-3
done

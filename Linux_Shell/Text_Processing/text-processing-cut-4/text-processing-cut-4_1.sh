while IFS= read -r line
do
    echo "$line" | cut -c0-4
done

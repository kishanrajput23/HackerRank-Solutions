while IFS= read -r line
do
    echo "$line" | cut -c3
done

while IFS= read -r line
do
    echo "$line" | cut -c2-7
done

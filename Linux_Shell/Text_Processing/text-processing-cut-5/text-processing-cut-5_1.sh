while IFS= read -r line
do
    echo "$line" | cut -f1-3
done

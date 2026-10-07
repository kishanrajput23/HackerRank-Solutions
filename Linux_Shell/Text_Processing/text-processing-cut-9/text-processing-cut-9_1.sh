while IFS= read -r line
do
    echo "$line" | cut -f2-
done

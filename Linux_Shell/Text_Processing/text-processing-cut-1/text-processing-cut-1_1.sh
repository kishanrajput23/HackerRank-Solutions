while IFS= read -r line
do
    echo "${line:2:1}"
done

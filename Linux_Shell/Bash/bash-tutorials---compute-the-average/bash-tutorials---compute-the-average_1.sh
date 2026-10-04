read -r n
sum = 0
for ((i=0; i<n; i++)); do
    read -r num
    sum=$((sum + num))
done
printf "%.3f\n" "$(echo "scale=10; $sum/$n" | bc -l)"

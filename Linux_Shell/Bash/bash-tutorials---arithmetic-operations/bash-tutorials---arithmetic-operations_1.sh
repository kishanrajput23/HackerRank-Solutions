read -r expression
printf "%.3f\n" "$(echo "scale=10; $expression" | bc -l)"

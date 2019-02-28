cat annuaire.txt | grep -i "^nicolas\tbauer" | rev | awk '{print$2}' | rev | grep -v "\."

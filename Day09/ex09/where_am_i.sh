ifconfig | grep "inet " | cut -d ' ' -f2 > ip
[ -s ip  ] && cat ip || echo 'I am lost!'
rm ip

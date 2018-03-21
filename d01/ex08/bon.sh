ldapsearch -Q -LLL "uid=*bon*" cn | sed -e '/dn:/d' -e '/./!d' |  wc -l | sed 's/^[ \t]*//' 

ldapsearch -Q "sn=*bon*" | grep sn: | grep -i bon | awk -F ' ' '{print$2}' | wc -l | awk -F ' ' '{print$1}'

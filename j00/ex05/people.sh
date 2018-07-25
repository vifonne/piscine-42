ldapsearch "uid=z*" | grep "cn:" | sed 's#.\{4\}##' | sort -r -f

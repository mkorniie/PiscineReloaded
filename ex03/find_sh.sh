find . -name "*.sh" -print | sed 's/.*\///g'| rev | sed 's/hs\.//' | rev

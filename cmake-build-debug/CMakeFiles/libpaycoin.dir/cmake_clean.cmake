file(REMOVE_RECURSE
  "liblibpaycoin.pdb"
  "liblibpaycoin.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/libpaycoin.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

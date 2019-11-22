file(REMOVE_RECURSE
  "liblibperson.pdb"
  "liblibperson.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/libperson.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

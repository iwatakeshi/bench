load('//:buckaroo_macros.bzl', 'buckaroo_deps')

prebuilt_cxx_library(
  name = 'bench',
  header_only = True,
  header_namespace = 'bench',
  exported_headers = [
    'bench.hpp',
  ],
  licenses = [
    'LICENSE',
  ], 
  visibility = [
    'PUBLIC',
  ],
  deps = buckaroo_deps()
)
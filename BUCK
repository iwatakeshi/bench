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
  ]
)

cxx_binary(
  name = 'main',
  srcs = [
    'main.cpp',
  ],
  deps = [
    '//:bench',
  ]
)
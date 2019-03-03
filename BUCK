prebuilt_cxx_library(
  name = 'bench',
  header_only = True,
  exported_headers = [
    'bench.hpp',
  ],
  visibility = [
    'PUBLIC'
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

tools = [
  'recorder',
  'transmuxer',
]

tools_c_args = [
  '-DG_LOG_DOMAIN="hwangsae-tools"',
  '-DHWANGSAE_COMPILATION',
]

foreach tool: tools
  exe_name = 'hwangsae-@0@-@1@'.format(tool, apiversion)
  src_file = '@0@.c'.format(tool)

  executable(exe_name,
    src_file,
    install: true,
    include_directories: hwangsae_incs,
    dependencies : [ libhwangsae_dep, gstreamer_dep, gio_dep ],
    c_args: tools_c_args,
  )
  
endforeach

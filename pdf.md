## How to install pdftk on macos
https://www.pdflabs.com/tools/pdftk-the-pdf-toolkit/pdftk_server-2.02-mac_osx-10.11-setup.pkg

## How to generate bookmarks
``` sh
$ pdftk input.pdf dump_data > mydump_data.txt
# modify mydump_data, insert bookmark information under page number line
$ pdftk input.pdf update_info_utf8 mydump_data.txt output output.pdf
```


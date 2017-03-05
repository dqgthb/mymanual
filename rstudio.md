# Rstudio

## ctrl to application key mapping (using karabiner) ##

edit private.xml to following:
```
    <?xml version="1.0"?>
    <root>
        <appdef>
            <appname>RSTUDIO</appname>
            <equal>org.rstudio.RStudio</equal>
        </appdef>

        <item>
            <name>RStudio: application to ctrl</name>
            <identifier>private.rstudiodef</identifier>
            <only>RSTUDIO</only>
            <autogen>__KeyToKey__ KeyCode::PC_APPLICATION, KeyCode::CONTROL_L</autogen>
        </item>
</root>
```
and it works.


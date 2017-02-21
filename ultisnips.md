# Ultisnips tips

## Why the default text not remaining? Ctrl J
	Turns out that if you have ${0:hello} instead of ${1:hello} it produces the problem. You can solve it by replacing 0 with 1.

## If you want to use the VISUAL selected word inside snippet
${1:${VISUAL}} is the way.
Enter visual mode and select the range of letters you would like and press 'g:UltiSnipsExpandTrigger', in my case, 'Tab'. The selected letters disappear and then I will enter insert mode. There, try a command. The placeholder would append the letters it holds onto the snippets you trigger.
e.g. anki.snippet -> cz (cloze test)

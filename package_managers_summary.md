# brew
brew update
brew list
brew info XXX
brew install XXX
brew uninstall XXX
brew upgrade XXX

# pip
pip install --upgrade pip
pip list / freeze
pip search XXX | grep XXX (for packages you are planning to install) / pip show XXX (for installed packages)
pip install XXX
pip uninstall XXX
pip install --upgrade XXX

# R
brew update R
installed.packages()
library(XXX) # load package XXX
search manually to know about a package
install.packages("XXX") # both for installing and updating a specific packages.
uninstall.packages("XXX")
old.packages()
update.packages()
update.packages(ask = FALSE)


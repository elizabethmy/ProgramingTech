# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH="/root/.oh-my-zsh"

# Set name of the theme to load --- if set to "random", it will
# load a random theme each time oh-my-zsh is loaded, in which case,
# to know which specific one was loaded, run: echo $RANDOM_THEME
# See https://github.com/ohmyzsh/ohmyzsh/wiki/Themes
# ZSH_THEME="powerlevel9k/powerlevel9k"
ZSH_THEME="powerlevel10k/powerlevel10k"
# ZSH_THEME="random"
#ZSH_THEME_RANDOM_CANDIDATES=( "robbyrussell" "agnoster")
POWERLEVEL9K_MODE='nerdfont-complete'
POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(context dir status virtualenv custom_wifi_signal)
POWERLEVEL9K_RIGHT_PROMPT_ELEMENTS=(vcs)
POWERLEVEL9K_STATUS_VERBOSE=true
POWERLEVEL9K_STATUS_CROSS=true
POWERLEVEL9K_SHOW_CHANGESET=true

POWERLEVEL9K_OS_ICON_BACKGROUND=024 #navyblue
POWERLEVEL9K_OS_ICON_FOREGROUND=202 #orangered1
POWERLEVEL9K_CONTEXT_TEMPLATE='%n'
POWERLEVEL9K_CONTEXT_DEFAULT_FOREGROUND=249 # white
POWERLEVEL9K_DIR_HOME_FOREGROUND=249
POWERLEVEL9K_DIR_HOME_SUBFOLDER_FOREGROUND=249
POWERLEVEL9K_DIR_ETC_FOREGROUND=249
POWERLEVEL9K_DIR_DEFAULT_FOREGROUND=249
POWERLEVEL9K_DIR_HOME_BACKGROUND=024 #deepskyblue4a
POWERLEVEL9K_DIR_HOME_SUBFOLDER_BACKGROUND=024 #deepskyblue4a
POWERLEVEL9K_DIR_ETC_BACKGROUND=024 #deepskyblue4a
POWERLEVEL9K_DIR_DEFAULT_BACKGROUND=024 #deepskyblue4a

POWERLEVEL9K_STATUS_OK_BACKGROUND=017
POWERLEVEL9K_STATUS_ERROR_BACKGROUND=017
POWERLEVEL9K_VCS_CLEAN_FOREGROUND=017 # navyblue
POWERLEVEL9K_VCS_CLEAN_BACKGROUND=040 # green3a
POWERLEVEL9K_VCS_UNTRACKED_FOREGROUND=017 # navyblue
POWERLEVEL9K_VCS_UNTRACKED_BACKGROUND=220 # gold1
POWERLEVEL9K_VCS_MODIFIED_FOREGROUND=236 #grey19
POWERLEVEL9K_VCS_MODIFIED_BACKGROUND=160 #red3a

POWERLEVEL9K_ROOT_INDICATOR_FOREGROUND=$P9KGT_YELLOW
POWERLEVEL9K_ROOT_INDICATOR_BACKGROUND=$P9KGT_TERMINAL_BACKGROUND
POWERLEVEL9K_BACKGROUND_JOBS_FOREGROUND=$P9KGT_TERMINAL_BACKGROUND
POWERLEVEL9K_BACKGROUND_JOBS_BACKGROUND=$P9KGT_YELLOW
POWERLEVEL9K_CONTEXT_TEMPLATE='%n'
POWERLEVEL9K_CONTEXT_DEFAULT_FOREGROUND='white'
POWERLEVEL9K_BATTERY_CHARGING='yellow'
POWERLEVEL9K_BATTERY_CHARGED='green'
POWERLEVEL9K_BATTERY_DISCONNECTED='$DEFAULT_COLOR'
POWERLEVEL9K_BATTERY_LOW_THRESHOLD='10'
POWERLEVEL9K_BATTERY_LOW_COLOR='red'
POWERLEVEL9K_MULTILINE_FIRST_PROMPT_PREFIX=''
POWERLEVEL9K_BATTERY_ICON='\uf1e6 '
POWERLEVEL9K_PROMPT_ON_NEWLINE=true
POWERLEVEL9K_MULTILINE_LAST_PROMPT_PREFIX="%F{014}\u2570%F{cyan}\uF460%F{073}\uF460%F{109}\uF460%f "
POWERLEVEL9K_VCS_MODIFIED_BACKGROUND='yellow'
POWERLEVEL9K_VCS_UNTRACKED_BACKGROUND='yellow'
POWERLEVEL9K_VCS_UNTRACKED_ICON='?'

POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(os_icon context dir vcs)
# POWERLEVEL9K_RIGHT_PROMPT_ELEMENTS=(status time dir_writable ip custom_wifi_signal ram load background_jobs)
POWERLEVEL9K_RIGHT_PROMPT_ELEMENTS=(status dir_writable ip ram disk_usage load)
#POWERLEVEL9K_SHORTEN_DIR_LENGTH=3
POWERLEVEL9K_TIME_FORMAT="%D{\uf017 %H:%M \uf073 %d/%m/%y}"
POWERLEVEL9K_TIME_BACKGROUND='white'
POWERLEVEL9K_RAM_BACKGROUND='yellow'
POWERLEVEL9K_LOAD_CRITICAL_BACKGROUND="white"
POWERLEVEL9K_LOAD_WARNING_BACKGROUND="white"
POWERLEVEL9K_LOAD_NORMAL_BACKGROUND="white"
POWERLEVEL9K_LOAD_CRITICAL_FOREGROUND="red"
POWERLEVEL9K_LOAD_WARNING_FOREGROUND="yellow"
POWERLEVEL9K_LOAD_NORMAL_FOREGROUND="black"
POWERLEVEL9K_LOAD_CRITICAL_VISUAL_IDENTIFIER_COLOR="red"
POWERLEVEL9K_LOAD_WARNING_VISUAL_IDENTIFIER_COLOR="yellow"
POWERLEVEL9K_LOAD_NORMAL_VISUAL_IDENTIFIER_COLOR="green"
POWERLEVEL9K_HOME_ICON=''
POWERLEVEL9K_HOME_SUB_ICON=''
POWERLEVEL9K_FOLDER_ICON=''
POWERLEVEL9K_STATUS_VERBOSE=true
POWERLEVEL9K_STATUS_CROSS=true
# Set list of themes to pick from when loading at random
# Setting this variable when ZSH_THEME=random will cause zsh to load
# a theme from this variable instead of looking in $ZSH/themes/
# If set to an empty array, this variable will have no effect.
# ZSH_THEME_RANDOM_CANDIDATES=( "robbyrussell" "agnoster" )

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion.
# Case-sensitive completion must be off. _ and - will be interchangeable.
# HYPHEN_INSENSITIVE="true"

# Uncomment the following line to disable bi-weekly auto-update checks.
# DISABLE_AUTO_UPDATE="true"

# Uncomment the following line to automatically update without prompting.
# DISABLE_UPDATE_PROMPT="true"

# Uncomment the following line to change how often to auto-update (in days).
# export UPDATE_ZSH_DAYS=13

# Uncomment the following line if pasting URLs and other text is messed up.
# DISABLE_MAGIC_FUNCTIONS="true"

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
# ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
# Caution: this setting can cause issues with multiline prompts (zsh 5.7.1 and newer seem to work)
# See https://github.com/ohmyzsh/ohmyzsh/issues/5765
# COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# You can set one of the optional three formats:
# "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# or set a custom format using the strftime function format specifications,
# see 'man strftime' for details.
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Which plugins would you like to load?
# Standard plugins can be found in $ZSH/plugins/
# Custom plugins may be added to $ZSH_CUSTOM/plugins/
# Example format: plugins=(rails git textmate ruby lighthouse)
# Add wisely, as too many plugins slow down shell startup.
plugins=(git svn)

source $ZSH/oh-my-zsh.sh

# User configuration

# export MANPATH="/usr/local/man:$MANPATH"

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
#Font: MesloLGS NF
# Set up aliases
alias gitgraph='git log --decorate --oneline --graph --abbrev-commit --format=format:"%C(bold yellow)%h%C(reset) %C(bold white)%<|(120,trunc)%s%C(reset) %C(bold dim green)%cL%C(reset) %C(bold magenta)(%ar %C(white)- %C(bold cyan)%cD)%C(reset) %C(auto)%d%C(reset)"'
alias gitgraphstat='git log --decorate --oneline --graph --stat --abbrev-commit --format=format:"%C(bold yellow)%h%C(reset) %C(bold white)%s%C(reset) %C(bold dim green)%ce%C(reset) %C(bold magenta)(%ar %C(white)- %C(bold cyan)%cD)%C(reset)%C(auto)%d%C(reset)"'
alias gitgraph10='git log -10 HEAD --decorate --oneline --graph --abbrev-commit --format=format:"%C(bold yellow)%h%C(reset) %C(bold white)%<|(120,trunc)%s%C(reset) %C(bold dim green)%cL%C(reset) %C(bold magenta)(%ar %C(white)- %C(bold cyan)%cD)%C(reset) %C(auto)%d%C(reset)"'
alias gitgraphstat5='git log -5 HEAD --decorate --oneline --graph --stat --abbrev-commit --format=format:"%C(bold yellow)%h%C(reset) %C(bold white)%s%C(reset) %C(bold dim green)%ce%C(reset) %C(bold magenta)(%ar %C(white)- %C(bold cyan)%cD)%C(reset)%C(auto)%d%C(reset)"'

alias gitgraphshort='git log --graph --abbrev-commit --decorate --format=format:"%C(bold blue)%h%C(reset) %C(bold green)%ai%C(reset)%C(bold yellow)%d%C(reset) %C(white)%s%C(reset) %C(magenta)%an%C(reset)"'
alias gitlog10='git log -10 HEAD --graph --abbrev-commit --decorate --format=format:"%C(bold blue)%h%C(reset) %C(bold green)%ai%C(reset)%C(bold yellow)%d%C(reset) %C(white)%s%C(reset) %C(magenta)%an%C(reset)"'
alias gitlog10first='git log -10 HEAD --first-parent --graph --abbrev-commit --decorate --format=format:"%C(bold blue)%h%C(reset) %C(bold green)%ai%C(reset)%C(bold yellow)%d%C(reset) %C(white)%s%C(reset) %C(magenta)%an%C(reset)"'

alias gitremoteupdate='!git remote update origin --prune && git branch -a'
alias gitbranchadetail='"! for branch in `git branch -r | grep -v HEAD`;do echo $branch __________ `git show --format=\" [%ar] __________ by %an <%ae>\" $branch | head -n 1` ; done | sort -r"'

alias gitunstage='git reset HEAD --'
alias gitexternal='git config --file .gitmodules --get-regexp path'
# alias gitcleanup='!git clean -ffd &&  git rm --cached -r . && git reset --hard HEAD && git rm .gitattributes && git reset . && git checkout .  && git submodule deinit -f --all && git submodule update --init --recursive'
alias gitcleanup='git clean -ffd &&  git rm --cached -r . && git reset --hard HEAD && git rm .gitattributes && git reset . && git checkout .  && git submodule deinit -f --all && git submodule update --init --recursive'
# alias gitpullfull='!git pull && git submodule update --init --recursive'
alias gitpullfull='git pull && git submodule update --init --recursive'
alias gitpullsubmodule='git submodule update --init --recursive'
alias gitclonefull='git clone --recursive'

alias gitpatch='git diff --no-prefix --ignore-space-at-eol --ignore-cr-at-eol'
alias gitpatch1='git diff --no-prefix --ignore-space-at-eol --ignore-cr-at-eol HEAD~1 HEAD~0'
alias gitpatch2='git diff --no-prefix --ignore-space-at-eol --ignore-cr-at-eol --ignore-submodules=all HEAD~1 HEAD~0 ":!.git*" ":!*/CI_*" ":!*.aar" ":!*.jar" ":!*.so" ":!*.png"'
alias gitpatch3='!git diff -b --no-prefix --ignore-space-at-eol --ignore-cr-at-eol --ignore-submodules=all HEAD~1 HEAD~0 ":!.git*" ":!*/CI_*" ":!*.aar" ":!*.jar" ":!*.so" ":!*.png"'
alias gitshowalias='config --show-origin --get-regexp alias'

alias cls='printf "\033c"'
# alias ohmyzsh="mate ~/.oh-my-zsh"

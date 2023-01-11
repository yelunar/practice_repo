# Git

git: 분산 버전 관리 프로그램 / 코드 히스토리(버전) 관리 도구 / 이전 버전과의 변경 사항 비교 및 분석

- Repository 레포

`git init` 명령어로 로컬 저장소 생성

`.git` 디렉토리에 버전 관리에 필요한 모든 것 들어있음

- README.md 생성하기
  
  새 폴더를 만들고 README.md 파일 생성하기
  
  이 파일을 버전 관리하며 git을 사용해보자!

- **Working Diretory**: 내가 작업하고 있는 실제 디렉토리 (git으로 관리는 X)
  
  ⬇ `git add`
  
  **Staging Area**: 커밋으로 남기고 싶은, 특정 버전으로 관리하고 싶은 파일이 있는 곳 
  
  ⬇ `git commit` 
  
  **Repo**: 커밋들이 저장되는 곳

    `git log` : 커밋 잘 된지 안 된지 확인

`git status` : 커밋 된지 안된지 상태 확인



💥 이상한 거 뜨면 q 누르면 됨

```markdown
SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git status
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        CLI.md
        Start_Camp.md
        git.md
        markdown.md

nothing added to commit but untracked files present (use "git add" to track)

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git add markdown.md

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git add markdown/
fatal: pathspec 'markdown/' did not match any files

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git add marktext/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   markdown.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        CLI.md
        Start_Camp.md
        git.md


SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git commit -m "first class 230111| markdown"
Author identity unknown

*** Please tell me who you are.

Run

  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"

to set your account's default identity.
Omit --global to set the identity only in this repository.

fatal: unable to auto-detect email address (got 'SSAFY@DESKTOP-DOGVPUB.(none)')

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ ^C

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ ^[[200~git config --global user.email "you@example.com"
bash: $'\E[200~git': command not found

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ ~git config -- global user.email "yeajin7933@gmail.com"
bash: ~git: command not found

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ ^C

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ ~git config -- global user.email "yeajin7933@gmail.com"
bash: ~git: command not found

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git config --global user.email "yeajin7933@gmail.com"

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git congig --global user.name "yelunar"
git: 'congig' is not a git command. See 'git --help'.

The most similar command is
        config

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ config --global user.name "yelunar"
bash: config: command not found

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git config --global --list
user.email=yeajin7933@gmail.com

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git config --global user.name "yelunar"

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git config
usage: git config [<options>]

Config file location
    --global              use global config file
    --system              use system config file
    --local               use repository config file
    --worktree            use per-worktree config file
    -f, --file <file>     use given config file
    --blob <blob-id>      read config from given blob object

Action
    --get                 get value: name [value-pattern]
    --get-all             get all values: key [value-pattern]
    --get-regexp          get values for regexp: name-regex [value-pattern]
    --get-urlmatch        get value specific for the URL: section[.var] URL
    --replace-all         replace all matching variables: name value [value-pattern]
    --add                 add a new variable: name value
    --unset               remove a variable: name [value-pattern]
    --unset-all           remove all matches: name [value-pattern]
    --rename-section      rename section: old-name new-name
    --remove-section      remove a section: name
    -l, --list            list all
    --fixed-value         use string equality when comparing values to 'value-pattern'
    -e, --edit            open an editor
    --get-color           find the color configured: slot [default]
    --get-colorbool       find the color setting: slot [stdout-is-tty]

Type
    -t, --type <type>     value is given this type
    --bool                value is "true" or "false"
    --int                 value is decimal number
    --bool-or-int         value is --bool or --int
    --bool-or-str         value is --bool or string
    --path                value is a path (file or directory name)
    --expiry-date         value is an expiry date

Other
    -z, --null            terminate values with NUL byte
    --name-only           show variable names only
    --includes            respect include directives on lookup
    --show-origin         show origin of config (file, standard input, blob, command line)
    --show-scope          show scope of config (worktree, local, global, system, command)
    --default <value>     with --get, use default value when missing entry


SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git config --global --list
user.email=yeajin7933@gmail.com
user.name=yelunar

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git commit -m "first class 230111| markdown"
[master (root-commit) 4f2907e] first class 230111| markdown
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 markdown.md

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown (master)
$ git log
commit 4f2907e7c152e275f8fb366515c09bb1b6e0b1ab (HEAD -> master)
Author: yelunar <yeajin7933@gmail.com>
Date:   Wed Jan 11 16:56:01 2023 +0900

    first class 230111| markdown
```

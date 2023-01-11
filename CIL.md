# CIL

CLI(Command Line Interface) : <mark>명령어</mark>를 통해 사용자와 컴퓨터가 상호 작용하는 방식

    cf) GUI: 그랙픽을 통해 상호작용

= 수 많은 서버 / 개발 시스템이 CLI를 통한 조작 환경 제공

- touch: 파일을 생성하는 명령어

- mkdir: 새 폴더를 생성하는 명령어

- ls: 현재 작업 중인 디렉토리의 폴더/파일 목록을 보여주는 명령어

- cd: 현재 작업 중인 디렉토리를 변경하는 명령어

    ex) cd deskop/ : 바탕화면으로 디렉토리 변경

- start, open: 폴더/파일을 여는 명렁어(Windows에서는 start)

- rm: 파일을 삭제하는 명령어, -r 옵션을 주면 폴더 삭제가능(ex rm -r 폴더명/)

- 절대 경로 C:/Users/ssafy/Desktop

- 상대 경로 ./ : 현재 작업하고 있는 폴더  ../: 현재 작업하고 있는 폴더 한 단계 상위 폴더

```md
SSAFY@DESKTOP-DOGVPUB MINGW64 ~
$ cd desktop/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop
$ ls
 1학기/
'Eclipse IDE for Java Developers - 2022-09.lnk'*
 MarkText.lnk*
 SPIKE-PRIME_Win10_2.0.9_Global.msi
 Webex.lnk*
 desktop.ini
 markdown/
 marktext/
 ssafy/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop
$ cd marktext/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/marktext
$ cd marktext_markdown/
bash: cd: marktext_markdown/: No such file or directory

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/marktext
$ cd markdown_marktext/
bash: cd: markdown_marktext/: No such file or directory

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/marktext
$ cd ..

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop
$ cd markdown/marktext/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown/marktext
$ cd ../../

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop
$ cd markdown/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown
$ mkdir CIL

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown
$ ls
CIL/  CLI.md  Start_Camp.md  marktext/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown
$ cd CIL/

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown/CIL
$ touch CIL.md

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown/CIL
$ ls
CIL.md

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown/CIL
$ start cil.md

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown/CIL
$ mv cil.md markdown/
mv: cannot move 'cil.md' to 'markdown/': No such file or directory

SSAFY@DESKTOP-DOGVPUB MINGW64 ~/desktop/markdown/CIL
$ mv CIL.md markdown/
mv: cannot move 'CIL.md' to 'markdown/': No such file or directory
```

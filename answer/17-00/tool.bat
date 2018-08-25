@echo off
set num=1
setlocal ENABLEDELAYEDEXPANSION
for /f "delims=" %%a in ('dir/a-d/b *.c') do (
set /a num+=1
ren "%%a" "16-0!num!.c"
)
echo 重命名完成
pause
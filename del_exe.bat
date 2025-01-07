@echo off
setlocal enabledelayedexpansion

REM 获取当前目录
set "currentDir=%cd%"

REM 循环删除所有 .exe 文件
for /r "%currentDir%" %%f in (*.exe) do (
    echo deleted file :%%f
    del /q "%%f"
)

echo all `.exe` files have been deleted.
pause

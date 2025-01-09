# Linux -> screen 基本用法和用途

这篇博客简单介绍一下 Linux 系统中的 `screen` 工具。

`screen` 的作用可以理解为在 Linux 系统中开启多个不同的界面。在传统的 Linux 操作中，命令行如果执行了某个程序，可能会在命令行中显示程序的状态而无法使用别的命令。screen 的功能就可以克服这个缺陷。

使用 screen 可以创建多个不同的“窗口”，每个窗口都是一个独立的命令行程序，可以类比做多个 Windows 终端或者命令行。此时，就可以通过多个 screen 窗口并行的方式，实现在对某些程序保活的情况下执行别的命令，或者单纯将某些程序转移到“后台”持续运行。

下面简单介绍 screen 的常见命令和“保活程序”的基本流程。

## 基本命令

screen 的命令都以 `screen` 开头，通过不同的参数配置不同的功能。

```shell
screen [-AmRvx -ls -wipe][-d <作业名称>][-h <行数>][-r <作业名称>][-s ][-S <作业名称>]
```

> 需要额外说明的是，当你正处于某个 screen 中的时候，可以通过 `ctrl + a, d` 的方式 detach 当前的 screen。

**参数说明：**

-A 　将所有的视窗都调整为目前终端机的大小。
-d <作业名称> 　将指定的screen作业离线。
-h <行数> 　指定视窗的缓冲区行数。
-m 　即使目前已在作业中的screen作业，仍强制建立新的screen作业。
-r <作业名称> 　恢复离线的screen作业。
-R 　先试图恢复离线的作业。若找不到离线的作业，即建立新的screen作业。
-s 　指定建立新视窗时，所要执行的shell。
-S <作业名称> 　指定screen作业的名称。
-v 　显示版本信息。
-x 　恢复之前离线的screen作业。
-ls或--list 　显示目前所有的screen作业。
-wipe 　检查目前所有的screen作业，并删除已经无法使用的screen作业。


**常用参数：**

screen -S yourname -> 新建一个叫yourname的session
screen -ls -> 列出当前所有的session
screen -r yourname -> 回到yourname这个session
screen -d yourname -> 远程detach某个session
screen -d -r yourname -> 结束当前session并回到yourname这个session


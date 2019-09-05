" src: https://blog.csdn.net/lovewebeye/article/details/79960675
" ref: http://www.ruanyifeng.com/blog/2018/09/vimrc.html
" modified by William Wang

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" 基本设置
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" Basic settings
set cursorline
set number
set scrolloff=3
set hlsearch
set incsearch
set undofile
set autoread

"从Win上复制文件时，避免换行符错误
set fileformat=unix

" set spell spelllang=en_us

" 设定默认解码 
set fenc=utf-8 
set fencs=utf-8,usc-bom,euc-jp,gb18030,gbk,gb2312,cp936 

" history文件中需要记录的行数 
set history=1000

" 在处理未保存或只读文件的时候，弹出确认 
set confirm

" 与windows共享剪贴板 
set clipboard+=unnamed

" 侦测文件类型 
filetype on

" 智能补全
set completeopt=longest,menu

" 载入文件类型插件 
filetype plugin on

" 为特定文件类型载入相关缩进文件 
filetype indent on

" 保存全局变量 
set viminfo+=!

" 语法高亮 
syntax enable
syntax on 

" 在底部显示模式
set showmode

" 显示当前控制命令
set showcmd

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" 文件设置 
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 

" 增强模式中的命令行自动完成操作 
set wildmenu

" 命令行（在状态行下）的高度，默认为1，这里是2 
set cmdheight=1

" 使回格键（backspace）正常处理indent, eol, start等 
set backspace=2

" 允许backspace和光标键跨越行边界 
set whichwrap+=<,>,h,l

" 可以在buffer的任何地方使用鼠标（类似office中在工作区双击鼠标定位） 
set mouse=a
set selection=exclusive
set selectmode=mouse,key

" 启动的时候不显示那个援助索马里儿童的提示 
set shortmess=atI

" 通过使用: commands命令，告诉我们文件的哪一行被改变过 
set report=0

" 不让vim发出讨厌的滴滴声
set noerrorbells

" 在被分割的窗口间显示空白，便于阅读 
set fillchars=vert:\ ,stl:\ ,stlnc:\ 

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" 搜索和匹配 
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" 高亮显示匹配的括号 
set showmatch

" 匹配括号高亮的时间（单位是十分之一秒） 
set matchtime=10

" 在搜索的时候忽略大小写 
" set ignorecase 

" 我的状态行显示的内容（包括文件类型和解码） 
set statusline=%F%m%r%h%w\_\[POS=%l,%v]\_[%p%%]\_\%{strftime(\"%d/%m/%y\ -\ %H:%M\")}\_\[VIM-AWMOD\]

" 总是显示状态行 
set laststatus=2

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" 文本格式和排版 
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 

" 关闭自动折行
set linebreak

" 自动将TAB转化为空格
set expandtab

" 自动格式化 
set formatoptions=tcrqn

" 继承前一行的缩进方式，特别适用于多行注释 
set autoindent

" 为C程序提供自动缩进 
set smartindent

" 使用C样式的缩进 
set cindent

" 制表符为4 
set tabstop=4

" 统一缩进为4 
set softtabstop=4
set shiftwidth=4

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 
" Auto commands 
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""" 

" F5编译和运行C程序，F6编译和运行C++程序 
" 请注意，下述代码在windows下使用会报错 
" 需要去掉./这两个字符 

" C的编译和运行 
map <F5> :call CompileRunGcc()<CR> 
func! CompileRunGcc()
exec "w"
exec "!gcc % -g -o %<"
exec "! ./%<"
endfunc

" C++的编译和运行 
map <F6> :call CompileRunGpp()<CR>
func! CompileRunGpp()
exec "w"
exec "!g++ % -g -o %<"
exec "! ./%<"
endfunc

" 用空格键来开关折叠 
set foldenable
set foldmethod=manual
nnoremap <space> @=((foldclosed(line('.')) < 0) ? 'zc':'zo')<CR>

" 配色方案
colorscheme desert


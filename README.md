# Логическое программирование - 1

Репозиторий для митапа по логическим языкам программирования

# Prolog

## Установка Prolog

- Ubuntu: http://www.swi-prolog.org/build/PPA.html
- Windows, MacOS: http://www.swi-prolog.org/download/stable
- Linux, *BSD: http://www.swi-prolog.org/build/unix.html

## Hello World

    mkdir prolog-meetup-1
    cd prolog-meetup-1
    echo -e "?- write('Hello World'), nl.\n?- halt." >> hello.pl 
    swipl -s hello.pl

# Mercury

## Установка Mercury

- скачать архив исходников http://dl.mercurylang.org/index.html
- разархивировать
- зайти в папку
- запустить `configure`
- запустить `make`
- запустить `make install`
- проверить пути #          
    PATH=/usr/local/mercury-14.01.1/bin
    MANPATH=/usr/local/mercury-14.01.1/man
    INFOPATH=/usr/local/mercury-14.01.1/info


## Hello World
    mmc hello.m

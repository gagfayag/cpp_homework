#!/bin/bash
mkdir -p build
APP=build/sort_single
if [ -f "$APP" ]; then rm "$APP"; fi
g++ main.cpp -o "$APP"
if [ $? -eq 0 ]; then
    echo "Запуск:"
    ./"$APP"
else
    echo "Ошибка компиляции!"
fi

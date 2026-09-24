APP=sort_app

if [ -f "$APP" ]; then
	rm "$APP"
fi

echo 
g++ main.cpp sortings.cpp io.cpp -o "$APP"

if [ $? -eq 0 ]; then 
	echo "Запуск программы:"
	echo "-----------------"
	./"$APP"
else
	echo "Ошибка компиляции"
fi

# Модуль roots
## Метод «Белый ящик»
### Тест №1
Цель: проверить корни и их количество при D > 0
Тип: позитивный
Входные данные: a = 1. b = 11, c = 30
Ожидаемый результат: count = 2, x1 = -5, x2 = -6
### Тест №2
Цель: проверить корни и их количество при D = 0
Тип: позитивный
Входные данные: a = 1. b = 4, c = 4
Ожидаемый результат: count = 1, x1 = -2
### Тест №3
Цель: проверить количество корней при D < 0
Тип: позитивный
Входные данные: a = 1. b = 2, c = 2
Ожидаемый результат: count = 0
### Тест №4
Цель: проверить правильность подсчёта вещественных корней
Тип: позитивный
Входные данные: a = 1.2, b = 3.8, c = -0.2
Ожидаемый результат: count = 2, х1 ~ -3.21845, x2 ~ 0.0517847
### Тест №5
Цель: проверить количество корней при a = 0
Тип: негативный
Входные данные: a = 0, b = 2, c = 4
Ожидаемый результат: count = 1, х1 = -2
### Тест №6
Цель: проверить количество корней при a = b = 0
Тип: негативный
Входные данные: a = 0, b = 0 c = 14
Ожидаемый результат: flag = 1
### Тест №7
Цель: проверить количество корней при a = b = c = 0
Тип: негативный
Входные данные: a = 0, b = 0 c = 0
Ожидаемый результат: flag = 1

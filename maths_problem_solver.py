# Калькулятор
# Чтобы решить пример, нужно просто ввести его в одну строку
# Доступны операции + - * /
# Чтобы завершить, нужно ввести stop ли стоп

while True:
    try:
        inputed = input('Введите пример: ')
        inputed_numbers_str = ''
        inputed_symbols = []
        symbols = ['+', '-', '*', '/']
        result = 0
        # Остановить программу
        if inputed.lower() == 'stop' or inputed.lower() == 'стоп':
            assert 1 == 0
        # Очистка введённого текста от лишних деталей, считывание знаков и добавление их в список
        for i in inputed:
            if i.isdigit():                  # Запись чисел примера
                inputed_numbers_str += i
            elif i == '.':
                if not inputed_numbers_str.endswith('.'):    # Даже если пользователь ставит больше одной
                    inputed_numbers_str += i                 # точки подряд, записывается только одна
            elif i == ' ' or i == '=':       # Игнорирование пробелов и знакор равно
                pass
            else:
                if i in symbols:                              # Вместо знаков в строке inputed_numbers_str
                    if not inputed_numbers_str.endswith(' '): # записывается пробел, чтоб в дальнейшем
                        inputed_numbers_str += ' '            # отделить числа друг от друга с split(' ');
                        inputed_symbols += i                  # Знаки же добавляются в список inputed_symbols
                    else:
                        print('Ошибка! Несколько знаков рядом')
                        raise ValueError
                        break
                else:
                    print('Ошибка! Недопустимый символ в примере')
                    raise ValueError
                    break
                
        inputed_numbers = inputed_numbers_str.split(' ')      # Список отдельных введённых чисел str
        
        if inputed_numbers_str.endswith(' '):
            inputed_symbols.pop(-1)                     # Стирание знака, если он стоит в конце приимера
            inputed_numbers = inputed_numbers[:-1]      # Стирание ненужного элемента '' из списка в этом случае

        if inputed_numbers_str.startswith(' '):
            inputed_symbols.pop(0)                      # Стирание знака, если он стоит в начале приимера
            inputed_numbers = inputed_numbers[1:]       # Стирание ненужного элемента '' из списка в этом случае
            
        inputed_symbols_numbered = [i for i in enumerate(inputed_symbols)]   # Нумерация каждого знака
        inputed_numbers = [float(i) for i in inputed_numbers]                # str числа в float
        
        while '*' in inputed_symbols or '/' in inputed_symbols:
            for num, sym in inputed_symbols_numbered:
                # Условие* Номер символа num между двумя числами равен номеру первого из них
                if sym == '*':
                    # Вместо двух чисел над которыми проводится операция, записывается её результат
                    inputed_numbers[num] = inputed_numbers[num] * inputed_numbers[num + 1]
                    inputed_numbers.pop(num + 1)
                    # Соответствующий знак стирается и весь список знаков заново перенумеровывается,
                    # чтобы выполнялось Условие* Цикл обрывается, чтоб активировался заново с новой
                    # нумерацией
                    inputed_symbols.pop(num)
                    inputed_symbols_numbered = [i for i in enumerate(inputed_symbols)]
                    break
                elif sym == '/':
                    inputed_numbers[num] = inputed_numbers[num] / inputed_numbers[num + 1]
                    inputed_numbers.pop(num + 1)
                    inputed_symbols.pop(num)
                    inputed_symbols_numbered = [i for i in enumerate(inputed_symbols)]
                    break
        while '+' in inputed_symbols or '-' in inputed_symbols:
            for num, sym in inputed_symbols_numbered:
                if sym == '+':
                    inputed_numbers[num] = inputed_numbers[num] + inputed_numbers[num + 1]
                    inputed_numbers.pop(num + 1)
                    inputed_symbols.pop(num)
                    inputed_symbols_numbered = [i for i in enumerate(inputed_symbols)]
                    break
                elif sym == '-':
                    inputed_numbers[num] = inputed_numbers[num] - inputed_numbers[num + 1]
                    inputed_numbers.pop(num + 1)
                    inputed_symbols.pop(num)
                    inputed_symbols_numbered = [i for i in enumerate(inputed_symbols)]
                    break

        # Последний и единственный получившийся элемент списка inputed_numbers и есть результат примера
        if int(inputed_numbers[0]) ==  inputed_numbers[0]:
            result = int(inputed_numbers[0])
        else:
            result = inputed_numbers[0]
            
        print('Ответ: ' + str(result))
        
    except ValueError:
        pass
    except AssertionError:
        break

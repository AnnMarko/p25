import datetime, time

def asking_age():
    try:
        time.sleep(0.3)
        age = int(input('How old are you?\n'))
        year_current = datetime.datetime.now().year

        year_birth = year_current - age
        
        print(f'You were born in {year_birth} or in {year_birth + 1}')
    except ValueError:
        print('You need to enter a number, so')
        asking_age()

def asking_name():
    first_name = input('What is your first name?\n')
    last_name = input('What is your last name?\n')
    
    print(f'Hello, {first_name} {last_name}')

asking_name()
asking_age()

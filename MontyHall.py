import sys
import numpy as np

LENGTH = 100000

def monty_hall(length=LENGTH):
    arganswer = np.random.randint(0, 3, length)

    select = np.random.randint(0, 3, length)
    show = np.random.randint(0, 3, length)
    mask = (show == select) | (show == arganswer)
    while np.any(mask):
        show[mask] = np.random.randint(0, 3, np.count_nonzero(mask))
        mask = (show == select) | (show == arganswer)

    not_changing = np.count_nonzero(select == arganswer)
    changing = length - not_changing

    print(f'not changing:\t{np.round(not_changing/length, decimals=3)}')
    print(f'changing:\t{np.round(changing/length, decimals=3)}')

if __name__ == '__main__':
    print('Monty Hall Problem')
    if len(sys.argv) > 1:
        length = int(sys.argv[1])
    else:
        length = LENGTH

    monty_hall(length)

import random
import os

def gen_yes_case(min_len=1, max_len=10):
    length = random.randint(min_len, max_len)
    p = ''.join(random.choice(['L', 'R']) for _ in range(length))
    s = ''.join(ch * random.choice([1, 2]) for ch in p)
    return p, s

def gen_no_case(min_len=1, max_len=10):
    p, s = gen_yes_case(min_len, max_len)
    idx = random.randrange(len(s))
    wrong_char = 'L' if s[idx] == 'R' else 'R'
    s = s[:idx] + wrong_char + s[idx+1:]
    return p, s

def write_case_files(num_cases=5, outcome='ANY', min_len=100, max_len=4000, output_dir='Testcases', seed=None):
    if seed is not None:
        random.seed(seed)

    os.makedirs(output_dir, exist_ok=True)

    for i in range(1, num_cases + 1):
        if outcome == 'YES':
            p, s = gen_yes_case(min_len, max_len)
        elif outcome == 'NO':
            p, s = gen_no_case(min_len, max_len)
        else:
            if random.choice([True, False]):
                p, s = gen_yes_case(min_len, max_len)
            else:
                p, s = gen_no_case(min_len, max_len)

        with open(os.path.join(output_dir, f'{i}in.txt'), 'w') as f:
            f.write(p + '\n\n' + s + '\n')

write_case_files(num_cases=10, outcome='ANY', min_len=100, max_len=4000, output_dir='Testcases', seed=42)
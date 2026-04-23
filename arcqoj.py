import os
import shutil
mode = input()
if mode == "cpp":
    s = int(input().strip()) # 문제 번호
    folder = (s // 1000) * 1000
    name = str(folder)

    dst_file = f"{s}.cpp"
    base = "qoj"
    target_dir = os.path.join(base, name)
    target_path = os.path.join(target_dir, dst_file)
    os.makedirs(target_dir, exist_ok = True)

    if not os.path.exists("main.cpp"):
        print("main.cpp X")
        exit(1)

    shutil.copy("main.cpp", target_path)
    print(f"{target_path} saved!")
elif mode == "c":
    s = int(input().strip()) # 문제 번호
    folder = (s // 1000) * 1000
    name = str(folder)

    dst_file = f"{s}.c"
    base = "qoj"
    target_dir = os.path.join(base, name)
    target_path = os.path.join(target_dir, dst_file)
    os.makedirs(target_dir, exist_ok = True)

    if not os.path.exists("main.c"):
        print("main.c X")
        exit(1)

    shutil.copy("main.c", target_path)
    print(f"{target_path} saved!")
elif mode == "py":
    s = int(input().strip()) # 문제 번호
    folder = (s // 1000) * 1000
    name = str(folder)

    dst_file = f"{s}.py"
    base = "qoj"
    target_dir = os.path.join(base, name)
    target_path = os.path.join(target_dir, dst_file)
    os.makedirs(target_dir, exist_ok = True)

    if not os.path.exists("main.py"):
        print("main.py X")
        exit(1)

    shutil.copy("main.py", target_path)
    print(f"{target_path} saved!") 
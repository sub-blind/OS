import psutil

psutil.process_iter()

for proc in psutil.process_iter():
    ps_name = proc.name()

    if "chrome" in ps_name:
        print(ps_name, proc.pid)

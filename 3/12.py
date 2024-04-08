from multiprocessing import Pipe, Process
import os


def send(conn):
    print(f"{os.getpid()} SEND DATA TO {os.getppid()}")
    conn.send("Hello, Parents ~")
    conn.close()


if __name__ == "__main__":
    parent, child = Pipe()
    p = Process(target=send, args=(child,))
    p.start()
    print("Process ID : ", os.getpid())
    print(parent.recv())
    p.join()

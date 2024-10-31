import socket


def main(host="127.0.0.1", port=65432):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((host, port))
        s.listen(5)

        print('Server started')

        conn, address = s.accept()

        with conn:
            print(f"Connected by {address}")
            conn.send(bytes(f"Connected to server\n", 'utf-8'))
            buff = ''
            while True:
                data = conn.recv(1024)
                encoded = data.decode('utf-8')

                if encoded != "":

                    if encoded != "\r\n":
                        buff += encoded

                    else:

                        if buff == 'exit':
                            conn.send(bytes(f"Closing connection...\n", 'utf-8'))
                            break

                        if buff == 'hello':
                            conn.send(bytes(f"Hello Client!\n", 'utf-8'))

                        buff = ''

                if not data:
                    break



# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    port = input("Input port: ")
    main(port=int(port))



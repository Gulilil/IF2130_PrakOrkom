# Konversi dan tulis ke stdout file berisikan hex ke bytes
import binascii  # Digunakan untuk merubah string berisikan hex ke bytes
import sys  # Digunakan untuk mengambil argumen pada command line


def main():
    cmd_arguments = sys.argv                   # Ambil argv dari command line
    payload       = b""

    if len(cmd_arguments) > 2:
        print("Invalid arguments!")
        print("Usage: hex2raw.py, hex2raw.py <nim>")
        exit(-1)

    elif len(cmd_arguments) == 2:
        nim     = cmd_arguments[1]             # Ambil NIM dari argv, bertipe data python string
        if len(nim) != 8:
            print("Invalid NIM!")
            exit(-1)
        payload += nim.encode("ascii")         # Konversi python string ke ASCII char bytes
        payload += b"\n"                       # Tambahkan newline setelah input NIM pada payload


    with open("input.txt", "r") as src:
        raw     = src.read()                   # Baca seluruh text file
        raw     = raw.replace(" ", "")         # Hapus seluruh spasi pada string
        raw     = raw.replace("\r", "")        # Hapus seluruh carriage return (CR) pada string
        raw     = raw.replace("\n", "")        # Hapus seluruh line feed (LF) pada string
        payload += binascii.unhexlify(raw)     # Konversi hex pada string menjadi bytes
        payload += b"\n"                       # Tambahkan enter pada akhir payload

    sys.stdout.buffer.write(payload)           # Tuliskan payload ke stdout



if __name__ == '__main__':
    main()

import serial

def read_serial_and_write_to_file(port, baud_rate, file_name, num_points):
    with serial.Serial(port, baud_rate, timeout=1) as ser:
        with open(file_name, 'w') as file:
            for _ in range(num_points):
                data = ser.readline().decode().strip()  # Read a line of data from the serial port
                file.write(data + '\n')  # Write data to the file

if __name__ == "__main__":
    port_name = 'COM3'  # Replace with your COM port
    baud_rate = 9600
    file_to_write = 'bright_n_dark.txt'
    number_of_data_points = 1000

    read_serial_and_write_to_file(port_name, baud_rate, file_to_write, number_of_data_points)

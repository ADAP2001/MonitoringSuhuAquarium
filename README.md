# MonitoringSuhuAquarium

Bahan dan Alat yang diperlukan:

- ESP32 Bluetooth
- Sensor Suhu DS18B20
- Resistor 4.7K ohm (untuk sensor suhu)
- LED Biru (untuk indikator Dingin)
- LED Kuning (untuk indikator Normal)
- LED Merah (untuk indikator Panas)

Skematik Diagram:
![RangkaianKedua_fix](https://user-images.githubusercontent.com/91171976/206929396-a5e7a72c-e6a9-447c-a402-e8c967a2534f.png)

Library yang dibutuhkan:
- OneWire : https://www.arduinolibraries.info/libraries/one-wire
- DallasTemperature : https://www.arduinolibraries.info/libraries/dallas-temperature
- BluetoothSerial

Tampilan Aplikasi:

![Aplikasi (1)](https://user-images.githubusercontent.com/91171976/206929755-5d3c209d-055d-4c93-bf26-46a7e6c0239b.jpg)

Penjelasan Block Aplikasi:

![image](https://user-images.githubusercontent.com/91171976/206930122-4f32a71c-fc63-4874-8957-0f33f239be3a.png)

- Berfungsi untuk menampilkan list Bluetooth Device yang tersedia.
- Setelah pair salah satu device, maka menampilkan notifikasi "Perangkat terhubung"

![image](https://user-images.githubusercontent.com/91171976/206930219-6ebf0f2f-8cea-452f-9b3f-e72a3bd133c4.png)

- Saat Perangkat Bluetooth tidak terhubung, maka akan menampilkan notifikasi "Bluetooth is not Enabled, go Settings to enable"

![image](https://user-images.githubusercontent.com/91171976/206930316-63b20abf-3d51-4789-9f2f-f5988c621dcb.png)

- Berfungsi untuk menampilkan status perangkat di tampilan aplikasi

![image](https://user-images.githubusercontent.com/91171976/206930370-47962414-773c-47a3-9d47-2e76e584a97b.png)

- Saat tekan tombol disconnect, maka perangkat Bluetooth terputus dan background berubah.

![image](https://user-images.githubusercontent.com/91171976/206930518-8bab15c4-4258-46ea-88c8-64e7dab8b2d7.png)

- Menampung data Bluetooth Client untuk dikelola ke daftar list index

![image](https://user-images.githubusercontent.com/91171976/206930815-4b9865c8-01a5-4e5b-8ec9-36fca272f9f4.png)

- Pengkondisian (if ... else), untuk status suhu di aplikasi
- Menampilkan jam sekarang.


Video Demo : https://youtu.be/TBheKc4Nkvo

# DecayTime

DecayTime is function in C++14 compute how long it takes for the remaining mass to be less than a given threshold.

**Đặc tả hàm DecayTime**

1. Mục đích

    DecayTime là hàm sử dụng C++14 để tính toán thời gian một lượng phóng xạ bán rã đến khi khối lượng bé hơn một ngưỡng cho trước. Nếu khối lượng bị giảm đi bé hơn ngưỡng ấy mà lượng phóng xạ mất đi từ 90% khối lượng ban đầu thì in ra cảnh báo.

    Thời điểm hoàn thành 1 chu kỳ bán rã mà thời điểm đó vượt quá 3600 giây kể từ khi bắt đầu quá trình, in ra cảnh báo khối lượng lúc đó.

2. Tên hàm

    DecayTime

3. Parameters

    | Tên biến    | Kiểu dữ liệu | Ý nghĩa                   | Ràng buộc       |
    |-------------|--------------|---------------------------|-----------------|
    | initialMass     | double        | Khối lượng ban đầu (g)            | 0 < initialMass <= 10^15     | 
    | halfLife    | double        | Chu kì bán rã (giây)              |  halfLife > 0   |
    | threshold       | double        | Ngưỡng cho trước (g)                   | 0.1 * initialMass  < threshold <= initialMass    | 

4. Đầu ra (Return)

    Kiểu dữ liệu: double

    Ý nghĩa: Thời gian lượng phóng xạ bán rã đến khi khối lượng bé hơn một ngưỡng cho trước.

5. Công thức tính toán

   Sau mỗi lần bán rã mất halfLife giây, khối lượng phóng xạ ban đầu giảm đi 1 nửa.


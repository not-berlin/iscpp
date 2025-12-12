//cho dãy w có n phần tử
//cần tìm ra số đoạn liên tiếp (từ l đến r) sao cho chêch lệch giữa số lớn nhất và bé nhất của mỗi đoạn không vượt quá t sao cho:
//mỗi lần chọn đoạn liên tiếp đó thỏa mãn điều kiện trên
//mỗi đoạn liên tiếp chọn sau phải khác l hoặc khác r với các đoạn đã chọn trước đó
//cho n, t, p, q, m là các số nguyên dương
//ba số p, q, m dùng để xác định w[i] theo công thức w[i] = (p * i + q) mod m
//ví dụ: n = 5, p = 3, q = 0, m = 5, dãy các số đó (3; 1; 4; 2; 0)
//xác định có tối đa bao thỏa mãn, tức là đếm số lượng dãy thỏa mãn
//giới hạn: 1 <= n <= 5*10^6; p,q,m <= 10^9; m > 0; t <= 10^9 đều là các số nguyên không âm
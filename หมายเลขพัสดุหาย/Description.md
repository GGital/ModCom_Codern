## หมายเลขพัสดุหาย

บริษัท **ModCom Express** กำลังตรวจสอบระบบติดตามพัสดุในศูนย์คัดแยกของตน โดยในแต่ละวันจะมีพัสดุส่งเข้าระบบทั้งหมด `n` ชิ้น และแต่ละชิ้นจะมีหมายเลขเฉพาะตั้งแต่ `1` ถึง `n`

แต่ในวันหนึ่ง ระบบตรวจสอบพบว่า **มีพัสดุหายไปหนึ่งชิ้น**! โดยระบบยังคงเก็บบันทึกหมายเลขของพัสดุที่เหลืออยู่ได้ทั้งหมด `n-1` หมายเลข

ทีมวิศวกรต้องการหาว่าหมายเลขพัสดุที่หายไปคือหมายเลขใด

---

## คำอธิบายอินพุต

- บรรทัดแรก: จำนวนเต็ม `n` (2 ≤ n ≤ 2×10⁵) — จำนวนพัสดุทั้งหมดที่ควรมีในวันนั้น
- บรรทัดที่สอง: จำนวนเต็ม `n - 1` ตัวคั่นด้วยช่องว่าง — หมายเลขของพัสดุที่ยังอยู่ในระบบ (ทุกหมายเลขอยู่ในช่วง 1 ถึง n และไม่ซ้ำกัน)

---

## คำอธิบายเอาต์พุต

- แสดงหมายเลขของพัสดุที่หายไป (เพียงหมายเลขเดียว)

---

## ตัวอย่างกรณีทดสอบ

| Input        | Output |
| ------------ | ------ |
| 5<br>2 3 1 5 | 4      |
| 3<br>3 1     | 2      |
| 4<br>1 4 2   | 3      |

---

## คำอธิบายเพิ่มเติม

- ในตัวอย่างแรก: หมายเลขที่ควรมีคือ `1, 2, 3, 4, 5`
  หมายเลขที่ยังอยู่: `1, 2, 3, 5`
  ดังนั้นหมายเลขที่หายไปคือ `4`

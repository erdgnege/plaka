# plaka
 Kullanıcının girdiği plaka numarasına göre Türkiye'deki şehirleri bulmayı amaçlayan basit bir C programıdır. Program, bir metin dosyasından (plaka.txt) şehir isimlerini ve plaka kodlarını okuyarak, kullanıcının girdiği plaka koduna karşılık gelen şehri ekrana yazdırır.
-Plaka kodlarının alınacağı txt file oluşturuldu.
-Txt file'a iller ve plaka kodları girildi.
-Türkçe harfleri de kullanmak istediğimizden locale.h ve wchar.h kütüphanelerini kullandık.
-Kodumuzu ona göre modifiye ettik.
-->Kodu yazarken kullandığımız illeri de text dosyası olarak ekledik.
Çıktı:
Lutfen bir plaka kodu giriniz: 61
Trabzon Doğu Karadeniz bölgesinde yer alır.
-->Added "w" to printf line for having able to use Turkish characters while running program.

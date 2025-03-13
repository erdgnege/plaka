#include <stdio.h> // Temel giriş/çıkış işlemleri için
#include <locale.h> // Türkçe dil desteği için
#include <wchar.h> // Geniş karakter desteği için

int main() {
    // Türkçe karakterler için yerel ayarı ayarla
    setlocale(LC_ALL, "Turkish");

    // Dosya işlemleri için gerekli değişkenler
    FILE *dosya;
    wchar_t sehir[50]; // Geniş karakter dizisi (Türkçe karakterler için)
    int plakaKodu, girilenKod;

    // Kullanıcıdan plaka kodu al
    wprintf(L"Lütfen bir plaka kodu giriniz: ");
    scanf("%d", &girilenKod);

    // Dosyayı açma işlemi
    dosya = fopen("plaka.txt", "r, ccs=UTF-8"); // UTF-8 kodlamasıyla aç
    if (dosya == NULL) { // Dosya açılamazsa hata ver
        wprintf(L"Dosya bulunamadı veya açılamadı!\n");
        return 1; // Programı sonlandır
    }

    // Dosyadan okuma işlemi
    int bulundu = 0; // Şehir bulundu mu diye kontrol edecek değişken
    while (fwscanf(dosya, L"%ls %d", sehir, &plakaKodu) != WEOF) {
        if (plakaKodu == girilenKod) { // Eşleşme varsa
            wprintf(L"%ls Doğu Karadeniz bölgesinde yer alır.\n", sehir);
            bulundu = 1; // Şehir bulundu
            break; // Döngüden çık
        }
    }

    // Şehir bulunamazsa hata mesajı ver
    if (!bulundu) {
        printf("Hatalı plaka kodu girdiniz!\n");
    }

    // Dosyayı kapat
    fclose(dosya);

    return 0; // Programı başarıyla sonlandır
}

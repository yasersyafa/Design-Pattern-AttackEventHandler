# Player Attack Event System - Observer & Mediator Pattern

## Description
This project is for educational purpose that implementing 2 design pattern. This project also demontrating how the player Attack by notify the subscriber to run their function

---

## Question & Answer
### 1. Apa perbedaan struktur antara Observer dan Mediator di kasus ini?
Sebenernya mirip secara tujuannya, notifying the subscribers atau the listeners. Namun dari sistemnya yang membedakan
- `Observer`: Player tau data subscribernya atau observernya secara langsung dan lebih sederhana sistemnya.
- `Mediator`: Player tidak tau data subscribernya atau observernya karena yang regist observernya adalah si mediator game event nya dan strukturnya lebih modular dan kompleks, harus menambahkan script untuk menghandler listener atau subscriber.

---

### 2. Dalam skala **game kecil**, mana yang lebih praktis?
**Observer Pattern** lebih praktis karena:
- Tidak perlu tambahan objek (Mediator).
- Struktur lebih eksplisit dan langsung.
- Mudah dipahami dan cepat diimplementasi.

*Kalo di unity mirip seperti Action, UnityAction, atau delegate function*

---

### 3. Dalam skala **game besar**, mana yang lebih scalable?
**Mediator Pattern** lebih scalable karena:
- Listener tidak perlu referensi langsung ke Player.
- Sistem event lebih mudah dikembangkan dan diuji secara terpisah.
- Event bisa dicatat, disaring, atau ditangani secara global. Makanya kalau dalam project ini ketika player menjalankan function attack, di dalamnya memanggil `mediator("attack")`

*Kalo di unity mungkin mirip seperti EventBus, atau Event ScriptableObject (jujur belum pernah menggunakan EventBus atau Event ScriptableObject).*

---

### 4. Risiko masing-masing pattern

- **Observer Pattern**
  - Risiko **tight coupling**: Perubahan di `Player` dapat berdampak ke semua listener.
  - Sulit mengatur prioritas atau jenis event spesifik.

- **Mediator Pattern**
  - Risiko **over-centralization**: Mediator jadi titik pusat yang rumit jika event makin banyak.
  - Debugging lebih sulit karena pemanggilan bersifat tidak langsung (decoupled).

---

## Demo Project
### Observer Pattern
![ObserverPattern](https://github.com/user-attachments/assets/8ac46025-7fe0-4875-8f4a-8694496121a1)

### Mediator Pattern
![MediatorPattern](https://github.com/user-attachments/assets/9866a207-e51b-4487-9d85-817237b7f4fb)

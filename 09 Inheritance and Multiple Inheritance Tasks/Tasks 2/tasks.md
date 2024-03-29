## Задача 1

Дадена е система за управление на цех. В цеха има няколко вида служители:

*Бележка: За всеки клас реализирайте методи за достъп до член-данните, конструктор с параметри и конструктор по подразбиране*

### Работник-производство:

- Име
- Фамилия
- Служителски номер (4-цифрено число)
- Отдел (име на отдел)
- Заплата
- Време, прекарано на позиция (ден, месец, година)
- Машина, за която отговаря (име на машина)

### Машинен-техник:

- Име
- Фамилия
- Служителски номер (4-цифрено число)
- Отдел (име на отдел)
- Заплата
- Време, прекарано на позиция (ден, месец, година)
- Машина, за която отговаря (име на машина)

### Мениджър-производство:

- Име
- Фамилия
- Служителски номер (4-цифрено число)
- Отдел (име на отдел)
- Заплата
- Време, прекарано на позиция (ден, месец, година)
- Отдел, за който отговаря (отделът в който принаджели мениджъра е различен, от отдела, за който отговаря)

### Външен доставчик:

- Име на доставчика (може да е има на фирма)
- Отдел
- Заплата

### Ръководител на екип:

- Име
- Фамилия
- Служителски номер (4-цифрено число)
- Отдел (име на отдел)
- Заплата
- Време, прекарано на позиция (ден, месец, година)
- Машина, за която отговаря (име на машина)
- Отдел, за който отговаря

Напишете освен клас, който да пази информация за всеки един от типовете служители. Напишете методи, които да извеждат следната информация:

- Колко общо разходи има фирмата за заплата
- Средна заплата за всеки един от отделните типове служители

## Задача 2

Даден е класа `Pair` [линк тук](https://github.com/lyubolp/OOP-SI-2021/blob/main/week06/code/pair.hpp)

Напишете клас `SerializablePair`, който наследява `Pair` (не променяйте `Pair` по никакъв начин).

Добавете следната нова функционалност в `SerializablePair`:

- метод, който връща съдържанието на `Pair` във формат `first:second`, където съответно `first` и `second` са двете стойности на `Pair`
- метод, който създава `Pair` по подаден низ в горе-посочения формат
- предефинирайте операторите за вход и изход


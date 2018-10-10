студент('Иванов', 4.5).
студент('Петров', 3).
студент('Боширов', 2).
студент('Cимонян', 4).
студент('Чепига', 1).
студент('Попов', 4.5).
студент('Дружинин', 5).

стипендия(Имя) :-
    студент(Имя, СреднийБал),
    СреднийБал>4.
    
компания('ГРУ', 4).
компания('СВР', 5).
компания('ФСБ', 4.5).
компания('Яндекс', 4).
компания('Гугл', 3).
компания('ООО "Ромашка"', 1).

  
можетРаботатьВ(ИмяСтудент, ИмяКомпании) :-
    студент(ИмяСтудент, СреднийБалСтудент),
    компания(ИмяКомпании, СреднийБалКомпания),
    СреднийБалСтудент>=СреднийБалКомпания.

/* Факты */
studied(petya,math).
studied(petya,compscience).
studied(petya,english).
studied(vasya,german).
studied(vasya,literature).

/* Правила */
studied_tech(X) :- studied(X, math).
studied_tech(X) :- studied(X, compscience).
studied_lang(X) :- studied(X,english).
studied_lang(X) :- studied(X,german).

speciality(X, tech_translator) :- studied_lang(X), studied_tech(X).
speciality(X, programmer) :- studied(X, math), studied(X, compscience).
speciality(X, lit_translator) :- studied_lang(X), studied(X, literature).
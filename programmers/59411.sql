-- 오랜 기간 보호한 동물(2)
SELECT O.ANIMAL_ID, O.NAME FROM ANIMAL_OUTS O
LEFT OUTER JOIN ANIMAL_INS I ON I.ANIMAL_ID = O.ANIMAL_ID
ORDER BY O.DATETIME - I.DATETIME DESC LIMIT 2
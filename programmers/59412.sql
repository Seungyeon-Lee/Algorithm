-- 입양 시각 구하기(1)
SELECT HOUR(DATETIME) AS HOUR, count(HOUR(DATETIME)) as COUNT
FROM ANIMAL_OUTS
WHERE HOUR(DATETIME) >= 9 AND HOUR(DATETIME) <= 19
GROUP BY HOUR ORDER BY HOUR
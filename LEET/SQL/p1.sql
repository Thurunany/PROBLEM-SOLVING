SELECT 
    pas.codpass,
    pas.nome,
    COUNT(b.codreserva)
FROM passageiros pas JOIN bilhetes b ON
b.codpass = pas.codpass
GROUP BY pas.codpass
;

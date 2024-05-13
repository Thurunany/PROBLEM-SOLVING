SELECT esp.nomeespecie
FROM especies esp
WHERE EXISTS ( SELECT tt.codespecie, count(tt.codespecie)
					       FROM (SELECT DISTINCT codespecie, matricula FROM consultas NATURAL JOIN animais) AS tt
				WHERE tt.codespecie = esp.codespecie
				GROUP BY tt.codespecie
				HAVING COUNT(tt.codespecie) = (SELECT COUNT(matricula) FROM funcionarios)
			)
;

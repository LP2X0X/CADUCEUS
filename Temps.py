with open("D:\\C++ Examples\\source\\repos\\Caduceus\\Temps.txt", "r") as f:
    rows = f.readlines()[1:]

result = 0
for i in rows:
    i = float(i)
    result = result + i

result = round(result / len(rows),5)
print(result)
with open("D:\\C++ Examples\\source\\repos\\Caduceus\\Temps_Calculated.txt", "w") as f:
    f.write(str(result))
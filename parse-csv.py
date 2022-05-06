import csv

#next(csv_reader) Skips the first line
with open('names.csv', 'r') as csv_file:
  csv_reader = csv.reader(csv_file, delimiter=',')
  line_count = 0
  for row in csv_reader:
    if line_count == 0:
      print (f'Atributos: {", ".join(row)}')
      line_count += 1
    else:
      print(f'\tNombre: {row[0]} \t\tApellido: {row[1]} \t\tEmail: {row[2]}')
      line_count += 1
  print(f'Processed {line_count} lines.')




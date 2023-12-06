import csv
csv_col=['ID','Name','country']
dict_data=[{'ID':1,'Name':'Alexa','country':'india'},
           {'ID':2,'Name':'Aleena','country':'india'},
           {'ID':3,'Name':'Minu','countrty':'USA'},
           {'ID':4,'Name':'Ebin','country':'USA'},
           {'ID':5,'Name':'jimmy','country':'india'}]
csv_file="Names.csv"
try:
    with open(csv_file,'w')as file1:
        writer=csv.Dict
        

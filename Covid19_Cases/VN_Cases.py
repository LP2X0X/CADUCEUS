# Import
import requests
import bs4
import os

# Main
res = requests.get(r'https://www.worldometers.info/coronavirus/country/viet-nam/')
res.raise_for_status()
soup = bs4.BeautifulSoup(res.text, "html.parser")

elems = soup.select('#maincounter-wrap > div > span')
elems[0] = elems[0].text.strip()
elems[1] = elems[1].text.strip()

# Make folder and files
os.chdir('D:\\C++ Examples\\source\\repos\\Caduceus')
os.makedirs('Covid19_Cases', exist_ok = True)
vn_file = open("D:\\C++ Examples\\source\\repos\\Caduceus\\Covid19_Cases\\VN_Cases.txt", 'w+')
vn_file.write(elems[0])
vn_file.write("\n")
vn_file.write(elems[1])
vn_file.close()

import requests as req
from bs4 import BeautifulSoup
from lxml import html
import difflib as diff
import time

stocksAndTickers = {
    "GameStop": "GME",
    "AMC": "AMC",
    "Blackberry": "BB",
    "Naked": "NAKD"
}
headers = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3',
        'Accept-Encoding': 'gzip, deflate, br',
        'Accept-Language': 'en-US,en;q=0.9',
        'Cache-Control': 'max-age=0',
        'Pragma': 'no-cache',
        'Referrer': 'https://google.com',
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/77.0.3865.120 Safari/537.36'
    }

while True:
    for stock in stocksAndTickers.keys():
        url = f"https://ca.finance.yahoo.com/quote/{stocksAndTickers.get(stock)}"
        page = req.get(url, headers)
        soup = BeautifulSoup(page.content, 'lxml')

        price = soup.findAll(class_="Trsdu(0.3s) Fw(b) Fz(36px) Mb(-4px) D(ib)")
        print(stock +": "+ price[0].text)
        time.sleep(5)
    time.sleep(60)
        

    
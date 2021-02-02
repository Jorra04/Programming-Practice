from creds import APIKEY
import requests
import json
import time
from datetime import datetime as dt

def StockMarketOpen(hour, minute):
    if hour >= 16:
        return False
    elif hour < 9:
        return False
    elif hour == 9:
        if minute >=30:
            return True
        return False
    return True


stocksAndTickers = {
    "GameStop": "GME",
    "AMC": "AMC",
    "Blackberry": "BB",
    "Naked": "NAKD"
}
now = dt.now()

current_hour =  int(now.strftime("%H"))
current_minute = int(now.strftime("%M"))

while StockMarketOpen(current_hour,current_minute):
    for stock in stocksAndTickers.keys():
        url = f"https://www.alphavantage.co/query?function=GLOBAL_QUOTE&symbol={stocksAndTickers.get(stock)}&apikey={APIKEY}"
        response = requests.request("GET", url)
        jsonOBJ = response.json()
        print(jsonOBJ['Global Quote']['05. price'])
        time.sleep(60)



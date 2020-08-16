from bs4 import BeautifulSoup
import requests
# Download IMDB's Top 250 data
url = 'http://www.imdb.com/chart/top'
response = requests.get(url)
soup = BeautifulSoup(response.text, 'html.parser')
title = soup.find(href="The Shawshank Redemption")
print(title)

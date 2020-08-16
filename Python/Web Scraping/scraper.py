import requests
from bs4 import BeautifulSoup

URL = 'https://www.amazon.ca/Samsung-Curved-RU7300-UN55RU7300FXZC-Version/dp/B07NC77RC7?ref_=Oct_TopRatedC_2690978011_0&pf_rd' \
      '_r=M1BJ95EQKP1CJ2TD7NHB&pf_rd_p=52ecb7ad-95d3-5a6a-a427-9dbf8cd80fed&pf_rd_s=merchandised-search-10&pf_rd_t=101&pf_rd_i=2690978011&pf_rd_m=A3DWYIK6Y9EEQB'

headers = {"User-Agent" : 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.88 Safari/537.36'}

page = requests.get(URL, headers=headers)

soup = BeautifulSoup(page.content,'html.parser')  # parses the individual information from the webpage.


title = soup.find(id="productTitle")
print(title)

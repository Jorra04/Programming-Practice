import webbrowser as wb
search=input("Please enter a google search\n")


url = 'https://www.google.com/search?q='

wb.open(url + search)

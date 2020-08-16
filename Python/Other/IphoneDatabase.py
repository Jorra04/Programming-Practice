import time
Flag = True
# All available Iphones on Apple Canada's website.
IphoneXs64 = {'name': 'Iphone Xs ', 'Storage': '64GB', 'Price':'$1,379.00', 'Screen Size': '5.8"' }
IphoneXs256 = {'name': 'Iphone Xs ', 'Storage': '256GB', 'Price':'$1,589.00', 'Screen Size': '5.8"' }
IphoneXs512 = {'name': 'Iphone Xs ', 'Storage': '512GB', 'Price':'$1,859.00', 'Screen Size': '5.8"' }

IphoneXsMax64 = {'name': 'Iphone Xs Max ', 'Storage': '64GB', 'Price':'$1,519.00', 'Screen Size': '6.5"' }
IphoneXsMax256 = {'name': 'Iphone Xs Max ', 'Storage': '256GB', 'Price':'$1,729.00', 'Screen Size': '6.5"' }
IphoneXsMax512 = {'name': 'Iphone Xs Max ', 'Storage': '512GB', 'Price':'$1,999.00', 'Screen Size': '6.5"' }

IphoneXr64 = {'name': 'Iphone Xr ', 'Storage': '64GB', 'Price':'$1,029.00', 'Screen Size': '6.1"' }
IphoneXr128 = {'name': 'Iphone Xr ', 'Storage': '128GB', 'Price':'$1,099.00', 'Screen Size': '6.1"' }
IphoneXr256 = {'name': 'Iphone Xr ', 'Storage': '256GB', 'Price':'$1,239.00', 'Screen Size': '6.1"' }

IphoneEight64 = {'name': 'Iphone 8 ', 'Storage': '64GB', 'Price':'$819.00', 'Screen Size': '4.7"' }
IphoneEight256 = {'name': 'Iphone 8 ', 'Storage': '256GB', 'Price':'$1,029.00', 'Screen Size': '4.7"' }

IphoneEightPlus64 = {'name': 'Iphone 8+ ', 'Storage': '64GB', 'Price':'$949.00', 'Screen Size': '5.5"' }
IphoneEightPlus256 = {'name': 'Iphone 8+ ', 'Storage': '256GB', 'Price':'$1,159.00', 'Screen Size': '5.5"' }

IphoneSeven32 = {'name': 'Iphone 7 ', 'Storage': '32GB', 'Price':'$629.00', 'Screen Size': '4.7"' }
IphoneSeven128 = {'name': 'Iphone 7 ', 'Storage': '128GB', 'Price':'$769.00', 'Screen Size': '4.7"' }

IphoneSevenPlus32 = {'name': 'Iphone 7+ ', 'Storage': '32GB', 'Price':'$789.00', 'Screen Size': '5.5"' }
IphoneSevenPlus128 = {'name': 'Iphone 7+ ', 'Storage': '128GB', 'Price':'$929.00', 'Screen Size': '5.5"' }

# All available Ipads on Apple Canada's website.

IpadPro10_64_WiFi = {'name': '10.5-inch Ipad Pro ', 'Storage': '64GB', 'Price':'$869.00', 'Screen Size': '10.5"' }
IpadPro10_256_WiFi = {'name': '10.5-inch Ipad Pro ', 'Storage': '256GB', 'Price':'$1,049.00', 'Screen Size': '10.5"' }
IpadPro10_512_WiFi = {'name': '10.5-inch Ipad Pro ', 'Storage': '512GB', 'Price':'$1,299.00', 'Screen Size': '10.5"' }

IpadPro10_64_Cell = {'name': '10.5-inch Ipad Pro ', 'Storage': '64GB', 'Price':'$1,039.00', 'Screen Size': '10.5" ' }
IpadPro10_256_Cell = {'name': '10.5-inch Ipad Pro ', 'Storage': '256GB', 'Price':'$1,219.00', 'Screen Size': '10.5" ' }
IpadPro10_512_Cell = {'name': '10.5-inch Ipad Pro ', 'Storage': '512GB', 'Price':'$1,469.00', 'Screen Size': '10.5" ' }

IpadPro12_64_WiFi = {'name': '12.9-inch Ipad Pro ', 'Storage': '64GB', 'Price':'$1,049.00', 'Screen Size': '12.9" ' }
IpadPro12_256_WiFi = {'name': '12.9-inch Ipad Pro ', 'Storage': '256GB', 'Price':'$1,229.00', 'Screen Size': '12.9" ' }
IpadPro12_512_WiFi = {'name': '12.9-inch Ipad Pro ', 'Storage': '512GB', 'Price':'$1,479.00', 'Screen Size': '12.9" ' }

IpadPro10_64_Cell = {'name': '12.9-inch Ipad Pro ', 'Storage': '64GB', 'Price':'$1,219.00', 'Screen Size': '12.9" ' }
IpadPro10_256_Cell = {'name': '12.9-inch Ipad Pro ', 'Storage': '256GB', 'Price':'$1,399.00', 'Screen Size': '12.9" ' }
IpadPro10_512_Cell = {'name': '12.9-inch Ipad Pro ', 'Storage': '512GB', 'Price':'$1,649.00', 'Screen Size': '12.9" ' }

iphoneXs64 = IphoneXs64.get('name') + 'is ' + IphoneXs64.get('Price')
iphoneXs256 = IphoneXs256.get('name') + 'is ' + IphoneXs256.get('Price')
iphoneXs512 = IphoneXs512.get('name') + 'is ' + IphoneXs512.get('Price')

iphoneXsMax64 = IphoneXsMax64.get('name') + 'is ' + IphoneXsMax64.get('Price')
iphoneXsMax256 = IphoneXsMax256.get('name') + 'is ' + IphoneXsMax256.get('Price')
iphoneXsMax512 = IphoneXsMax512.get('name') + 'is ' + IphoneXsMax512.get('Price')

iphoneXr64 = IphoneXr64.get('name') + 'is ' + IphoneXr64.get('Price')
iphoneXr128 = IphoneXr128.get('name') + 'is ' + IphoneXr128.get('Price')
iphoneXr256 = IphoneXr256.get('name') + 'is ' + IphoneXr256.get('Price')

iphoneEight64 = IphoneEight64.get('name') + 'is ' + IphoneEight64.get('Price')
iphoneEight256 = IphoneEight256.get('name') + 'is ' + IphoneEight256.get('Price')

iphoneEightPlus64 = IphoneEightPlus64.get('name') + 'is ' + IphoneEightPlus64.get('Price')
iphoneEightPlus256 = IphoneEightPlus256.get('name') + 'is ' + IphoneEightPlus256.get('Price')

iphoneSeven32 = IphoneSeven32.get('name') + 'is ' + IphoneSeven32.get('Price')
iphoneSeven128 = IphoneSeven128.get('name') + 'is ' + IphoneSeven128.get('Price')

iphoneSevenPlus32 =  IphoneSevenPlus32.get('name') + 'is ' +   IphoneSevenPlus32.get('Price')
iphoneSevenPlus128 = IphoneSevenPlus128.get('name') + 'is ' + IphoneSevenPlus128.get('Price')

ipadPro10_64_WiFi =  IpadPro10_64_WiFi.get('name') + 'is ' +  IpadPro10_64_WiFi.get('Price')
ipadPro10_256_WiFi = IpadPro10_256_WiFi.get('name') + 'is ' + IpadPro10_256_WiFi.get('Price')
ipadPro10_512_WiFi = IpadPro10_512_WiFi.get('name') + 'is ' + IpadPro10_512_WiFi.get('Price')

ipadPro10_64_Cell =  IpadPro10_64_Cell.get('name') + 'is ' +  IpadPro10_64_Cell.get('Price')
ipadPro10_256_Cell = IpadPro10_256_Cell.get('name') + 'is ' + IpadPro10_256_Cell.get('Price')
ipadPro10_512_Cell = IpadPro10_512_Cell.get('name') + 'is ' + IpadPro10_512_Cell.get('Price')

ipadPro12_64_WiFi =  IpadPro12_64_WiFi.get('name') + 'is ' +  IpadPro12_64_WiFi.get('Price')
ipadPro12_256_WiFi = IpadPro12_256_WiFi.get('name') + 'is ' + IpadPro12_256_WiFi.get('Price')
ipadPro12_512_WiFi = IpadPro12_512_WiFi.get('name') + 'is ' + IpadPro12_512_WiFi.get('Price')

ipadPro12_64_Cell =  IpadPro12_64_WiFi.get('name') + 'is ' +  IpadPro12_64_WiFi.get('Price')
ipadPro12_256_Cell = IpadPro12_256_WiFi.get('name') + 'is ' + IpadPro12_256_WiFi.get('Price')
ipadPro12_512_Cell = IpadPro12_512_WiFi.get('name') + 'is ' + IpadPro12_512_WiFi.get('Price')





while Flag:
    Product = input("What product are you interested today?  ")
    if Product == "iphone Xs" or Product == "Iphone Xs" or Product == "iphone xs" or Product == "Iphone xs":
        Storage = input("How much storage are you interested in? 64GB, 256GB or 512Gb?  ")
        if Storage == "64" or Storage == "64GB" or Storage == "64gb" or Storage == "64Gb":
            print("The 64GB", iphoneXs64 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "256" or Storage == "256GB" or Storage == "256gb" or Storage == "256Gb":
            print("The 256GB", iphoneXs256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "512" or Storage == "512GB" or Storage == "512gb" or Storage == "512Gb":
            print("The 512GB", iphoneXs256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True  
        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False   
    elif Product == "iphone Xs max" or Product == "Iphone Xs Max " or Product == "iphone xs max" or Product == "Iphone xs Max":
        Storage = input("How much storage are you interested in? 64GB, 256GB or 512Gb?  ")
        if Storage == "64" or Storage == "64GB" or Storage == "64gb" or Storage == "64Gb":
            print("The 64GB", iphoneXsMax64 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "256" or Storage == "256GB" or Storage == "256gb" or Storage == "256Gb":
            print("The 256GB", iphoneXsMax256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "512" or Storage == "512GB" or Storage == "512gb" or Storage == "512Gb":
            print("The 512GB", iphoneXsMax256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True 
        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False

    elif Product == "iphone Xr" or Product == "Iphone XR" or Product == "iphone xr" or Product == "Iphone Xr":
        Storage = input("How much storage are you interested in? 64GB, 256GB or 512Gb?  ")
        if Storage == "64" or Storage == "64GB" or Storage == "64gb" or Storage == "64Gb":
            print("The 64GB", iphoneXr64 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "128" or Storage == "128GB" or Storage == "128gb" or Storage == "128Gb":
            print("The 128GB", iphoneXr128 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "256" or Storage == "256GB" or Storage == "256gb" or Storage == "256Gb":
            print("The 256GB", iphoneXr256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True 
        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False

    elif Product == "iphone eight" or Product == "Iphone Eight" or Product == "iphone 8" or Product == "Iphone 8":
        Storage = input("How much storage are you interested in? 64GB, 256GB  ")
        if Storage == "64" or Storage == "64GB" or Storage == "64gb" or Storage == "64Gb":
            print("The 64GB", iphoneEight64 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "256" or Storage == "256GB" or Storage == "256gb" or Storage == "256Gb":
            print("The 256GB", iphoneEight256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False
                
    elif Product == "iphone eight plus" or Product == "Iphone Eight Plus" or Product == "iphone 8 +" or Product == "Iphone 8 +":
        Storage = input("How much storage are you interested in? 64GB, 256GB  ")
        if Storage == "64" or Storage == "64GB" or Storage == "64gb" or Storage == "64Gb":
            print("The 64GB", iphoneEightPlus64 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "256" or Storage == "256GB" or Storage == "256gb" or Storage == "256Gb":
            print("The 256GB", iphoneEightPlus256 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True

        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False
            
    elif Product == "iphone seven" or Product == "Iphone Seven" or Product == "iphone 7" or Product == "Iphone 7":
        Storage = input("How much storage are you interested in? 31GB, 128GB  ")
        if Storage == "32" or Storage == "32GB" or Storage == "32gb" or Storage == "32Gb":
            print("The 32GB", iphoneSeven32 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "128" or Storage == "128GB" or Storage == "128gb" or Storage == "128Gb":
            print("The 128GB", iphoneSeven128 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True

        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False

    elif Product == "iphone seven plus" or Product == "Iphone Seven Plus" or Product == "iphone 7 +" or Product == "Iphone 7 +":
        Storage = input("How much storage are you interested in? 64GB, 256GB  ")
        if Storage == "32" or Storage == "32GB" or Storage == "32gb" or Storage == "32Gb":
            print("The 32GB", iphoneSevenPlus32 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        elif Storage == "128" or Storage == "128GB" or Storage == "128gb" or Storage == "128Gb":
            print("The 128GB", iphoneSevenPlus128 + ".")
            time.sleep(1.5)
            Helpful = input("May i help you with anything else?  ")
            if Helpful == "no" or Helpful == "No":
                print("Okay thank you have a great day.")
                time.sleep(3)
                Flag = False
            elif Helpful == "yes" or Helpful == "Yes":
                Flag = True
        else:
            print("We do not currently have that product available, sorry for any inconvinience.")
            Question2 = input("Can we help you with anything else?  ")
            if Question2 == "yes" or Question2 == "Yes":
                Flag =  True
            elif Question2 == "no" or Question2 == "No":
                print("Okay, Thank you have a wonderful day!")
                time.sleep(1.5)
                Flag = False  
    else:
        print("We currently do not carry what you are looking for.")
        time.sleep(1)
        Question = input("Did you mispell your inquery?  ")
        if Question == "yes" or Question == "Yes":
            time.sleep(1.5)
            Flag = True
        else:
            print("Sorry for the inconvinience. We hope you have a great day!")
            Flag = False
            time.sleep(1.5)
    
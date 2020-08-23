from playsound import playsound
import keyboard as kb
class Streamer_Deck:
    def __init__(self):
        self.__path = "C:\\Users\\Jorra\\OneDrive\\Documents\\Personal\\Coding practice\\Programming-Practice\\Python\\Sound Deck\\sounds\\"
        
    def play_sound(self, path):
        playsound(self.__path + path)


sd = Streamer_Deck()

while True:
    if kb.is_pressed("1"):
        sd.play_sound("Bruh.mp3")
        
    elif kb.is_pressed("2"):
        sd.play_sound("Hi_how_are_ya.mp3")
    elif kb.is_pressed("3"):
        sd.play_sound("Lightsaber.mp3")
    elif kb.is_pressed("4"):
        sd.play_sound("swamp_in_shrek.mp3")
    elif kb.is_pressed("esc"):
        break
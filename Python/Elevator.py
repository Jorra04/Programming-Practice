class Elevator:
    __current_level = 0
    __MAX_LEVEL = 50
    __MIN_LEVEL = -2

    def __init__(self, current_level=-2):
        pass
    def go_up(self, dist=1):
        if(dist == 1):
            print("Moving up 1 level.")
        else:
            print("Moving up " + str(dist) + " levels.")
        
        if(self.__current_level + dist > self.__MAX_LEVEL):
            print("Reached max height.")
            self.__current_level = self.__MAX_LEVEL
        else:
            self.__current_level += dist
    def go_down(self, dist=1):
        if(dist == 1):
            print("Moving down 1 level.")

        else:
            print("Moving down " + str(dist) + " levels.")
        
        if(self.__current_level - dist <self.__MIN_LEVEL):
            print("Reached min height.")
            self.__current_level = self.__MIN_LEVEL
        else:
            self.__current_level -= dist
    def get_MAX_LEVEL(self)->int:
        return self.__MAX_LEVEL

    def get_MIN_LEVEL(self)->int:
        return self.__MIN_LEVEL
    def get_curr_level(self)->int:
        return self.__current_level


##### Debugging #####
elevator = Elevator()

elevator.go_up()
print(elevator.get_curr_level())
elevator.go_up(25)
print(elevator.get_curr_level())
elevator.go_up(26)
print(elevator.get_curr_level())
elevator.go_down(22)
print(elevator.get_curr_level())
elevator.go_down()
print(elevator.get_curr_level())
elevator.go_down(35)
print(elevator.get_curr_level())

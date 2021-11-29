import pygame
from random import seed
from random import random

class Visible:
    def __init__(self, sprite_path, x, y):
        self.sprite_path = sprite_path
        self.x = x
        self.y = y
        self.surface = pygame.image.load(sprite_path)

class Character(Visible):
    def __init__(self, sprite_path, x, y, name, speed):
        Visible.__init__(self, sprite_path, x, y)
        self.name = name
        self.speed = speed
        self.current_mood = 'Normal'
        self.current_state = 'Idle'


    def walk_aimless(self):

        seed(1)
        if self.current_state == 'Idle':
            self.speed = 0
        else:
            self.speed = 5
        if ((random() % 2) == 0):
            self.current_state == 'Idle'
        else:
            self.current_state == 'Walking'


    states = [ 'Idle', 'Walking' ]
    moods = ['Sad', 'Normal', 'Happy']

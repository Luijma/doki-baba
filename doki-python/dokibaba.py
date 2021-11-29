#!usr/bin/python3
import pygame
from sys import exit
import visible

pygame.init()
screen = pygame.display.set_mode((800, 400))
pygame.display.set_caption('DokiBaba')
clock = pygame.time.Clock()
test_font = pygame.font.Font('font/Pixelmania.ttf', 50)

garden_surface = pygame.image.load('graphics/pixel-garden.png')
doki = visible.Character('graphics/animation/chao-sprites/Idle/tile045.png', 250, 125, 'Doki', 3)
# chao_surface = pygame.image.load('graphics/animation/chao-sprites/Idle/tile045.png')
text_surface = test_font.render('Doki Baba', False, 'deeppink4')

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
    
    # Draw all our elements
    screen.blit(garden_surface, (0,-100))
    doki.x += doki.speed
    screen.blit(doki.surface, (doki.x, doki.y))
    screen.blit(text_surface,(300, 50))

    # update everything
    #doki.walk_aimless()
    pygame.display.update()
    clock.tick(60)

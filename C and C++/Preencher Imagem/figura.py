import os
import sys

import pygame

WIDTH = 50
HEIGHT = 50
D = 10

class figura:
    def __init__(self, fnome):
        self.fnome = fnome
        self.pix = (WIDTH * HEIGHT) * '0'
        if os.path.exists(fnome):
            try:
                f = open(fnome, "r")
                self.pix = f.read()
                f.close()
            except:
                print "Nao pode carregar arquivo %s\n" % self.fnome
    def draw(self, dest):
        dest.fill((255, 255, 255))
        for k in xrange( len(self.pix) ):
            col = k % WIDTH
            lin = k / WIDTH
            r = lin * D, col * D, D, D
            if self.pix[k]=='1':
                pygame.draw.rect(dest, (0, 0, 200), r)
            pygame.draw.rect(dest, (0, 0, 0), r, 1)
    def check(self, lin, col):
        k = lin*WIDTH + col
        self.pix = self.pix[:k] + '1' + self.pix[k+1:]
    def uncheck(self, lin, col):
        k = lin*WIDTH + col
        self.pix = self.pix[:k] + '0' + self.pix[k+1:]
    def salvar(self):
        f = open(self.fnome, "w")
        f.write(self.pix)
        f.close()

if len(sys.argv) != 2:
    print "Voce precisa dizer um nome de arquivo a carregar ou criar\n"
    sys.exit()

pygame.init()
size = WIDTH * D, HEIGHT * D
saida = pygame.display.set_mode(size)
f = figura(sys.argv[1])

while 1:
    for e in pygame.event.get():
        if e.type == pygame.QUIT:
            f.salvar()
            sys.exit()
        if e.type == pygame.MOUSEBUTTONDOWN:
            if e.button == 0:
                f.check(e.pos[0] / D, e.pos[1] / D)
        if e.type == pygame.MOUSEMOTION:
            if e.buttons[0]:
                f.check(e.pos[0] / D, e.pos[1] / D)
    f.draw(saida)
    pygame.display.flip()

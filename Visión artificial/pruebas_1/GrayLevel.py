from PIL import Image
from numpy import *
im = array(Image.open('miku.jpg').convert('L'))
im2 = 255 - im #invert image
im3 = (100.0/255) * im + 100 #clamp to interval 100...200
im4 = 255.0 * (im/255.0)**2 #squared

